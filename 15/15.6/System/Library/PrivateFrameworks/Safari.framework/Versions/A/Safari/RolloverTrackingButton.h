@class NSTrackingArea, NSTimer;
@protocol RolloverTrackingButtonDelegate;

@interface RolloverTrackingButton : ButtonPlus {
    NSTrackingArea *_trackingArea;
    id _flagsChangedEventMonitor;
    char _mouseOver;
    char _trackingRectUpdatePending;
    NSTimer *_mouseDownTimer;
    char _performedLongPress;
}

@property (weak, nonatomic) id<RolloverTrackingButtonDelegate> delegate;
@property (nonatomic) char usesRolloverAppearanceInInactiveWindow;
@property (nonatomic) char usesRolloverAppearanceOnMouseDown;
@property (nonatomic) char usesRolloverAppearanceWhenFirstResponder;
@property (nonatomic) char redrawOnMouseEnteredAndExited;
@property (nonatomic) char useRolloverAppearanceNow;
@property (readonly, nonatomic, getter=isTrackingMouseDown) char trackingMouseDown;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)_finishInitialization;
- (char)accessibilityPerformPress;
- (char)canBecomeKeyView;
- (void)didBecomeActiveFirstResponder;
- (void)didResignActiveFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (char)shouldUseRolloverAppearance;
- (void)updateMouseIsOver;
- (void)updateMouseIsOver:(int)a0;
- (void)updateTrackingAreas;
- (void)_addFlagsChangedEventMonitorIfNecessary;
- (void)_removeFlagsChangedEventMonitorIfNecessary;
- (char)_supportsLongPress;
- (void)mouseEnteredOrExited:(char)a0;
- (char)mouseIsOver;

@end
