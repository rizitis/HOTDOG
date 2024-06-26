/*

 HOTDOG

 Copyright (c) 2020 Arthur Choung. All rights reserved.

 Email: arthur -at- hotdogpucko.com

 This file is part of HOTDOG.

 HOTDOG is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <https://www.gnu.org/licenses/>.

 */

#import "HOTDOG.h"

static char *computerPalette =
"b #000000\n"
". #222222\n"
"X #444444\n"
"o #555555\n"
"+ #777777\n"
"@ #DD0000\n"
"# #00BB00\n"
"$ #888888\n"
"& #cccccc\n"
"* #ccccff\n"
"= #ffffff\n"
;
static char *selectedComputerPalette =
"b #000000\n"
". #111111\n"
"X #222222\n"
"o #2a2a2a\n"
"+ #3b3b3b\n"
"@ #6e0000\n"
"# #005d00\n"
"$ #444444\n"
"& #666666\n"
"* #33337f\n"
"= #7f7f7f\n"
;
static char *computerPixels =
" bbbbbbbbbbbbbbbbbbbbbb \n"
"b&&&&&&&&&&&&&&&&&&&&&&b\n"
"b&&&&&&&&&&&&&&&&&&&&&&b\n"
"b&&&XXXXXXXXXXXXXXXX&&&b\n"
"b&&X****************=&&b\n"
"b&&X****************=&&b\n"
"b&&X****************=&&b\n"
"b&&X****************=&&b\n"
"b&&X****************=&&b\n"
"b&&X****************=&&b\n"
"b&&X****************=&&b\n"
"b&&X****************=&&b\n"
"b&&X****************=&&b\n"
"b&&X****************=&&b\n"
"b&&X****************=&&b\n"
"b&&X****************=&&b\n"
"b&&&================&&&b\n"
"b&&&&&&&&&&&&&&&&&&&&&&b\n"
"b&&&&&&&&&&&&&&&&&&&&&&b\n"
"b&&&&&&&&&&&&&&&&&&&&&&b\n"
"b&&&&&&&&&&&&&&&&&&&&&&b\n"
"b&&&&&&&&&&&bbbbbbbb&&&b\n"
"b&&&&&&&&&&&========&&&b\n"
"b&&##&&&&&&&&&&&&&&&&&&b\n"
"b&&@@&&&&&&&&&&&&&&&&&&b\n"
"b&&&&&&&&&&&&&&&&&&&&&&b\n"
" bbbbbbbbbbbbbbbbbbbbbb \n"
" booooooXXXXX.........b \n"
" b++++++++ooXXXX......b \n"
" b$$$$$$$$+++ooXXXX...b \n"
" bbbbbbbbbbbbbbbbbbbbbb \n"
;

static char *openComputerPalette =
"b #000000\n"
". #606060\n"
"X #A0A0A0\n"
"o #CCCCFF\n"
"O #ffffff\n"
;

