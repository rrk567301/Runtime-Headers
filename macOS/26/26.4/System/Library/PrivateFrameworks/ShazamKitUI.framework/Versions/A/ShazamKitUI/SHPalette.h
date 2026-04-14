@interface SHPalette : NSObject

@property struct CGColor { } *listeningButtonBackgroundColor;
@property struct CGColor { } *listeningButtonTopBorderColor;
@property struct CGColor { } *listeningPassiveBackgroundColor;
@property struct CGColor { } *listeningButtonShazamShapeColor;
@property struct CGColor { } *listeningActiveCirclesColor;
@property struct CGColor { } *listeningPassiveInnerShadowColor;

+ (struct CGColor { } *)clearColor;
+ (struct CGColor { } *)blackColor;
+ (struct CGColor { } *)R:(double)a0 G:(double)a1 B:(double)a2 A:(double)a3;
+ (id)classic;
+ (struct CGColor { } *)sh_colorNamed:(id)a0;

- (void)dealloc;
- (void)setColorProperty:(struct CGColor **)a0 toColor:(struct CGColor { } *)a1;

@end
