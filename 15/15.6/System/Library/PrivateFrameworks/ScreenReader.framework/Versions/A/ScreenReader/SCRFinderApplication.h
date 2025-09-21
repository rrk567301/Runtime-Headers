@interface SCRFinderApplication : SCRApplication

- (id)desktop;
- (void)_focusOnDesktop;
- (void)_dragToDesktop;
- (void)_focusOutDesktop;
- (void)_setFocusedChild:(id)a0 outputRequest:(id)a1 event:(id)a2;
- (void)_setFrontMostIfNecesssary;
- (void)applicationDidInitialize;
- (id)deepFocusedChild;
- (id)deepKeyboardChild;
- (void)dispatchDragToDesktop;
- (void)dispatchFocusOnDesktop;
- (void)dispatchFocusOutDesktop;
- (void)dispatchSetFrontMostIfNecesssary;
- (void)elementWasDestroyed:(id)a0;
- (id)focusedWindowForUpdateChildrenWithRequest;
- (char)isFinderApplication;
- (void)setIsFocusedEventHandler:(char)a0;

@end
