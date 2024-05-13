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

/* NOTE: This file was generated by parse-functions.pl */

@interface NSObject(OWAOzeNwlpePpNWvsyHxYfGihSdNkkR)
+ (int *)arrayOfXSpacingsForAtariSTFont;
+ (int *)arrayOfWidthsForAtariSTFont;
+ (int *)arrayOfHeightsForAtariSTFont;
+ (char **)arrayOfCStringsForAtariSTFont;
+ (int *)arrayOfXSpacingsForC64Font;
+ (int *)arrayOfWidthsForC64Font;
+ (int *)arrayOfHeightsForC64Font;
+ (char **)arrayOfCStringsForC64Font;
+ (char *)pixelsForEmptyCard;
+ (char *)pixelsForCard:(int)index;
+ (char *)paletteForCard:(int)index;
+ (Int4)drawChatBubbleInBitmap:(id)bitmap rect:(Int4)r text:(id)text;
+ (Int4)drawChatBubbleInBitmap:(id)bitmap rect:(Int4)r text:(id)text fgcolor:(id)fgcolor bgcolor:(id)bgcolor flipHorizontal:(BOOL)flipHorizontal flipVertical:(BOOL)flipVertical;
+ (id)testChicagoFont;
+ (void)calculateWidths:(int *)widths forCStrings:(char **)bitmaps;
+ (void)calculateHeights:(int *)heights forCStrings:(char **)bitmaps;
+ (int *)arrayOfXSpacingsForChicagoFont;
+ (int *)arrayOfWidthsForChicagoFont;
+ (int *)arrayOfHeightsForChicagoFont;
+ (char **)arrayOfCStringsForChicagoFont;
+ (char *)cStringForFinalFantasy6Font:(int)c;
+ (int *)arrayOfXSpacingsForGenevaFont;
+ (int *)arrayOfWidthsForGenevaFont;
+ (int *)arrayOfHeightsForGenevaFont;
+ (char **)arrayOfCStringsForGenevaFont;
+ (int *)arrayOfXSpacingsForMonacoFont;
+ (int *)arrayOfWidthsForMonacoFont;
+ (int *)arrayOfHeightsForMonacoFont;
+ (char **)arrayOfCStringsForMonacoFont;
+ (int *)arrayOfXSpacingsForTopazFont;
+ (int *)arrayOfWidthsForTopazFont;
+ (int *)arrayOfHeightsForTopazFont;
+ (char **)arrayOfCStringsForTopazFont;
+ (int *)arrayOfXSpacingsForWinSystemFont;
+ (int *)arrayOfWidthsForWinSystemFont;
+ (int *)arrayOfHeightsForWinSystemFont;
+ (char **)arrayOfCStringsForWinSystemFont;
+ (BOOL)isX:(int)x insideRect:(Int4)r;
+ (BOOL)isX:(int)x y:(int)y insideRect:(Int4)r;
+ (BOOL)doesRect:(Int4)r1 intersectRect:(Int4)r2;
+ (Int4)rectWithX:(int)x y:(int)y w:(int)w h:(int)h;
+ (id)fitBitmapString:(id)text width:(int)maxWidth;
+ (id)fitBitmapString:(id)text width:(int)maxWidth widths:(int *)widths;
+ (int)bitmapHeightForText:(id)text;
+ (int)bitmapHeightForText:(id)text heights:(int *)heights;
+ (int)bitmapWidthForText:(id)text;
+ (int)bitmapWidthForText:(id)text widths:(int *)widths xspacings:(int *)xspacings;
+ (int)bitmapWidthForLineOfTextCString:(unsigned char *)str widths:(int *)widths xspacings:(int *)xspacings;
+ (int)widthForCString:(unsigned char *)str;
+ (int)heightForCString:(unsigned char *)str;
+ (void)drawInBitmap:(id)bitmap left:(unsigned char *)left palette:(unsigned char *)leftPalette middle:(unsigned char *)middle palette:(unsigned char *)middlePalette right:(unsigned char *)right palette:(unsigned char *)rightPalette x:(int)startX y:(int)startY w:(int)w;
+ (void)drawInBitmap:(id)bitmap left:(unsigned char *)left middle:(unsigned char *)middle right:(unsigned char *)right x:(int)startX y:(int)startY w:(int)w palette:(unsigned char *)palette;
+ (void)drawInBitmap:(id)bitmap left:(unsigned char *)left middle:(unsigned char *)middle right:(unsigned char *)right centeredInRect:(Int4)r palette:(unsigned char *)palette;
+ (void)drawInBitmap:(id)bitmap top:(unsigned char *)top palette:(unsigned char *)topPalette middle:(unsigned char *)middle palette:(unsigned char *)middlePalette bottom:(unsigned char *)bottom palette:(unsigned char *)bottomPalette x:(int)startX y:(int)startY h:(int)h;
+ (id)bitmapWithWidth:(int)width height:(int)height;
+ (id)bitmapWithPixelBytes:(unsigned char *)pixelBytes width:(int)width height:(int)height stride:(int)stride;
- (void)dealloc;
- (id)initWithWidth:(int)width height:(int)height;
- (id)initWithPixelBytes:(unsigned char *)pixelBytes width:(int)width height:(int)height stride:(int)stride;
- (BOOL)glNearest;
- (unsigned char *)pixelBytesRGBA8888;
- (unsigned char *)pixelBytes;
- (int)bitmapWidth;
- (int)bitmapHeight;
- (int)bitmapStride;
- (void)useFont:(unsigned char **)fontCStrings :(int *)fontWidths :(int *)fontHeights :(int *)fontXSpacings;
- (void)useAtariSTFont;
- (void)useTopazFont;
- (void)useC64Font;
- (void)useChicagoFont;
- (void)useMonacoFont;
- (void)useGenevaFont;
- (void)useWinSystemFont;
- (void)setColorIntR:(int)r g:(int)g b:(int)b a:(int)a;
- (void)setColorDoubleR:(double)r g:(double)g b:(double)b a:(double)a;
- (void)setColor:(id)color;
- (void)setColor:(id)color alpha:(double)alpha;
- (void)setColor:(id)color alphaInt:(int)alphaInt;
- (void)drawRectangle:(Int4)r;
- (void)drawRectangleAtX:(int)x y:(int)y w:(int)w h:(int)h;
- (void)drawRectangleAtX:(int)x1 y:(int)y1 x:(int)x2 y:(int)y2;
- (void)drawHLineAtX:(int)x1 x:(int)x2 y:(int)y;
- (void)drawHorizontalLineAtX:(int)x1 x:(int)x2 y:(int)y;
#ifdef BUILD_WITH_BGRA_PIXEL_FORMAT
#else
#endif
#ifdef BUILD_WITH_BGRA_PIXEL_FORMAT
#else
#endif
- (void)drawHorizontalDashedLineAtX:(int)x1 x:(int)x2 y:(int)y dashLength:(int)dashLength;
#ifdef BUILD_WITH_BGRA_PIXEL_FORMAT
#else
#endif
#ifdef BUILD_WITH_BGRA_PIXEL_FORMAT
#else
#endif
- (void)drawVLineAtX:(int)x y:(int)y1 y:(int)y2;
- (void)drawVerticalLineAtX:(int)x y:(int)y1 y:(int)y2;
#ifdef BUILD_WITH_BGRA_PIXEL_FORMAT
#else
#endif
#ifdef BUILD_WITH_BGRA_PIXEL_FORMAT
#else
#endif
- (void)drawLineAtX:(int)x1 y:(int)y1 x:(int)x2 y:(int)y2;
#ifdef BUILD_WITH_BGRA_PIXEL_FORMAT
#else
#endif
#ifdef BUILD_WITH_BGRA_PIXEL_FORMAT
#else
#endif
#ifdef BUILD_WITH_BGRA_PIXEL_FORMAT
#else
#endif
#ifdef BUILD_WITH_BGRA_PIXEL_FORMAT
#else
#endif
- (void)fillRectangleAtX:(int)x1 y:(int)y1 x:(int)x2 y:(int)y2;
- (void)fillRectangleAtX:(int)x y:(int)y w:(int)w h:(int)h;
- (void)fillRect:(Int4)r;
#ifdef BUILD_WITH_BGRA_PIXEL_FORMAT
#else
#endif
#ifdef BUILD_WITH_BGRA_PIXEL_FORMAT
#else
#endif
#ifdef BUILD_WITH_BGRA_PIXEL_FORMAT
#else
#endif
#ifdef BUILD_WITH_BGRA_PIXEL_FORMAT
#else
#endif
- (void)drawBytes565:(uint16_t *)src bitmapWidth:(int)bitmapWidth bitmapHeight:(int)bitmapHeight x:(int)x y:(int)y w:(int)w h:(int)h;
- (void)drawBytes:(uint8_t *)src bitmapWidth:(int)bitmapWidth bitmapHeight:(int)bitmapHeight x:(int)x y:(int)y w:(int)w h:(int)h;
- (void)drawBytes:(uint8_t *)src bitmapWidth:(int)bitmapWidth bitmapHeight:(int)bitmapHeight x:(int)x y:(int)y;
- (void)drawBitmap:(id)bitmap x:(int)x y:(int)y w:(int)w h:(int)h;
- (void)drawBitmap:(id)bitmap x:(int)x y:(int)y;
- (void)drawBitmap:(id)bitmap x:(int)x y:(int)y w:(int)w h:(int)h atX:(int)atX y:(int)atY;
- (void)saveState;
- (void)restoreState;
- (BOOL)writeAsPPMToFile:(id)path;
- (int)bitmapHeightForText:(id)text;
- (int)bitmapWidthForText:(id)text;
- (int)bitmapWidthForLineOfTextCString:(unsigned char *)str;
- (void)drawCString:(unsigned char *)str rotatedRightAtX:(int)x y:(int)y c:(unsigned char)c r:(int)r g:(int)g b:(int)b a:(int)a;
- (void)drawCString:(unsigned char *)str rotatedLeftAtX:(int)x y:(int)y c:(unsigned char)c r:(int)r g:(int)g b:(int)b a:(int)a;
- (void)drawCString:(unsigned char *)str x:(int)x y:(int)y c:(unsigned char)c r:(int)r g:(int)g b:(int)b a:(int)a;
- (void)drawBitmapText:(id)text rotatedRightAtX:(int)startX y:(int)startY;
- (void)drawBitmapText:(id)text rotatedLeftAtX:(int)startX y:(int)startY;
- (void)drawBitmapText:(id)text rightAlignedRotatedLeftAtX:(int)startX y:(int)startY;
- (void)drawBitmapText:(id)text x:(int)startX y:(int)startY;
- (void)drawBitmapText:(id)text x:(int)startX y:(int)startY palette:(id)palette;
- (void)drawBitmapText:(id)text centeredAtX:(int)x y:(int)y w:(int)w h:(int)h;
- (void)drawBitmapText:(id)text centeredInRect:(Int4)rect;
- (void)drawBitmapText:(id)text centeredInRect:(Int4)rect palette:(id)palette;
- (void)drawBitmapText:(id)text leftAlignedAtX:(int)x y:(int)y w:(int)w h:(int)h;
- (void)drawBitmapText:(id)text leftAlignedInRect:(Int4)rect;
- (void)drawBitmapText:(id)text topRightAlignedAtX:(int)x y:(int)y w:(int)w h:(int)h;
- (void)drawBitmapText:(id)text topRightAlignedInRect:(Int4)rect;
- (void)drawBitmapText:(id)text rightAlignedAtX:(int)x y:(int)y w:(int)w h:(int)h;
- (void)drawBitmapText:(id)text rightAlignedInRect:(Int4)rect;
- (void)drawBitmapText:(id)text rightAlignedAtX:(int)x y:(int)y;
- (void)drawBitmapText:(id)text centeredAtX:(int)x y:(int)y;
- (id)fitBitmapString:(id)text width:(int)maxWidth;
- (void)drawPixelString:(id)str palette:(id)palette x:(int)x y:(int)y;
- (void)drawCString:(unsigned char *)str palette:(unsigned char *)palette x:(int)x y:(int)y;
- (void)drawCString:(unsigned char *)str x:(int)x y:(int)y c:(unsigned char)c r:(int)r g:(int)g b:(int)b a:(int)a ix:(int)ix iy:(int)iy cx:(int)cx cy:(int)cy lx:(int)lx ly:(int)ly;
#ifdef BUILD_WITH_BGRA_PIXEL_FORMAT
#else
#endif
#ifdef BUILD_FOR_FREEBSD
#endif
id nsarr();
id nsdict();
id nsfmt(id formatString, ...);
id nscstr(char *str);
id nscstrn(char *str, int len);
BOOL isnsarr(id obj);
BOOL isnsdict(id obj);
BOOL isnsstr(id obj);
+ (id)valueForEnvironmentVariable:(id)key;
+ (void)setValue:(id)val forEnvironmentVariable:(id)key;
+ (id)processID;
+ (double)percentageChangeFrom:(double)from to:(double)to;
+ (double)degreesToRadians:(double)angle;
+ (void)sendTerminationSignalToSelf;
+ (void)exit:(int)code;
+ (id)arrayOfRandomDoubles:(int)count;
+ (double)randomDouble;
+ (int)randomInt:(int)maximum;
#ifdef BUILD_FOR_OSX
#endif
#ifdef BUILD_FOR_IOS
#endif
#ifdef BUILD_FOR_FREEBSD
#endif
#ifdef BUILD_FOR_LINUX
#endif
+ (id)decodeBase64Bytes:(unsigned char *)bytes length:(int)len;
+ (id)NSArray;
- (void)addToArray:(id)arr;
- (id)asDictionaryGroupByKey:(id)groupKey;
- (id)strWithContext:(id)context;
- (BOOL)writeToFile:(id)path;
- (id)nth:(int)n;
- (id)subarrayFromIndex:(int)index;
- (id)filterEmptyStrings;
- (id)join:(id)obj;
- (void)setAllValues:(id)val forKey:(id)key;
- (id)lowest;
- (id)highest;
- (id)removeIfContainsString:(id)string;
- (id)keepIfKey:(id)key startsWith:(id)string;
- (id)keepIfKey:(id)key equals:(id)string;
- (id)keepIfContainsString:(id)string;
- (id)keepPrefix:(id)prefix;
- (id)keepSuffix:(id)suffix;
- (id)asArraySortedWithKey:(id)key;
- (id)sortedWithKey:(id)key;
- (id)asArrayReverseSortedWithKey:(id)key;
- (id)reverseSortedWithKey:(id)key;
- (id)asArrayReverseSortedWithKeys:(id)keys;
- (id)reverseSort;
- (id)asReverseSortedArray;
- (id)asSortedArray;
- (id)sort;
- (id)numericSortForKey:(id)key;
- (id)reverseNumericSortForKey:(id)key;
- (id)numericKeySort;
- (id)numericValueSort;
- (id)reverseNumericValueSort;
- (id)numericSort;
- (id)reverseNumericSort;
- (id)asDictionary;
- (id)keepObjectsEqualTo:(id)objectToKeep;
- (id)asStringForKeys:(id)keys titleKeys:(id)titleKeys;
- (id)uniq;
- (id)asString;
- (id)asStringWithHeaderMessage:(id)message;
- (id)asDictionaryCount;
- (id)asMergedDictionary;
- (id)objectWithValue:(id)value forMessage:(id)message;
- (id)objectWithValue:(id)value forKey:(id)key;
- (id)objectWithValueContainingString:(id)str forKey:(id)key;
- (id)sliceFrom:(int)fromIndex to:(int)toIndex;
- (id)sliceTo:(int)index;
- (id)sliceFrom:(int)index;
- (int)minInt;
- (double)minDouble;
- (id)min;
- (int)maxInt;
- (double)maxDouble;
- (id)max;
- (id)median;
- (id)average;
- (double)averageDouble;
- (double)sumDouble;
- (int)sumIntegers;
- (id)sum;
- (id)asReverseArray;
- (id)reverse;
- (id)randomObject;
- (id)tail:(int)n;
- (id)chompEmptyLine;
- (id)cat:(id)arr;
- (id)keepIfTrue:(id)message;
- (int)length;
- (int)depth;
- (id)top;
- (id)keep:(id)message;
- (id)mapMessage:(id)message;
- (id)mapMessage:(id)message nullValue:(id)nullValue;
- (void)forEachMessage:(id)message;
- (id)allKeys;
- (id)subarrayToIndex:(int)index;
- (id)subarrayBetweenIndex:(int)index1 and:(int)index2;
- (int)indexForHighestKeyValue:(id)key;
- (int)indexForLowestKeyValue:(id)key;
- (id)asShuffledArray;
- (id)blocksFromData;
- (id)asStringOfByteValues;
- (id)description;
- (const unsigned char) byteAtIndex:(int) i;
- (int32_t)int32AtIndex:(int)i;
- (id)asString;
- (id)readGroupOfLines;
- (id)readLine;
- (id)bitmapFromPPMP6;
- (id)asString;
- (void)toNSLog;
- (id)allKeysAndValues;
- (id)asKeyValueArray;
- (int)length;
#ifdef BUILD_FOR_IOS
#else
#endif
- (void)push:(id)object;
#if defined(BUILD_FOR_LINUX) || defined(BUILD_FOR_FREEBSD)
- (void)removeLastObject;
#endif
- (id)pop;
- (id)shift;
- (void)addObject:(id)obj intoArrayForKey:(id)key;
- (void)addToArray:(id)arr;
- (id)self;
- (id)returnNil;
- (id)asPercentageInt;
- (id)asPercentage;
- (id)asPercentageString;
- (id)percentageString;
- (id)join:(id)separator;
- (void)ignoreReturnValueForMessage:(id)message;
- (id)plus:(id)obj;
- (id)minus:(id)obj;
- (id)times:(id)obj;
- (id)dividedBy:(id)obj;
- (id)allKeysAndValues;
- (id)arrayForKey:(id)key;
- (id)dictForKey:(id)key;
- (id)dictionaryForKey:(id)key;
- (BOOL)boolValue;
- (int)intValue;
- (BOOL)key:(id)key isEqual:(id)obj;
- (void)incrementKey:(id)key;
- (void)decrementKey:(id)key;
- (int)intValueForKey:(id)key;
- (int)intValueForKey:(id)key default:(int)def;
- (double)doubleValueForKey:(id)key;
- (long)longValueForKey:(id)key;
- (unsigned long)unsignedLongValueForKey:(id)key;
+ (id)asInstance;
- (id)asString;
- (int)compare:(id)compareObject key:(id)key;
- (int)reverseCompare:(id)compareObject;
- (int)reverseCompare:(id)compareObject key:(id)key;
- (id)ifTrue:(id)ifMessage then:(id)thenMessage;
- (id)ifFalse:(id)ifMessage then:(id)thenMessage;
- (id)ifTrue:(id)ifMessage then:(id)thenMessage else:(id)elseMessage;
- (id)ifFalse:(id)ifMessage then:(id)thenMessage else:(id)elseMessage;
- (id)if:(id)ifMessage then:(id)thenMessage;
- (id)if:(id)ifMessage then:(id)thenMessage else:(id)elseMessage;
- (BOOL)compareIsAscending:(id)obj;
- (BOOL)compareIsDescending:(id)obj;
- (BOOL)compareIsSame:(id)obj;
- (id)return:(id)arg;
- (void)toggleBoolKey:(id)key;
- (id)str:(id)str;
- (void)nop:(id)arg;
- (id)null;
- (id)asDictionaryWithKey:(id)key;
- (id)asArray;
- (BOOL)numericallyGreaterThan:(double)val;
- (BOOL)numericallyLessThan:(double)val;
- (BOOL)isGreaterThan:(id)obj;
- (BOOL)isGreaterThanOrEqualTo:(id)obj;
- (BOOL)isLessThan:(id)obj;
- (BOOL)isLessThanOrEqualTo:(id)obj;
- (double)doubleValue;
- (void)toNSLog;
- (void)toNSLog:(id)str;
- (id)split:(id)separator maxTokens:(int)maxTokens;
- (int)x;
- (int)y;
- (int)w;
- (int)h;
- (void)addToArray:(id)arr;
- (BOOL)hasAnySuffix:(id)suffixes;
- (id)capitalizeFirstLetter;
- (unsigned char)unsignedCharValue;
- (unsigned long)unsignedLongValue;
- (long)longValue;
- (id)keepAlphanumericCharacters;
- (id)keepAlphanumericCharactersAndSpaces;
- (id)keepAlphanumericCharactersAndSpacesAndPunctuation;
- (id)keepAlphanumericCharactersAndSpacesAndPunctuationAndNewlines;
- (id)replaceNonAlphanumericCharactersWithSpaces;
- (id)split:(id)sep;
- (id)cat:(id)str;
- (id)asCapitalizedString;
- (id)keepCharactersInString:(id)keepString;
- (id)splitMaxLength:(int)maxLength;
- (int)nthChar:(int)index;
- (id)strip:(id)str;
- (id)stripTabs;
- (id)stripNewlines;
- (id)splitCharacters;
- (id)str:(id)str;
- (id)strWithContext:(id)context;
- (BOOL)isInt;
- (BOOL)isDouble;
- (id)stringFromIndex:(int)index;
- (id)stringToIndex:(int)index;
- (id)prepend:(id)str;
- (id)cat:(id)str1 cat:(id)str2;
- (id)cat:(id)str1 cat:(id)str2 cat:(id)str3;
- (id)cat:(id)str1 cat:(id)str2 cat:(id)str3 cat:(id)str4;
- (id)cat:(id)str1 cat:(id)str2 cat:(id)str3 cat:(id)str4 cat:(id)str5;
- (id)cat:(id)str1 :(id)str2;
- (id)cat:(id)str1 :(id)str2 :(id)str3;
- (id)cat:(id)str1 :(id)str2 :(id)str3 :(id)str4;
- (id)cat:(id)str1 :(id)str2 :(id)str3 :(id)str4 :(id)str5;
- (BOOL)isString;
- (id)asQuotedString;
- (id)asEscapedString;
- (id)lines;
- (id)urlDecode;
- (id)urlEncode;
- (id)dataValue;
- (id)asData;
- (id)allKeys;
- (BOOL)hasKey:(id)key;
- (id)valueForKey:(id)key;
- (double)doubleValueForKey:(id)key;
- (int)intValueForKey:(id)key;
- (int)intValueForKey:(id)key default:(int)def;
- (id)removeKey:(id)key;
- (id)decodeBase64ForKey:(id)key;
+ (BOOL)emptyTrash;
- (BOOL)moveToTrash;
- (id)doubleAs8BitHex;
- (id)intAs8BitHex;
- (id)asRGBColor;
- (id)asColor;
- (double)redDouble;
- (double)greenDouble;
- (double)blueDouble;
- (double)alphaDouble;
#ifdef BUILD_FOUNDATION
- (int)redInt;
- (int)greenInt;
- (int)blueInt;
- (int)alphaInt;
#else
- (int)redInt;
- (int)greenInt;
- (int)blueInt;
- (int)alphaInt;
#endif
- (id)stringForCSVFile;
- (id)processCSVWithKeys:(id)header;
- (id)processCSVUsingHeader;
- (BOOL)writeCSVToFile:(id)path keys:(id)keys;
- (BOOL)writeCSVToFile:(id)path;
- (id)joinForCSVFile;
- (id)convertCStringToObject:(char *)cstring;
- (void)parseQuote:(char)quote_char;
- (void)parseComma;
- (void)flush;
- (void)parseLF;
- (void)parseChar;
- (id)processString:(id)input;
- (id)stringForCSVFile;
- (id)parseCSVFromStringNoHeader;
- (id)parseCSVFromString;
- (id)parseCSVFile;
- (id)parseCSVFromData;
+ (id)testYearWeek:(int)year;
+ (id)testPositiveDayOffset;
+ (id)testPositiveDayOffset2;
+ (id)testNegativeDayOffset;
+ (id)testNegativeDayOffset2;
+ (id)testWeekOfYear;
+ (int)currentYear;
+ (int)currentMonth;
+ (int)currentDay;
+ (id)currentDateTime;
+ (id)dateTimeForTimestamp:(time_t)arg;
- (int)yearForWeekOfYear;
- (int)weekOfYear;
- (int)daysUntil:(id)end;
- (id)dayOfWeekAsString;
- (id)monthAsString;
- (int)dayOfYear;
- (id)nextYear;
- (id)nextMonth;
- (id)nextDay;
- (id)dayOffset:(int)offset;
- (id)asDateTimeString;
- (id)asTimeStringNoSeconds;
- (id)asTimeString;
- (id)asDateString;
- (BOOL)isValidDateTime;
- (int)year;
- (int)quarter;
- (int)month;
- (int)day;
- (int)hour;
- (int)minute;
- (int)second;
- (int)weekday;
- (int)dayOfWeek;
+ (int)dayOfWeekForYear:(int)y month:(int)m day:(int)d;
+ (id)year:(int)year week:(int)week;
+ (id)year:(int)year day:(int)day;
+ (id)year:(int)year;
+ (id)hour:(int)hour minute:(int)minute second:(int)second;
+ (id)year:(int)year month:(int)month day:(int)day;
+ (id)year:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second;
+ (int)isLeapYear:(int)year;
+ (int)daysInYear:(int)year;
+ (int)daysInMonth:(int)month year:(int)year;
- (id)parseDateComponents;
- (id)parseTimeComponents;
+ (id)dataFromStandardInput;
+ (id)linesFromStandardInput;
+ (id)blocksFromStandardInput;
+ (id)currentDirName;
+ (void)testFilePointer;
- (void)dealloc;
- (void)closeFile;
- (void)setFP:(void *)fp;
- (BOOL)openFile:(id)path mode:(id)mode;
- (id)readLine;
- (BOOL)writeString:(id)str;
- (int)readBytes:(char *)buf size:(int)size;
- (int)writeBytes:(char *)buf size:(int)size;
- (void)appendToFile:(id)path;
- (BOOL)writeLinesToFile:(id)path;
- (id)asFileArray;
- (id)joinAsPath;
- (id)contentsOfDirectory;
- (BOOL)isFile;
- (BOOL)isDirectory;
- (void)changeDirectory;
- (id)linesFromFile;
- (id)readAsLinesFromFile;
- (id)resolveSymlinks;
- (id)normalizePath;
- (id)asRealPath;
- (id)asUniquePath;
- (BOOL)makeDirectories;
- (BOOL)makeDirectory;
- (BOOL)makeDirectory:(id)relativePath;
- (BOOL)makeDirectoryNoIntermediateDirectories;
- (BOOL)makeDirectoriesForFile;
- (id)moveToDirectory:(id)path;
- (id)pathRelativeToString:(id)basePath;
- (id)allFilesInDirectory;
- (id)contentsOfDirectoryWithFullPaths;
- (BOOL)moveToFile:(id)dst;
- (BOOL)moveToPath:(id)dst;
- (BOOL)fileExists;
- (unsigned long long)fileSize;
- (id)fileModificationDate;
#ifdef BUILD_FOR_LINUX
#else
#endif
- (time_t)fileModificationTimestamp;
#ifdef BUILD_FOR_LINUX
#else
#endif
#ifdef BUILD_FOR_LINUX
- (BOOL)updateFileTimestamps:(time_t)timestamp;
#endif
- (long)fileTimestampPlusSize;
#ifdef BUILD_FOR_LINUX
#else
#endif
- (BOOL)unlinkFile;
#ifdef BUILD_FOR_IOS
- (id)runFileHandler;
#else
- (id)runFileHandler;
#endif
#ifdef BUILD_FOUNDATION
#else
- (unsigned int)unsignedIntValue;
#endif
- (void)dealloc;
- (void)autoreleaseIvars;
- (void)clearObjectIvars;
- (void)setNilValueForKey:(id)key;
- (void)setValue:(id)val forKey:(id)key;
- (void)setPointerValue:(void *)pointerval forKey:(id)key;
- (void)setPointerValue:(void *)pointerval forIvar:(id)key;
- (void)setDoubleValue:(double)doubleval forIvar:(id)key;
- (void)setValue:(id)val forIvar:(id)key;
- (double)doubleValueForIvar:(id)key;
- (BOOL)hasKey:(id)key;
- (id)valueForKey:(id)key;
- (id)pointerValueForKey:(id)key;
- (void *)pointerValueForIvar:(id)key;
- (id)valueForIvar:(id)key;
- (BOOL)hasIvar:(id)key;
- (BOOL)writeStateToFile:(id)path;
- (BOOL)readStateFromFile:(id)path;
+ (id)namespace;
+ (id)globalContext;
- (id)globalContext;
- (id)str;
- (void)setNilValueForKey;
- (id)valueForKey;
- (int)intValueForKey;
- (double)doubleValueForKey;
- (void)setAsValueForKey:(id)key;
+ (id)className;
- (id)className;
- (id)allIvars;
#ifndef BUILD_FOR_OSX
+ (id)classMethods;
- (id)allKeysForAllClasses;
- (id)allKeys;
#endif
- (id)asInstance;
- (id)asClass;
#ifdef BUILD_FOUNDATION
#endif
- (id)alloc;
- (SEL)asSelector;
#ifndef BUILD_FOR_OSX
- (id)selectorsForClass;
- (id)selectorsForInstanceOfClass;
#endif
- (id)selectorKeywords;
+ (id)allClassNames;
+ (void)printAllClassNames;
+ (void)printAllSelectors;
+ (id)scaleFont:(int)scaling :(unsigned char **)origFontCStrings :(int *)origFontWidths :(int *)origFontHeights :(int *)origFontXSpacings;
- (id)asXScaledPixels:(int)scaling;
- (id)asYScaledPixels:(int)scaling;
- (id)asXYScaledPixels:(int)scaling;
+ (int)system:(id)str;
- (id)findInPath;
- (void)writeLineToStandardOutput;
- (void)writeToStandardOutput;
- (void)writeToStandardOutput;
- (void)writeToStandardOutput;
+ (void)runCommandInBackground:(id)cmd;
- (void)runCommandInBackground;
- (void)runCommandWithSudoInBackground;
- (id)runCommandWithSudoAndReturnOutput;
- (id)runCommandWithSudoAndReturnError;
- (id)runCommandWithSudoAndReturnProcess;
- (id)runCommandAndReturnOutput;
- (int)writeToStandardInputAndRunCommandInBackground:(id)cmd;
- (id)pipeToCommandAndReturnOutput:(id)command;
- (id)runAsArgumentsForCommandAndReturnOutput:(id)command;
- (id)runCommandAndReturnExitStatus;
- (id)runCommandAndReturnOutput;
- (void)runCommandInBackground;
- (int)runCommandInBackgroundAndWriteStringToStandardInput:(id)str;
- (id)init;
- (void)dealloc;
- (void)sendSignal:(int)signal;
- (int)fileDescriptor;
- (void)handleFileDescriptor;
- (BOOL)writeString:(id)str;
- (void)writeDataAndClose:(id)data;
- (void)writeData:(id)data;
- (void)writeBytes:(unsigned char *)bytes length:(int)length;
- (void)closeInput;
- (void)closeOutput;
- (id)readAllDataFromOutputThenClose;
- (id)readAllDataFromOutputThenCloseAndWait;
- (id)readDataFromOutput;
- (id)readData:(int)fd;
- (id)readAllData:(int)fd;
- (void)drawInBitmap:(id)bitmap rect:(Int4)r;
- (id)waitForExitStatus;
- (id)runCommandAndReturnProcess;
- (id)runCommandAndReturnProcess;
- (id)downloadURL;
- (id)downloadURLWithCurl;
#ifdef BUILD_FOR_IOS
#endif
- (id)init;
- (void)dealloc;
- (void)sendSignal:(int)signal;
- (int *)fileDescriptors;
- (void)handleFileDescriptor:(int)fd;
- (void)handleOutFileDescriptor;
- (void)handleErrFileDescriptor;
- (BOOL)writeString:(id)str;
- (void)writeDataAndClose:(id)data;
- (void)writeData:(id)data;
- (void)writeBytes:(unsigned char *)bytes length:(int)length;
- (void)closeInput;
- (void)closeOutput;
- (void)closeError;
- (id)readAllDataFromOutputThenClose;
- (id)readAllDataFromOutputThenCloseAndWait;
- (id)readDataFromOutput;
- (id)readData:(int)fd;
- (id)readAllData:(int)fd;
- (void)drawInBitmap:(id)bitmap rect:(Int4)r;
- (id)waitForExitStatus;
- (id)runCommandAndReturnProcessWithError;
#ifdef BUILD_FOR_OSX
#else
#endif
#ifdef BUILD_FOUNDATION
#else
#endif
#ifdef BUILD_FOR_OSX
#else
#endif
- (id)evaluateFile:(id)path;
- (id)evaluateAsMessage;
- (id)evaluateAsMessageWithContext:(id)context;
- (id)evaluateMessage;
+ (id)evaluateMessage:(id)message;
- (id)evaluateMessage:(id)message;
- (id)evaluateMessageWithContext:(id)context;
- (id)evaluateFile:(id)path;
- (id)evaluateAsMessage;
- (id)evaluateAsMessageWithContext:(id)context;
- (id)evaluateMessage;
+ (id)evaluateMessage:(id)message;
- (id)evaluateMessage:(id)message;
- (id)evaluateMessageWithContext:(id)context;
- (id)executeScript;
- (id)executeScriptWithContext:(id)initialObject;
- (id)executeScript;
- (id)executeScriptWithContext:(id)initialObject;
- (id)asScriptToken;
+ (id)tokenWithText:(id)text;
- (id)description;
- (id)evaluateWithContext:(id)context;
- (BOOL)isEqual:(id)obj;
- (id)convertCStringToObject:(char *)cstring;
- (void)parseQuote:(char)quote_char;
- (void)parseComment;
- (void)flush;
- (void)parseWhitespace;
- (void)parseLF;
- (void)parseChar;
- (id)processString:(id)input;
- (id)asScriptInstructions;
- (id)executeInstructionsWithContext:(id)context initialObject:(id)initialObject;
- (id)init;
- (void)resetState;
- (id)executeInstruction:(id)instruction;
- (id)sendMessage;
#ifdef BUILD_FOUNDATION
#else
#endif
+ (id)callMethodName:(id)methodName args:(id)args;
+ (id)gettimeofday;
@end
