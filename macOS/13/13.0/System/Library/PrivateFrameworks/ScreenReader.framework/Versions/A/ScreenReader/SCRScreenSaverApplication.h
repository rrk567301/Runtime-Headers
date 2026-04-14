@interface SCRScreenSaverApplication : SCRSystemApplication

- (BOOL)shouldHighlight;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)dispatchFocusOut;
- (BOOL)isSecureApplication;
- (BOOL)applicationNeedsWindows;
- (BOOL)isScreenSaverApplication;

@end
