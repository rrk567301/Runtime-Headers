@interface SCRFinderApplication : SCRApplication

- (id)desktop;
- (void)applicationDidInitialize;
- (void)setIsFocusedEventHandler:(BOOL)a0;
- (void)elementWasDestroyed:(id)a0;
- (id)deepKeyboardChild;
- (id)deepFocusedChild;
- (void)_setFocusedChild:(id)a0 outputRequest:(id)a1 event:(id)a2;
- (void)_focusOnDesktop;
- (void)_focusOutDesktop;
- (void)_setFrontMostIfNecesssary;
- (void)dispatchFocusOnDesktop;
- (void)dispatchFocusOutDesktop;
- (void)dispatchSetFrontMostIfNecesssary;
- (BOOL)isFinderApplication;
- (id)focusedWindowForUpdateChildrenWithRequest;

@end
