@class NSTextField, NSView, NSTrackingArea, NSLayoutConstraint, NSTimer, StatusMessage;
@protocol OverlayStatusWindowDelegate;

@interface OverlayStatusWindowController : NSWindowController {
    NSView *_parentContentView;
    NSTextField *_mainTextField;
    NSLayoutConstraint *_maximumWidthConstraint;
    unsigned long long _pendingShowAnimations;
    NSTrackingArea *_mouseTrackingArea;
    BOOL _suppressUpdatingPlacement;
    long long _lastStatusPlacement;
    NSTimer *_clearStatusBarIsOnStatusTimer;
    StatusMessage *_statusMessage;
}

@property (weak, nonatomic) id<OverlayStatusWindowDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)mouseMoved:(id)a0;
- (void)setStatusMessage:(id)a0;
- (void)displayStatusBarIsOnMessage;
- (void)clearStatus;
- (void)_createMainTextField;
- (id)_attributedStringForStatusMessage:(id)a0;
- (void)_showInParentWindow;
- (void)_updateMetrics;
- (id)_statusBarIsOnStatusMessage;
- (void)_clearStatusBarIsOnTimerFired:(id)a0;
- (void)_hideFromParentWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectWithinWhichMouseMayOccludeStatusInScreenCoordinates;
- (double)_maximumContentWidthForPlacement:(long long)a0;
- (BOOL)_shouldAnchorStatusBarToLeftForPlacement:(long long)a0;
- (void)_cancelDelayBeforeStartingHideAnimation;
- (void)_parentWindowDidResize:(id)a0;
- (void)_hideFromParentWindowAfterDelay;

@end
