@interface PFParallaxLayoutUtilities : NSObject

+ (struct { double x0; double x1; double x2; double x3; double x4; double x5; })facePositionLimits;
+ (BOOL)_rectIsValid:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)computeLayoutWithHelper:(id)a0;
+ (id)computeLayoutsWithHelper:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })effectiveAcceptableRectForClassification:(unsigned long long)a0 havePetFaces:(BOOL)a1 sourcePreferredCropRectNormalized:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 sourceAcceptableCropRectNormalized:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 sourceFaceAreaRectNormalized:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })effectivePreferredRectForClassification:(unsigned long long)a0 havePetFaces:(BOOL)a1 sourcePreferredCropRectNormalized:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 sourceAcceptableCropRectNormalized:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 sourceFaceAreaRectNormalized:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
+ (double)timeOverlapCheckThresholdForTopRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isInteractive:(BOOL)a1;
+ (double)cropScoreThresholdForClassification:(unsigned long long)a0;
+ (BOOL)facePositionAcceptable:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageAspect:(double)a1;
+ (unsigned long long)clockIntersectionFromTopRectMatteCoverage:(double)a0 bottomRectMatteCoverage:(double)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeInactiveAvoidingRectForVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 acceptableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 unsafeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 imageSize:(struct CGSize { double x0; double x1; })a3 newVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;

@end
