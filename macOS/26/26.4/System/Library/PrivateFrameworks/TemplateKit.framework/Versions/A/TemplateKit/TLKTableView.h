@class NSTrackingArea;

@interface TLKTableView : NSTableView {
    NSTrackingArea *_trackingArea;
}

- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)updateTrackingAreas;
- (void)drawGridInClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseMoved:(id)a0;
- (id)extendedDelegate;
- (long long)selectRowForEvent:(id)a0;

@end
