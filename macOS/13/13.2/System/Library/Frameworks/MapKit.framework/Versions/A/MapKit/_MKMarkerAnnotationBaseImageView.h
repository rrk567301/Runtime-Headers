@class _MKMarkerAnnotationBaseImageContent;

@interface _MKMarkerAnnotationBaseImageView : MKImageView {
    double _tailLength;
}

@property (retain, nonatomic, getter=_baseImageContent, setter=_setBaseImageContent:) _MKMarkerAnnotationBaseImageContent *baseImageContent;

+ (const struct CGPath { } *)_pathForBaseImageType:(long long)a0 radius:(double)a1 tailLength:(double)a2;
+ (id)_gradientImageName:(long long)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)isFlipped;
- (id)initWithOvalInSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithBalloonRadius:(double)a0 tailLength:(double)a1;
- (void)_renderBaseContent;
- (void)_renderContentUsingGraphicsPath:(const struct CGPath { } *)a0;
- (void)_fillPath:(const struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 scale:(double)a3;
- (void)_strokePath:(const struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1 scale:(double)a2;
- (id)_renderBaseImage:(struct CGContext { } *)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2;
- (void)_renderGradientForRectaloon;
- (BOOL)_isFillColorClear;

@end
