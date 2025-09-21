@class _MKMarkerAnnotationBaseImageContent;

@interface _MKMarkerAnnotationBaseImageView : MKImageView {
    double _tailLength;
}

@property (retain, nonatomic, getter=_baseImageContent, setter=_setBaseImageContent:) _MKMarkerAnnotationBaseImageContent *baseImageContent;

+ (id)_gradientImageName:(long long)a0;
+ (struct CGPath { } *)_pathForBaseImageType:(long long)a0 radius:(double)a1 tailLength:(double)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (void)_fillPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 scale:(double)a3;
- (BOOL)_isFillColorClear;
- (void)_renderBaseContent;
- (id)_renderBaseImage:(struct CGContext { } *)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2;
- (void)_renderContentUsingGraphicsPath:(struct CGPath { } *)a0;
- (void)_renderGradientForRectaloon;
- (void)_strokePath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1 scale:(double)a2;
- (id)initWithBalloonRadius:(double)a0 tailLength:(double)a1;
- (id)initWithOvalInSize:(struct CGSize { double x0; double x1; })a0;

@end
