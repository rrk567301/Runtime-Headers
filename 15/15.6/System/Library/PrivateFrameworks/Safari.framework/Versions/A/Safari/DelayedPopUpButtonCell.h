@class NSTimer;

@interface DelayedPopUpButtonCell : NSButtonCell {
    NSTimer *_menuTimer;
    char _didPopUpMenu;
}

@property (class, readonly, nonatomic) double menuDisplayDelayTime;

@property (nonatomic) char displayMenuImmediately;
@property (nonatomic, getter=isPressed) char pressed;

- (void).cxx_destruct;
- (void)_invalidateMenuTimer;
- (double)_menuDelayTime;
- (char)accessibilityPerformPress;
- (char)continueTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (char)startTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)stopTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 mouseIsUp:(char)a3;
- (void)trackingDidStop;
- (void)_displayMenuBelowButton;
- (char)_displayMenuForPressInView:(id)a0;
- (void)displayMenuAndClearMouseState;
- (void)displayMenuAndClearMouseStateShouldPreventActionsAfterMenuIsDisplayed:(char)a0;

@end
