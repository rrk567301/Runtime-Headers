@interface SCRSecurityAgentApplication : SCRSystemApplication

@property (nonatomic) char _didForceInitialFocus;

- (void)_initialFocusOntoApplicationIfNeeded;
- (void)applicationDidInitialize;
- (void)elementWasCreated:(id)a0;
- (char)focusInto:(id)a0 event:(id)a1;
- (char)isPreLoginApp;
- (char)isSecureApplication;
- (char)isSecurityAgentApplication;

@end
