@class _NSFullScreenSpace, CALayer;

@interface _NSFullScreenTileDividerWindow : NSWindow {
    _NSFullScreenSpace *_space;
    unsigned long long _tileSpace;
    unsigned long long _direction;
    unsigned long long _verticalIndex;
    unsigned long long _horizontalIndex;
    BOOL _drivingLiveResize;
    BOOL _liveResizeMoved;
    BOOL _shouldAbortLiveResize;
    struct CGSize { double width; double height; } _spacing;
    CALayer *_grabBarLayer;
}

@property BOOL overrideDrivingLiveResize;

+ (id)tileGrabBarWithSize:(struct CGSize { double x0; double x1; })a0;

- (void)close;
- (void)disableAutomaticTermination;
- (void)enableAutomaticTermination;
- (id)space;
- (unsigned long long)direction;
- (void)_startLiveResizeWithOverlay:(BOOL)a0;
- (void)_forceOverlayPresentation;
- (void)_liveResizeToDividerLocation:(double)a0;
- (void)_endLiveResizeAtDividerLocation:(double)a0;
- (struct CGSize { double x0; double x1; })spacing;
- (unsigned long long)parentSpaceID;
- (unsigned long long)tileSpaceID;
- (void)_setWindowTag;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1;
- (void)_updateManagedDisplay;
- (void)reshape;
- (id)_hitTestWithHysteresisCheck:(struct CGPoint { double x0; double x1; })a0 forEvent:(id)a1 allowWindowDragging:(BOOL *)a2;
- (void)_setupOverlayWindowImmediately:(BOOL)a0;
- (void)_beginOverlayPresentationIfNeeded;
- (void)_updateOverlayWindow;
- (void)_removeOverlayWindow;
- (void)cancelOverlayAnimations;
- (void)setAsActiveTileDividerWindow;
- (void)abortLiveResize;
- (id)resizeCursor;
- (unsigned long long)verticalIndex;
- (unsigned long long)horizontalIndex;
- (id)initWithTileSpace:(unsigned long long)a0 direction:(unsigned long long)a1 space:(id)a2;
- (BOOL)performDividerDragWithEvent:(id)a0;
- (BOOL)shouldAbortLiveResize;
- (void)resizeToFiftyFifty;
- (BOOL)drivingLiveResize;
- (id)_grabber;
- (void)showRolloverState:(BOOL)a0;
- (void)showGrabBar;
- (void)hideGrabBar;

@end
