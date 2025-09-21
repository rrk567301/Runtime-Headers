@class TSCH3DChartResizerHelper, TSCH3DChartBoundsLayout;

@interface TSCH3DSageGeometryHelperLimitingSeriesUpgrader : TSCH3DAbstractLimitingSeriesUpgrader

@property (readonly, nonatomic) TSCH3DChartResizerHelper *resizerHelper;
@property (readonly, nonatomic) TSCH3DChartBoundsLayout *boundsLayout;

- (void).cxx_destruct;
- (id)boundsLayoutByResizingToLayoutSize:(void *)a0;
- (id)containingViewportByResizingScene:(id)a0 toResizingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })oldResizingFrame;
- (id)sceneResetWithLayoutSettings:(struct { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; long long x8; unsigned long long x9; })a0;

@end
