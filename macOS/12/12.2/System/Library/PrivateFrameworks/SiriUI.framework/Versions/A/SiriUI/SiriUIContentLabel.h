@class NSFont;

@interface SiriUIContentLabel : NSTextField

@property (nonatomic) BOOL willAppearDirectlyOverUltraDarkBackground;
@property (retain, nonatomic) NSFont *superScriptFont;

+ (id)label;
+ (id)labelWithHeaderFont;
+ (id)labelWithLightWeightRegularFont;
+ (id)labelWithThinWeightRegularFont;
+ (id)labelWithMediumWeightRegularFont;
+ (id)labelWithThinWeightSubtextFont;
+ (id)labelWithLightWeightSubtextFont;
+ (id)labelWithMediumWeightSubtextFont;
+ (id)labelWithSubtitleFont;
+ (id)labelWithBodyFont;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setStringValue:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAttributedStringValue:(id)a0;
- (id)fontSmoothingBackgroundColor;
- (BOOL)shouldSetFontSmoothingBackgroundColor;
- (void)commonInit;

@end
