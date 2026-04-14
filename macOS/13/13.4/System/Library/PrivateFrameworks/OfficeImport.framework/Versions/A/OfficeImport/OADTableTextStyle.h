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

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)color;
- (void)setColor:(id)a0;
- (void)applyOverridesFrom:(id)a0;
- (int)bold;
- (id)fontReference;
- (int)italic;
- (void)setBold:(int)a0;
- (void)setFontReference:(id)a0;
- (void)setItalic:(int)a0;
- (id)shallowCopy;

@end
