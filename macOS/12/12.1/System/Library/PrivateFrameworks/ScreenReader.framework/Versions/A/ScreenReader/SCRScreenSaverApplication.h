@interface SCRScreenSaverApplication : SCRSystemApplication

- (BOOL)shouldHighlight;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (BOOL)isSecureApplication;
- (BOOL)applicationNeedsWindows;
- (void)dispatchFocusOut;
- (BOOL)isScreenSaverApplication;

@end
