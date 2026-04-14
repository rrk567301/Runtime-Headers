@class OADColor, OADFontReference;

@interface OADTableTextStyle : NSObject {
    OADFontReference *mFontReference;
    OADColor *mColor;
    int mBold;
    int mItalic;
}

+ (id)defaultStyle;
+ (id)defaultColor;
+ (id)defaultFontReference;
+ (int)defaultBold;
+ (int)defaultItalic;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)color;
- (void)setColor:(id)a0;
- (id)fontReference;
- (void)setFontReference:(id)a0;
- (id)shallowCopy;
- (void)applyOverridesFrom:(id)a0;
- (int)bold;
- (void)setBold:(int)a0;
- (int)italic;
- (void)setItalic:(int)a0;

@end
