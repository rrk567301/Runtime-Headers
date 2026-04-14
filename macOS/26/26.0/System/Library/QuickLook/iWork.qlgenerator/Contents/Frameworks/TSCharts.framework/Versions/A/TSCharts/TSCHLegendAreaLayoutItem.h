@class NSValue, TSCHLegendModelCache;

@interface TSCHLegendAreaLayoutItem : TSCHChartLayoutItem {
    NSValue *_legendGeometryFrame;
}

@property (readonly) TSCHLegendModelCache *legendModelCache;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } legendModelGeometryFrame;

- (id)initWithParent:(id)a0;
- (void)setLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)clearAll;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (void)clearLayoutSize;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingBadge:(unsigned long long)a0 cellType:(int)a1 outElementSize:(struct CGSize { double x0; double x1; } *)a2 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (void)resetLayoutSize;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingLabel:(unsigned long long)a0 cellType:(int)a1 outElementSize:(struct CGSize { double x0; double x1; } *)a2 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (struct CGSize { double x0; double x1; })calcMinSize;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })i_transformForRenderingLabel:(unsigned long long)a0 paragraphStyle:(id)a1 cellType:(int)a2 rangePtr:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 outElementSize:(struct CGSize { double x0; double x1; } *)a4 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a5;
- (void)iterateHitChartElements:(struct CGPoint { double x0; double x1; })a0 withBlock:(id /* block */)a1;
- (struct CGPath { } *)newDragAndDropHighlightPathForSelection:(id)a0;
- (double)p_legendModelWidth;
- (id)renderersWithRep:(id)a0;
- (id)textStyleProvidingSource;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingLabel:(unsigned long long)a0 cellType:(int)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 outElementSize:(struct CGSize { double x0; double x1; } *)a3 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingLabel:(unsigned long long)a0 paragraphStyle:(id)a1 cellType:(int)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 outElementSize:(struct CGSize { double x0; double x1; } *)a4 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a5;
- (void)updateLegendGeometryFrameFromLegendModelCache;

@end
