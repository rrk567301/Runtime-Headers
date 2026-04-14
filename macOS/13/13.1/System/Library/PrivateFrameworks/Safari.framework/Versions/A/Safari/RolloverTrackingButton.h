@class NSTrackingArea;
@protocol RolloverTrackingButtonDelegate;

@interface RolloverTrackingButton : ButtonPlus {
    NSTrackingArea *_trackingArea;
    id _flagsChangedEventMonitor;
    BOOL _mouseOver;
    BOOL _trackingRectUpdatePending;
}

@property (weak, nonatomic) id<RolloverTrackingButtonDelegate> delegate;
@property (nonatomic) BOOL usesRolloverAppearanceInInactiveWindow;
@property (nonatomic) BOOL usesRolloverAppearanceOnMouseDown;
@property (nonatomic) BOOL usesRolloverAppearanceWhenFirstResponder;
@property (nonatomic) BOOL redrawOnMouseEnteredAndExited;
@property (nonatomic) BOOL useRolloverAppearanceNow;
@property (readonly, nonatomic, getter=isTrackingMouseDown) BOOL trackingMouseDown;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)rightMouseDown:(id)a0;
- (BOOL)canBecomeKeyView;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;
- (void)didBecomeActiveFirstResponder;
- (void)didResignActiveFirstResponder;
- (void)_finishInitialization;
- (BOOL)shouldUseRolloverAppearance;
- (void)updateMouseIsOver:(int)a0;
- (void)updateMouseIsOver;
- (BOOL)mouseIsOver;
- (void)mouseEnteredOrExited:(BOOL)a0;
- (void)_addFlagsChangedEventMonitorIfNecessary;
- (void)_removeFlagsChangedEventMonitorIfNecessary;

@end
