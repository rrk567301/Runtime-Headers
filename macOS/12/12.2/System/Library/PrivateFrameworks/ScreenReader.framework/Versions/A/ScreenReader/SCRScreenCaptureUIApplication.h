@interface SCRScreenCaptureUIApplication : SCRSystemApplication

- (void)applicationDidInitialize;
- (void)applicationWillInvalidate;
- (BOOL)isScreenCaptureUIApplication;
- (void)_accessibilityScreenCaptureDidCancel:(id)a0;

@end