static char *openComputerPixels =
" bbbbbbbbbbbbbbbbbbbbbb \n"
"boooboooboooboooboooboob\n"
"bobooobooobooobooobooobb\n"
"boooboooboooboooboooboob\n"
"bobooobooobooobooobooobb\n"
"boooboooboooboooboooboob\n"
"bobooobooobooobooobooobb\n"
"boooboooboooboooboooboob\n"
"bobooobooobooobooobooobb\n"
"boooboooboooboooboooboob\n"
"bobooobooobooobooobooobb\n"
"boooboooboooboooboooboob\n"
"bobooobooobooobooobooobb\n"
"boooboooboooboooboooboob\n"
"bobooobooobooobooobooobb\n"
"boooboooboooboooboooboob\n"
"bobooobooobooobooobooobb\n"
"boooboooboooboooboooboob\n"
"bobooobooobooobooobooobb\n"
"boooboooboooboooboooboob\n"
"bobooobooobooobooobooobb\n"
"boooboooboooboooboooboob\n"
"bobooobooobooobooobooobb\n"
"boooboooboooboooboooboob\n"
"bobooobooobooobooobooobb\n"
"boooboooboooboooboooboob\n"
" bbooobooobooobooobooob \n"
" boobooobooobooobooobob \n"
" bbooobooobooobooobooob \n"
" boobooobooobooobooobob \n"
" bbbbbbbbbbbbbbbbbbbbbb \n"
;
static char *selectedOpenComputerPalette =
"b #000000\n"
". #33337F\n"
"X #606060\n"
"o #A0A0A0\n"
"O #ffffff\n"
;
static char *selectedOpenComputerPixels =
" bbbbbbbbbbbbbbbbbbbbbb \n"
"b...b...b...b...b...b..b\n"
"b.b...b...b...b...b...bb\n"
"b...b...b...b...b...b..b\n"
"b.b...b...b...b...b...bb\n"
"b...b...b...b...b...b..b\n"
"b.b...b...b...b...b...bb\n"
"b...b...b...b...b...b..b\n"
"b.b...b...b...b...b...bb\n"
"b...b...b...b...b...b..b\n"
"b.b...b...b...b...b...bb\n"
"b...b...b...b...b...b..b\n"
"b.b...b...b...b...b...bb\n"
"b...b...b...b...b...b..b\n"
"b.b...b...b...b...b...bb\n"
"b...b...b...b...b...b..b\n"
"b.b...b...b...b...b...bb\n"
"b...b...b...b...b...b..b\n"
"b.b...b...b...b...b...bb\n"
"b...b...b...b...b...b..b\n"
"b.b...b...b...b...b...bb\n"
"b...b...b...b...b...b..b\n"
"b.b...b...b...b...b...bb\n"
"b...b...b...b...b...b..b\n"
"b.b...b...b...b...b...bb\n"
"b...b...b...b...b...b..b\n"
" bb...b...b...b...b...b \n"
" b..b...b...b...b...b.b \n"
" bb...b...b...b...b...b \n"
" b..b...b...b...b...b.b \n"
" bbbbbbbbbbbbbbbbbbbbbb \n"
;

@interface MacColorComputerIcon : IvarObject
{
    id _path;
    BOOL _buttonDown;
    int _buttonDownX;
    int _buttonDownY;
    id _buttonDownTimestamp;

    id _dragX11Dict;
}
@end
@implementation MacColorComputerIcon
- (int)preferredWidth
{
    static int w = 0;
    if (!w) {
        w = [Definitions widthForCString:computerPixels];
        if ([_path length]) {
            id bitmap = [Definitions bitmapWithWidth:1 height:1];
            [bitmap useMonacoFont];
            int textWidth = [bitmap bitmapWidthForText:_path];
            if (textWidth > w) {
                w = textWidth;
            }
        }
    }
    return w;
}
- (int)preferredHeight
{
    static int h = 0;
    if (!h) {
        h = [Definitions heightForCString:computerPixels];
        if ([_path length]) {
            id bitmap = [Definitions bitmapWithWidth:1 height:1];
            [bitmap useMonacoFont];
            int textHeight = [bitmap bitmapHeightForText:_path];
            h += textHeight;
        }
    }
    return h;
}

