@interface SCRLoginWindowApplication : SCRSecurityAgentApplication

- (void)connectToApp;
- (BOOL)applicationNeedsWindows;
- (id)focusedWindow;
- (id)_appThreadForceQuitPanelHasFocus;
- (BOOL)isLoginWindowApplication;
- (BOOL)forceQuitPanelHasFocus;

@end
