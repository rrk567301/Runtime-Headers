@interface QCZoomView : NSView {
    struct CGPoint { double x; double y; } _cachedCenter;
    double _cachedZoomFactorX;
    double _cachedZoomFactorY;
    double _zoomFactorX;
    double _zoomFactorY;
    void *_unused[4];
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollWheel:(id)a0;
- (void)viewDidMoveToSuperview;
- (BOOL)autoscroll:(id)a0;
- (double)maxX;
- (double)minY;
- (struct CGPoint { double x0; double x1; })_centerPoint;
- (double)minX;
- (double)maxY;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxBounds;
- (void)__frameChanged:(id)a0;
- (void)_setCenterPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_zoomToFitRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_adjustFrame;
- (void)zoomToFitSelection;
- (void)zoomToFitAll;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionBounds;
- (BOOL)allowsNonSquareZooming;
- (double)resizeHotzoneWidth;
- (double)incrementalZoomAmount;
- (double)zoomFactorX;
- (double)zoomFactorY;
- (void)setZoomFactorX:(double)a0;
- (void)setZoomFactorY:(double)a0;
- (BOOL)zoomStateCached;
- (void)cacheZoomState;
- (void)restoreZoomState;
- (void)zoomInX;
- (void)zoomInY;
- (void)zoomOutX;
- (void)zoomOutY;
- (void)_setZoomFactorX:(double)a0 factorY:(double)a1 centerPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)_zoomWithSpeedFactorForX:(double)a0 speedFactorForY:(double)a1;

@end
