@interface SiriSharedUIContentLabel : NSTextField

+ (id)label;
+ (id)labelWithThinWeightRegularFont;
+ (id)labelWithLightWeightRegularFont;
+ (id)labelWithMediumWeightRegularFont;
+ (id)labelWithThinWeightSubtextFont;
+ (id)labelWithLightWeightSubtextFont;
+ (id)labelWithMediumWeightSubtextFont;
+ (id)labelWithHeaderFont;
+ (id)labelWithSubtitleFont;
+ (id)labelWithBodyFont;
+ (id)labelWithLightWeightFontSize:(double)a0;
+ (id)labelWithThinWeightFontSize:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsLayer;
- (BOOL)isFlipped;
- (void)setNumberOfLines:(long long)a0;

@end