- (void)drawInBitmap:(id)bitmap rect:(Int4)r context:(id)context
{
    int isOpen = 0;
    if ([Definitions getMacColorDirForPath:_path]) {
        isOpen = 1;
    }

    int isSelected = [context intValueForKey:@"isSelected"];

    BOOL hasFocus = NO;
    {
        id windowManager = [@"windowManager" valueForKey];
        unsigned long focusInEventWindow = [[windowManager valueForKey:@"focusInEventWindow"] unsignedLongValue];
        unsigned long win = [[context valueForKey:@"window"] unsignedLongValue];
        if (focusInEventWindow && (focusInEventWindow == win)) {
            hasFocus = YES;
        }
    }

    int w = [Definitions widthForCString:computerPixels];
    int h = [Definitions heightForCString:computerPixels];

    if (hasFocus || isSelected) {
        if (isOpen) {
            [bitmap drawCString:selectedOpenComputerPixels palette:selectedOpenComputerPalette x:r.x+(r.w-w)/2 y:r.y];
        } else {
            [bitmap drawCString:computerPixels palette:selectedComputerPalette x:r.x+(r.w-w)/2 y:r.y];
        }
    } else {
        if (isOpen) {
            [bitmap drawCString:openComputerPixels palette:openComputerPalette x:r.x+(r.w-w)/2 y:r.y];
        } else {
            [bitmap drawCString:computerPixels palette:computerPalette x:r.x+(r.w-w)/2 y:r.y];
        }
    }
    if ([_path length]) {
        [bitmap useMonacoFont];
        int textWidth = [bitmap bitmapWidthForText:_path];
        int textHeight = [bitmap bitmapHeightForText:_path];
        if (hasFocus || isSelected) {
            [bitmap setColor:@"black"];
        } else {
            [bitmap setColor:@"white"];
        }
        [bitmap fillRectangleAtX:r.x+(r.w-textWidth)/2 y:r.y+h w:textWidth h:textHeight];
        if (hasFocus || isSelected) {
            [bitmap setColor:@"white"];
        } else {
            [bitmap setColor:@"black"];
        }
        [bitmap drawBitmapText:_path x:r.x+(r.w-textWidth)/2 y:r.y+h];
    }

    id windowManager = [@"windowManager" valueForKey];
    unsigned long win = [[context valueForKey:@"window"] unsignedLongValue];
    if (win) {
        [windowManager addMaskToWindow:win bitmap:bitmap];
    }
}

- (void)handleMouseDown:(id)event
{
    id windowManager = [@"windowManager" valueForKey];
    id x11dict = [event valueForKey:@"x11dict"];

    {
        unsigned long win = [[x11dict valueForKey:@"window"] unsignedLongValue];
        if (win) {
            [windowManager XRaiseWindow:win];
        }
    }

    int mouseX = [event intValueForKey:@"mouseX"];
    int mouseY = [event intValueForKey:@"mouseY"];
    _buttonDown = YES;
    _buttonDownX = mouseX;
    _buttonDownY = mouseY;

    if (![x11dict intValueForKey:@"isSelected"]) {
        id objectWindows = [windowManager valueForKey:@"objectWindows"];
        for (int i=0; i<[objectWindows count]; i++) {
            id elt = [objectWindows nth:i];
            [elt setValue:nil forKey:@"isSelected"];
            [elt setValue:@"1" forKey:@"needsRedraw"];
        }
        [x11dict setValue:@"1" forKey:@"isSelected"];
        [x11dict setValue:@"1" forKey:@"needsRedraw"];
    }

    id timestamp = [Definitions gettimeofday];
    if (_buttonDownTimestamp) {
        if ([timestamp doubleValue]-[_buttonDownTimestamp doubleValue] <= 0.3) {
            [self setValue:nil forKey:@"buttonDownTimestamp"];
            if ([self respondsToSelector:@selector(handleDoubleClick)]) {
                [self handleDoubleClick];
            }
            return;
        }
    }
    [self setValue:timestamp forKey:@"buttonDownTimestamp"];
}

