@interface SCRFinderApplication : SCRApplication

- (id)desktop;
- (void)applicationDidInitialize;
- (void)elementWasDestroyed:(id)a0;
- (id)deepKeyboardChild;
- (id)deepFocusedChild;
- (void)_focusOnDesktop;
- (void)_focusOutDesktop;
- (void)_setFrontMostIfNecesssary;
- (void)dispatchFocusOnDesktop;
- (void)dispatchFocusOutDesktop;
- (void)dispatchSetFrontMostIfNecesssary;
- (BOOL)isFinderApplication;
- (id)focusedWindowForUpdateChildrenWithRequest;

@end
