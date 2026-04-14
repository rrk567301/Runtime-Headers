@class NSTimer;

@interface DelayedPopUpButtonCell : NSButtonCell {
    NSTimer *_menuTimer;
    BOOL _didPopUpMenu;
}

@property (class, readonly, nonatomic) double menuDisplayDelayTime;

@property (nonatomic) BOOL displayMenuImmediately;
@property (nonatomic, getter=isPressed) BOOL pressed;

- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (BOOL)startTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (BOOL)continueTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (void)stopTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 mouseIsUp:(BOOL)a3;
- (double)_menuDelayTime;
- (void)_invalidateMenuTimer;
- (void)displayMenuAndClearMouseState;
- (void)_displayMenuBelowButton;
- (void)displayMenuAndClearMouseStateShouldPreventActionsAfterMenuIsDisplayed:(BOOL)a0;
- (BOOL)_displayMenuForPressInView:(id)a0;
- (void)trackingDidStop;

@end
