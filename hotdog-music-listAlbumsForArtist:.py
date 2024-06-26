#!/usr/bin/env python3

import functools
import os
import mutagen.mp4
import mutagen.mp3
import urllib.parse
import base64
import PIL.Image
import io
import sys

if len(sys.argv) < 2:
    print("specify artist, or '' for all artists", file=sys.stderr)
    sys.exit(1)
matchArtist = sys.argv[1]

allAlbums = {}
allCoverart = {}

files = os.listdir()
for file in files:
    if not os.path.isfile(file):
        continue

    artist = ''
    album = ''
    name = ''
    track = ''
    coverart = ''

    lcfile = file.lower()
    if lcfile.endswith('.m4a'):
        try:
            obj = mutagen.mp4.MP4(file)
        except:
            continue
        keys = obj.keys()

        if '\xa9ART' in keys:
            artist = obj['\xa9ART'][0]
        if '\xa9alb' in keys:
            album = obj['\xa9alb'][0]
        if '\xa9nam' in keys:
            name = obj['\xa9nam'][0]
        if 'trkn' in keys:
            track = str(obj['trkn'][0][0])
        if 'covr' in keys:
            coverart = obj['covr'][0]
#            imageformat = coverart.imageformat
#            if imageformat == mutagen.mp4.MP4Cover.FORMAT_JPEG:
#                coverartjpeg = base64.b64encode(coverart).decode('ascii')
#            elif imageformat == mutagen.mp4.MP4Cover.FORMAT_PNG:
#                coverartpng = base64.b64encode(coverart).decode('ascii')
    elif lcfile.endswith('.mp3'):
        try:
            obj = mutagen.mp3.MP3(file)
        except:
            continue
        keys = obj.keys()
        if 'TPE1' in keys:
            artist = str(obj['TPE1'])
        if 'TALB' in keys:
            album = str(obj['TALB'])
        if 'TIT2' in keys:
            name = str(obj['TIT2'])
        if 'TRCK' in keys:
            track = str(obj['TRCK'])
        if 'APIC:' in keys:
            coverart = obj['APIC:'].data

    if not artist:
        artist = "Unknown Artist"

    if not album:
        album = "Unknown Album"

    if matchArtist:
        if matchArtist != artist:
            continue

    if coverart:
        allCoverart[album] = coverart

    allAlbums[album] = artist

def mycompare(a, b):
    lca = a.lower()
    lcb = b.lower()
    if lca[0].isalpha() and lcb[0].isalpha():
        if lca < lcb:
            return -1
        elif lca > lcb:
            return 1
        else:
            return 0
    elif lca[0].isalpha():
        return -1
    elif lcb[0].isalpha():
        return 1
    else:
        if lca < lcb:
            return -1
        elif lca > lcb:
            return 1
        else:
            return 0

keys = sorted(allAlbums.keys(), key=functools.cmp_to_key(mycompare))

for key in keys:
    name = key

    detail = allAlbums[key]

    name = urllib.parse.quote(name)
    detail = urllib.parse.quote(detail)

    coverart = ''
    if key in allCoverart:
        inputdata = io.BytesIO(allCoverart[key])
        try:
            image = PIL.Image.open(inputdata)
            image = image.convert('RGB')
            image = image.resize((80, 80))
            outputdata = io.BytesIO()
            image.save(outputdata, 'PPM')
            coverart = base64.b64encode(outputdata.getvalue()).decode('ascii')
        except:
            pass
        
    print("name:%s detail:%s coverart:%s" % (name, detail, coverart))
    



