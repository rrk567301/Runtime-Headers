@interface SCRSecurityAgentApplication : SCRSystemApplication

- (void)_focusOntoValidApplicationIfNeeded;
- (void)applicationDidInitialize;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (BOOL)isPreLoginApp;
- (BOOL)isSecureApplication;
- (BOOL)isSecurityAgentApplication;

@end
