@interface SHPalette : NSObject

+ (double)contentsScale;
+ (id)default;
+ (struct CGColor { } *)sh_colorNamed:(id)a0;

- (struct CGColor { } *)shadowColor;
- (struct CGColor { } *)blackColor;
- (struct CGColor { } *)clearColor;
- (struct CGColor { } *)appTintColor;
- (struct CGColor { } *)listeningButtonBackgroundColor;
- (struct CGColor { } *)listeningCircleColor;
- (struct CGColor { } *)shazamColorNearBlack;
- (struct CGColor { } *)listeningButtonTopBorderColor;
- (struct CGColor { } *)listeningButtonShazamShapeColor;
- (struct CGColor { } *)listeningButtonBackgroundTransparentColor;
- (struct CGColor { } *)alternateTintColor;
- (struct CGColor { } *)R:(double)a0 G:(double)a1 B:(double)a2 A:(double)a3;

@end
