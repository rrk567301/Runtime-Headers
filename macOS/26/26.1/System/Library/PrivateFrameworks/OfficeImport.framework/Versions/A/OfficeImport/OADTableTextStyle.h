@class OADColor, OADFontReference;

@interface OADTableTextStyle : NSObject {
    OADFontReference *mFontReference;
    OADColor *mColor;
    int mBold;
    int mItalic;
}

+ (int)defaultBold;
+ (id)defaultColor;
+ (id)defaultFontReference;
+ (int)defaultItalic;
+ (id)defaultStyle;

- (void)setColor:(id)a0;
- (id)color;
- (id)description;
- (void).cxx_destruct;
- (id)shallowCopy;
- (id)init;
- (int)bold;
- (void)setBold:(int)a0;
- (void)applyOverridesFrom:(id)a0;
- (id)fontReference;
- (int)italic;
- (void)setFontReference:(id)a0;
- (void)setItalic:(int)a0;

@end
