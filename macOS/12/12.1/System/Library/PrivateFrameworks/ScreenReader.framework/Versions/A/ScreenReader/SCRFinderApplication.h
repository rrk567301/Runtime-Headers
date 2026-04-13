@interface SCRFinderApplication : SCRApplication

- (id)desktop;
- (id)deepKeyboardChild;
- (id)deepFocusedChild;
- (void)applicationDidInitialize;
- (void)elementWasDestroyed:(id)a0;
- (BOOL)isFinderApplication;
- (void)_focusOutDesktop;
- (void)_focusOnDesktop;
- (void)dispatchFocusOnDesktop;
- (void)dispatchFocusOutDesktop;
- (void)_setFrontMostIfNecesssary;
- (void)dispatchSetFrontMostIfNecesssary;
- (id)focusedWindowForUpdateChildrenWithRequest;

@end
