@class NSString;

@interface OABDefaultsManager : NSObject <OABPropertiesManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hidden;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })shadowColor;
- (int)strokeWidth;
- (int)fillType;
- (int)shadowAlpha;
- (BOOL)isFilled;
- (BOOL)isStroked;
- (BOOL)isShadowed;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })fillFgColor;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })fillBgColor;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })strokeFgColor;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })strokeBgColor;
- (struct EshBlip { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; struct UID { unsigned char x0[16]; } x3; } *)fillBlipDataReference;
- (int)fillFgAlpha;
- (int)fillBgAlpha;
- (int)fillAngle;
- (int)fillFocus;
- (int)fillFocusLeft;
- (int)fillFocusTop;
- (int)fillFocusRight;
- (int)fillFocusBottom;
- (const void *)fillGradientColors;
- (unsigned int)fillBlipID;
- (id)fillBlipName;
- (int)strokeFillType;
- (unsigned int)strokeFillBlipID;
- (id)strokeFillBlipName;
- (struct EshBlip { void /* function */ **x0; unsigned short x1; struct EshHeader { int x0; unsigned int x1; short x2; unsigned short x3; unsigned char x4; } x2; struct UID { unsigned char x0[16]; } x3; } *)strokeFillBlipDataReference;
- (int)strokeFgAlpha;
- (int)strokeMiterLimit;
- (int)strokeCompoundType;
- (int)strokePresetDash;
- (const void *)strokeCustomDash;
- (int)strokeCapStyle;
- (int)strokeJoinStyle;
- (int)strokeStartArrowType;
- (int)strokeStartArrowWidth;
- (int)strokeStartArrowLength;
- (int)strokeEndArrowType;
- (int)strokeEndArrowWidth;
- (int)strokeEndArrowLength;
- (int)shadowType;
- (int)shadowOffsetX;
- (int)shadowOffsetY;
- (int)shadowSoftness;
- (BOOL)isFillOK;
- (BOOL)isStrokeOK;
- (BOOL)isShadowOK;
- (BOOL)isTextPath;
- (id)textPathUnicodeString;
- (int)textPathTextAlignment;
- (int)textPathFontSize;
- (id)textPathFontFamily;
- (BOOL)textPathBold;
- (BOOL)textPathItalic;
- (BOOL)textPathUnderline;
- (BOOL)textPathSmallcaps;
- (BOOL)textPathStrikethrough;

@end