- (void)handleMouseMoved:(id)event
{
    id x11dict = [event valueForKey:@"x11dict"];

    if (!_buttonDown && !_dragX11Dict) {
        return;
    }

    int mouseRootX = [event intValueForKey:@"mouseRootX"];
    int mouseRootY = [event intValueForKey:@"mouseRootY"];

    if (!_dragX11Dict) {
        id windowManager = [event valueForKey:@"windowManager"];
        id objectWindows = [windowManager valueForKey:@"objectWindows"];

        id newx11dict = [Definitions selectedBitmapForSelectedItemsInArray:objectWindows buttonDownElt:x11dict offsetX:_buttonDownX y:_buttonDownY mouseRootX:mouseRootX y:mouseRootY windowManager:windowManager];

        [self setValue:newx11dict forKey:@"dragX11Dict"];
    } else {

        int newX = mouseRootX - [_dragX11Dict intValueForKey:@"buttonDownOffsetX"];
        int newY = mouseRootY - [_dragX11Dict intValueForKey:@"buttonDownOffsetY"];

        [_dragX11Dict setValue:nsfmt(@"%d", newX) forKey:@"x"];
        [_dragX11Dict setValue:nsfmt(@"%d", newY) forKey:@"y"];

        [_dragX11Dict setValue:nsfmt(@"%d %d", newX, newY) forKey:@"moveWindow"];
    }
}
- (void)handleMouseUp:(id)event
{
    _buttonDown = NO;
    id x11dict = [event valueForKey:@"x11dict"];
    if (_dragX11Dict) {

        id windowManager = [event valueForKey:@"windowManager"];
        unsigned long window = [_dragX11Dict unsignedLongValueForKey:@"window"];
        int mouseRootX = [event intValueForKey:@"mouseRootX"];
        int mouseRootY = [event intValueForKey:@"mouseRootY"];

        unsigned long underneathWindow = [windowManager topMostWindowUnderneathWindow:window x:mouseRootX y:mouseRootY];
        if (underneathWindow) {
            id underneathx11dict = [windowManager dictForObjectWindow:underneathWindow];
            if (underneathx11dict == x11dict) {
            } else {
                id object = [underneathx11dict valueForKey:@"object"];
                if ([object respondsToSelector:@selector(handleDragAndDrop:)]) {
                    [object handleDragAndDrop:_dragX11Dict];
                } else {
                    [nsfmt(@"Dropped onto window %lu", underneathWindow) showAlert];
                }
            }
        } else {
            int oldX = [x11dict intValueForKey:@"x"];
            int oldY = [x11dict intValueForKey:@"y"];
            int newX = mouseRootX - _buttonDownX;
            int newY = mouseRootY - _buttonDownY;
            int deltaX = newX - oldX;
            int deltaY = newY - oldY;
            id objectWindows = [windowManager valueForKey:@"objectWindows"];
            for (int i=0; i<[objectWindows count]; i++) {
                id elt = [objectWindows nth:i];
                if (![elt intValueForKey:@"isSelected"]) {
                    continue;
                }
                newX = [elt intValueForKey:@"x"] + deltaX;
                newY = [elt intValueForKey:@"y"] + deltaY;
                [elt setValue:nsfmt(@"%d", newX) forKey:@"x"];
                [elt setValue:nsfmt(@"%d", newY) forKey:@"y"];
                [elt setValue:nsfmt(@"%d %d", newX, newY) forKey:@"moveWindow"];
            }
        }

        [_dragX11Dict setValue:@"1" forKey:@"shouldCloseWindow"];
        [self setValue:nil forKey:@"dragX11Dict"];
    }
}

- (void)handleRightMouseDown:(id)event
{
    id windowManager = [event valueForKey:@"windowManager"];
    int mouseRootX = [event intValueForKey:@"mouseRootX"];
    int mouseRootY = [event intValueForKey:@"mouseRootY"];

    id obj = nil;//[[menuCSV parseCSVFromString] asMenu];
    if (obj) {
        [obj setValue:self forKey:@"contextualObject"];
        [windowManager openButtonDownMenuForObject:obj x:mouseRootX y:mouseRootY w:0 h:0];
    }
}
- (void)handleDoubleClick
{
    [self handleOpen];
}
- (void)handleOpen
{
    if ([_path length]) {
        [Definitions openMacColorDirForPath:_path];
    }
}
- (void)handleDragAndDrop:(id)obj
{
    [nsfmt(@"%@ dropped onto %@", obj, self) showAlert];
}
@end

