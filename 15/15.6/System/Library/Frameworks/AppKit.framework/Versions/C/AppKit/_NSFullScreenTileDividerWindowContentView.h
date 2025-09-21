@class NSTrackingArea, _NSFullScreenTileDividerWindow, NSAlignmentFeedbackFilter;

@interface _NSFullScreenTileDividerWindowContentView : NSView {
    NSTrackingArea *_cursorArea;
    double _mouseDownTime;
    char _trackedInArea;
    char _needsLiveResizeCleanup;
    unsigned long long _liveResizeOldPresentationOptions;
    unsigned long long _liveResizeDragPresentationOptions;
    _NSFullScreenTileDividerWindow *_liveResizeDividerWindow;
    NSAlignmentFeedbackFilter *_liveResizeAlignmentFilter;
    struct CGPoint { double x; double y; } _liveResizeLastMouse;
    struct CGPoint { double x; double y; } _liveResizeCGMouse;
    char _liveResizeSpacerMoved;
    struct CGPoint { double x; double y; } _liveResizeDragOffset;
    char _liveResizeAllowSnap;
    double _liveResizeOriginCenterSnapX;
    double _liveResizeLastOriginX;
}

+ (unsigned long long)optionsForLiveResize;

- (void)dealloc;
- (void)cleanupLiveResize;
- (double)dividerOriginX;
- (struct CGPoint { double x0; double x1; })eventLocationRelativeToTileDivider:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)performDoubleClickResize:(id)a0;
- (void)performDragOnMouseDown:(id)a0;
- (id)resizeCursor;
- (char)shouldDelayWindowOrderingForEvent:(id)a0;
- (void)updateTrackingAreas;

@end
