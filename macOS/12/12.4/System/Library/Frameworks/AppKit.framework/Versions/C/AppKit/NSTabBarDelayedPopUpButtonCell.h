@class NSTimer;

@interface NSTabBarDelayedPopUpButtonCell : NSButtonCell {
    NSTimer *_menuTimer;
    BOOL _didPopUpMenu;
}

- (void).cxx_destruct;
- (BOOL)startTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (BOOL)continueTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (void)stopTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 mouseIsUp:(BOOL)a3;
- (void)_invalidateMenuTimer;
- (void)displayOffsetContextualMenu;
- (double)_menuDelayTime;
- (void)_displayDelayedMenu;

@end
