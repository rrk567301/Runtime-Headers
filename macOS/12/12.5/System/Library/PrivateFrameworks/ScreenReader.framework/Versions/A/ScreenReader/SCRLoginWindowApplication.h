@interface SCRLoginWindowApplication : SCRSecurityAgentApplication

- (id)focusedWindow;
- (void)connectToApp;
- (BOOL)applicationNeedsWindows;
- (BOOL)isLoginWindowApplication;

@end
