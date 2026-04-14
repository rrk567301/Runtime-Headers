@class TSCHChartAxisID;

@interface TSCHChartReferenceLineLabelsLayoutItem : TSCHChartLayoutItem

@property (readonly, retain, nonatomic) TSCHChartAxisID *axisID;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (id)subselectionKnobPositionsForSelection:(id)a0;
- (struct CGSize { double x0; double x1; })calcMinSize;
- (void)iterateHitChartElements:(struct CGPoint { double x0; double x1; })a0 withBlock:(id /* block */)a1;
- (id)initWithParent:(id)a0 axisID:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_drawingRectForModel:(id)a0;
- (id)p_areaLayoutItem;

@end
