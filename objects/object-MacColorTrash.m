/*

 HOT DOG Linux

 Copyright (c) 2020 Arthur Choung. All rights reserved.

 Email: arthur -at- hotdoglinux.com

 This file is part of HOT DOG Linux.

 HOT DOG Linux is free software: you can redistribute it and/or modify
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

#include <sys/time.h>

static id menuCSV =
@"displayName,messageForClick\n"
@"\"Open Trash\",\"handleOpen\"\n"
@",\n"
@"Quit,\"exit:0\"\n"
;

static char *trashPalette =
"b #000000\n"
". #222222\n"
"X #444444\n"
"o #555555\n"
"+ #777777\n"
"@ #888888\n"
"$ #aaaaaa\n"
"% #bbbbbb\n"
"& #dddddd\n"
"* #ffffff\n"
;

static char *selectedTrashPalette =
"b #000000\n"
". #111111\n"
"X #222222\n"
"o #2a2a2a\n"
"+ #3b3b3b\n"
"@ #444444\n"
"$ #555555\n"
"% #5d5d5d\n"
"& #6e6e6e\n"
"* #7f7f7f\n"
;

static char *trashPixels =
"            bbbbbb            \n"
"           b+&&$+Xb           \n"
"     bbbbbbbbbbbbbbbbbbbb     \n"
"    bX++$$&*&&$$@@+++ooXXb    \n"
"    bbbbbbbbbbbbbbbbbbbbbb    \n"
"     b+$%&&&%%%$$$$++ooob     \n"
"     b+$%***&&&&$$$$$+oob     \n"
"     b+$&***+&&&$o$$++oob     \n"
"     b+$$&*+$$&&o++$+.+ob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$$&*+$$&&o++$+.oob     \n"
"     b+$&***+&&&$o$$+o+ob     \n"
"     b+$%***&&&&&$$$++oob     \n"
"     b+$&***&&%%$$+++ooob     \n"
"      bbbbbbbbbbbbbbbbbb      \n"
"******************************\n"
"******************************\n"
"******************************\n"
"**bbbbb****************b******\n"
"****b******************b******\n"
"****b***b*bb**bb***bbb*bbb****\n"
"****b***bb******b*b****b**b***\n"
"****b***b*****bbb**bb**b**b***\n"
"****b***b****b**b****b*b**b***\n"
"****b***b*****bbb*bbb**b**b***\n"
"******************************\n"
"******************************\n"
;


@implementation Definitions(INMfewlfmklsdmvklsjdklfjklsdffjdkslmfklxcmvklcfdsmkfmekkfxdsfmneoiiooikl)
+ (id)MacColorTrash
{
    id obj = [@"MacColorTrash" asInstance];
    return obj;
}
@end


@interface MacColorTrash : IvarObject
{
    int _buttonDown;
    int _buttonDownX;
    int _buttonDownY;
    id _buttonDownTimestamp;
}
@end
@implementation MacColorTrash
- (char *)x11WindowMaskCString
{
    return trashPixels;
}
- (char)x11WindowMaskChar
{
    return ' ';
}
- (int)preferredWidth
{
    static int w = 0;
    if (!w) {
        w = [Definitions widthForCString:trashPixels];
    }
    return w;
}
- (int)preferredHeight
{
    static int h = 0;
    if (!h) {
        h = [Definitions heightForCString:trashPixels];
    }
    return h;
}

- (void)drawInBitmap:(id)bitmap rect:(Int4)r context:(id)context
{
    BOOL hasFocus = NO;
    {
        id windowManager = [@"windowManager" valueForKey];
        unsigned long focusInEventWindow = [[windowManager valueForKey:@"focusInEventWindow"] unsignedLongValue];
        unsigned long win = [[context valueForKey:@"window"] unsignedLongValue];
        if (focusInEventWindow && (focusInEventWindow == win)) {
            hasFocus = YES;
        }
    }

    [bitmap setColor:@"black"];
    [bitmap fillRect:r];
    if (hasFocus) {
        [bitmap drawCString:trashPixels palette:selectedTrashPalette x:r.x y:r.y];
    } else {
        [bitmap drawCString:trashPixels palette:trashPalette x:r.x y:r.y];
    }
}

- (void)handleMouseDown:(id)event
{
    {
        id x11dict = [event valueForKey:@"x11dict"];
        unsigned long win = [[x11dict valueForKey:@"window"] unsignedLongValue];
        id windowManager = [@"windowManager" valueForKey];
        [windowManager XRaiseWindow:win];
    }

    int mouseX = [event intValueForKey:@"mouseX"];
    int mouseY = [event intValueForKey:@"mouseY"];
    _buttonDown = YES;
    _buttonDownX = mouseX;
    _buttonDownY = mouseY;

    struct timeval tv;
    gettimeofday(&tv, NULL);
    id timestamp = nsfmt(@"%ld.%06ld", tv.tv_sec, tv.tv_usec);
    if (_buttonDownTimestamp) {
        if ([timestamp doubleValue]-[_buttonDownTimestamp doubleValue] <= 0.3) {
            [self setValue:nil forKey:@"buttonDownTimestamp"];
            [self handleDoubleClick];
            return;
        }
    }
    [self setValue:timestamp forKey:@"buttonDownTimestamp"];
}

- (void)handleMouseMoved:(id)event
{
    if (!_buttonDown) {
        return;
    }
    int mouseRootX = [event intValueForKey:@"mouseRootX"];
    int mouseRootY = [event intValueForKey:@"mouseRootY"];

    id dict = [event valueForKey:@"x11dict"];

    int newX = mouseRootX - _buttonDownX;
    int newY = mouseRootY - _buttonDownY;

    [dict setValue:nsfmt(@"%d", newX) forKey:@"x"];
    [dict setValue:nsfmt(@"%d", newY) forKey:@"y"];

    [dict setValue:nsfmt(@"%d %d", newX, newY) forKey:@"moveWindow"];
}
- (void)handleMouseUp:(id)event
{
    _buttonDown = NO;
}
- (void)handleRightMouseDown:(id)event
{
    id windowManager = [event valueForKey:@"windowManager"];
    int mouseRootX = [event intValueForKey:@"mouseRootX"];
    int mouseRootY = [event intValueForKey:@"mouseRootY"];

    id obj = [[menuCSV parseCSVFromString] asMenu];
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
    id cmd = nsarr();
    [cmd addObject:@"hotdog"];
    [cmd addObject:@"maccolordir"];
    [cmd addObject:[Definitions homeDir:@"Trash"]];
    [cmd runCommandInBackground];
}

@end

