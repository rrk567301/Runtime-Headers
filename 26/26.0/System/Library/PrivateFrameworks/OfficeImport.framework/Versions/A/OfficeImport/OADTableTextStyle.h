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

- (id)color;
- (id)init;
- (id)description;
- (id)shallowCopy;
- (void)setColor:(id)a0;
- (void).cxx_destruct;
- (int)bold;
- (void)setBold:(int)a0;
- (void)applyOverridesFrom:(id)a0;
- (id)fontReference;
- (int)italic;
- (void)setFontReference:(id)a0;
- (void)setItalic:(int)a0;

@end
