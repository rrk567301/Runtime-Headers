@interface SCRScreenSaverApplication : SCRSystemApplication

- (BOOL)shouldHighlight;
- (BOOL)applicationNeedsWindows;
- (void)dispatchFocusOut;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (BOOL)isScreenSaverApplication;
- (BOOL)isSecureApplication;

@end
