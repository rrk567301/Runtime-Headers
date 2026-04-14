@interface WebAppIconRenderer : NSObject

+ (struct CGImage { } *)createChicletImageWithCGImage:(struct CGImage { } *)a0 fullLength:(double)a1 scale:(double)a2;
+ (struct CGPath { } *)createContinuousRoundedRectPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1;
+ (void)findInterpolationMetrics:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1 lowerMetric:(id *)a2 upperMetric:(id *)a3;
+ (double)interpolateCornerRadius:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })interpolateFrame:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;
+ (double)interpolateShadowBlur:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })interpolateShadowOffset:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;
+ (double)interpolationFactorForLowerMetric:(id)a0 upperMetric:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2;

@end
