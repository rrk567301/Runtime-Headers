@interface TSCHMultiDataBarChartRep : TSCHMultiDataChartRep

- (void)updateAppearanceForElementLayer:(id)a0 seriesIndex:(unsigned long long)a1;
- (void)updateElementLayerLayoutForCurrentRepElementIndexAnimationInfo:(id)a0;
- (void)updateElementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forElementLayer:(id)a1 series:(id)a2 addingAnimationsToAnimationInfo:(id)a3;
- (id)p_barElementsRenderer;
- (unsigned long long)p_currentSeriesIndex;
- (unsigned long long)p_currentGroupIndex;
- (id)p_currentBarSeriesModelCache;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_clampRenderingElementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 barElementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_renderingElementFrameForBarElementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentRepElementBoundsInNaturalSpace;
- (BOOL)p_repElementIsAboveInterceptForSeriesIndex:(unsigned long long)a0 groupIndex:(unsigned long long)a1;
- (void)p_calculateInterceptForElementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 elementLayer:(id)a1 animationInfo:(id)a2;

@end
