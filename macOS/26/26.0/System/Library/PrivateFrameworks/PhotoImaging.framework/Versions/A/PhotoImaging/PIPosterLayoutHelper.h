@class CIImage, CIContext;

@interface PIPosterLayoutHelper : PFParallaxLayoutHelper {
    CIContext *_context;
    CIImage *_matte;
    BOOL _shouldConstrainLayoutToBounds;
}

- (void).cxx_destruct;
- (id)initWithPosterClassification:(unsigned long long)a0 initialRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 imageSize:(struct CGSize { double x0; double x1; })a2 effectiveAcceptableRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 effectivePreferredRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 validBoundsNormalized:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 headroomFeasible:(BOOL)a6 hasTopEdgeContact:(BOOL)a7 computeSpatial:(BOOL)a8 spatialPadding:(double)a9 layoutType:(unsigned long long)a10 allowedLayoutStrategies:(unsigned long long)a11 layoutConfiguration:(id)a12;
- (id)intermediateWithAdaptiveStrategy:(unsigned long long)a0 intermediate:(id)a1;
- (id)intermediateWithInactiveStrategy:(unsigned long long)a0 intermediate:(id)a1;
- (id)intermediateWithOverlapStrategy:(unsigned long long)a0 intermediate:(id)a1;
- (id)intermediateWithZoomStrategy:(unsigned long long)a0 intermediate:(id)a1;
- (id)scoreIntermediate:(id)a0;
- (double)centerLayoutHorizontalTarget;
- (id)initWithCIContext:(id)a0 matte:(id)a1 posterClassification:(unsigned long long)a2 initialRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 imageSize:(struct CGSize { double x0; double x1; })a4 effectiveAcceptableRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 effectivePreferredRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 validBoundsNormalized:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 headroomFeasible:(BOOL)a8 hasTopEdgeContact:(BOOL)a9 shouldConstrainLayoutToBounds:(BOOL)a10 computeSpatial:(BOOL)a11 spatialPadding:(double)a12 layoutType:(unsigned long long)a13 allowedLayoutStrategies:(unsigned long long)a14 layoutConfiguration:(id)a15;
- (id)pixelBasedIntermediateWithOverlapStrategy:(unsigned long long)a0 intermediate:(id)a1 translationY:(double)a2;

@end
