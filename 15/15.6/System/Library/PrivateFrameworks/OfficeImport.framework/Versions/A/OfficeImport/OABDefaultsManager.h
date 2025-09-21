@class NSString;

@interface OABDefaultsManager : NSObject <OABPropertiesManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })shadowColor;
- (int)strokeWidth;
- (char)hidden;
- (int)fillType;
- (int)shadowAlpha;
- (int)fillFocusBottom;
- (int)strokeJoinStyle;
- (int)fillAngle;
- (int)fillBgAlpha;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })fillBgColor;
- (struct EshBlip { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; struct UID { unsigned char x0[16]; } x3; } *)fillBlipDataReference;
- (unsigned int)fillBlipID;
- (id)fillBlipName;
- (int)fillFgAlpha;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })fillFgColor;
- (int)fillFocus;
- (int)fillFocusLeft;
- (int)fillFocusRight;
- (int)fillFocusTop;
- (const void *)fillGradientColors;
- (char)isFillOK;
- (char)isFilled;
- (char)isShadowOK;
- (char)isShadowed;
- (char)isStrokeOK;
- (char)isStroked;
- (char)isTextPath;
- (int)shadowOffsetX;
- (int)shadowOffsetY;
- (int)shadowSoftness;
- (int)shadowType;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })strokeBgColor;
- (int)strokeCapStyle;
- (int)strokeCompoundType;
- (const void *)strokeCustomDash;
- (int)strokeEndArrowLength;
- (int)strokeEndArrowType;
- (int)strokeEndArrowWidth;
- (int)strokeFgAlpha;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })strokeFgColor;
- (struct EshBlip { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; struct UID { unsigned char x0[16]; } x3; } *)strokeFillBlipDataReference;
- (unsigned int)strokeFillBlipID;
- (id)strokeFillBlipName;
- (int)strokeFillType;
- (int)strokeMiterLimit;
- (int)strokePresetDash;
- (int)strokeStartArrowLength;
- (int)strokeStartArrowType;
- (int)strokeStartArrowWidth;
- (char)textPathBold;
- (id)textPathFontFamily;
- (int)textPathFontSize;
- (char)textPathItalic;
- (char)textPathSmallcaps;
- (char)textPathStrikethrough;
- (int)textPathTextAlignment;
- (char)textPathUnderline;
- (id)textPathUnicodeString;

@end
