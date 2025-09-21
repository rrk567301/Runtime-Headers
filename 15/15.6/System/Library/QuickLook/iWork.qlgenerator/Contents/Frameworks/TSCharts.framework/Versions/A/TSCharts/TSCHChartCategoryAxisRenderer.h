@interface TSCHChartCategoryAxisRenderer : TSCHChartAxisRenderer

- (void)addSelection:(id)a0 toCGPath:(struct CGPath { } *)a1 useWrapWidth:(char)a2;
- (char)canEditTextForSelectionPath:(id)a0;
- (char)canRenderSelectionPath:(id)a0;
- (id)categoryAxisLayoutItem;
- (void)drawIntoLayer:(int)a0 inContext:(struct CGContext { } *)a1 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForEditingTextForSelectionPath:(id)a0;
- (unsigned long long)p_categoryIndexForSelectionPath:(id)a0;
- (char)p_doesSelectionPathReferToAxisLabel:(id)a0;
- (char)p_doesSelectionPathReferToAxisSeriesLabel:(id)a0;
- (void)p_drawIntoLayer:(int)a0 inContext:(struct CGContext { } *)a1 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 limitRenderLabels:(int)a3 limitLabelIndex:(unsigned long long)a4 rangePtr:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a5;
- (id)p_labelGeometryForSelectionPath:(id)a0;
- (unsigned long long)p_seriesIndexForSelectionPath:(id)a0;
- (void)renderIntoContext:(struct CGContext { } *)a0 selection:(id)a1;
- (id)transparencyLayers;

@end
