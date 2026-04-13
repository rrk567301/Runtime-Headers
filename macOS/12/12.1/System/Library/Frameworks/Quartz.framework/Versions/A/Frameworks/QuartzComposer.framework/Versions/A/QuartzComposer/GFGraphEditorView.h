@class NSScrollView, GFNodeManagerView;

@interface GFGraphEditorView : NSView {
    NSScrollView *_scrollView;
    GFNodeManagerView *_nodeManager;
    void *_unused[4];
}

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)removeFromSuperview;
- (id)backgroundColor;
- (id)gridColor;
- (void)_finishInitialization;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)setGridColor:(id)a0;
- (id)graph;
- (void)setGraph:(id)a0;
- (float)zoomFactor;
- (void)setZoomFactor:(float)a0;
- (id)graphView;
- (BOOL)drawsShadows;
- (void)setDrawsShadows:(BOOL)a0;
- (void)setGridStep:(unsigned long long)a0;
- (unsigned long long)gridStep;
- (BOOL)alignNodes;
- (void)setAlignNodes:(BOOL)a0;
- (void)setTooltipDelay:(double)a0;
- (double)tooltipDelay;
- (void)_setGraphView:(id)a0;
- (struct CGPoint { double x0; double x1; })editorCenter;
- (void)__instantiateNode:(id)a0;
- (void)showGraphEditorInspector:(id)a0;
- (void)printWithInfo:(id)a0 showingPrintPanel:(BOOL)a1;
- (void)setEditorCenter:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })editorSize;
- (void)setEditorSize:(struct CGSize { double x0; double x1; })a0;
- (void)zoomToFitSelection;
- (void)zoomToFitAll;
- (void)setNodeManager:(id)a0;
- (id)nodeManager;
- (void)__contentUpdated:(id)a0;
- (void)__selectionUpdated:(id)a0;

@end
