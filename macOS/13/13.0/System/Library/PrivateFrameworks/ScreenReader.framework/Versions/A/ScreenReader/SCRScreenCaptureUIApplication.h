@interface SCRScreenCaptureUIApplication : SCRSystemApplication

- (void)applicationDidInitialize;
- (void)applicationWillInvalidate;
- (void)_accessibilityScreenCaptureDidCancel:(id)a0;
- (BOOL)isScreenCaptureUIApplication;

@end
