@class PACropModel;

@interface PACropModelEditor : NSObject {
    PACropModel *_model;
}

- (void).cxx_destruct;
- (id)initWith:(id)a0;
- (void)updateModel:(id)a0;
- (void)makeCurrentAspectRatioFreeForm;
- (void)makeCurrentFreeFormAspectFixed;
- (void)rotateCropBy:(double)a0 targetArea:(double)a1 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 startAngle:(double)a3;
- (void)moveCropBy:(struct CGVector { double x0; double x1; })a0 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)zoomIntoCrop:(double)a0 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateAspectRatio:(struct { unsigned long long x0; unsigned long long x1; })a0 targetArea:(double)a1 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)makeCropRectIntegral;

@end
