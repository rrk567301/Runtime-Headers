@class NSTimer;

@interface NSTabBarDelayedPopUpButtonCell : NSButtonCell {
    NSTimer *_menuTimer;
    char _didPopUpMenu;
}

- (void).cxx_destruct;
- (void)_displayDelayedMenu;
- (void)_invalidateMenuTimer;
- (double)_menuDelayTime;
- (char)continueTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (void)displayOffsetContextualMenu;
- (char)startTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)stopTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 mouseIsUp:(char)a3;

@end
