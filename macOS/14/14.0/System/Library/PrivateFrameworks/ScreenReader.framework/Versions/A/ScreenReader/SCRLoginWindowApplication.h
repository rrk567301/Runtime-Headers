@interface SCRLoginWindowApplication : SCRSecurityAgentApplication

- (id)_appThreadUserWindowDescription;
- (id)_appThreadUserWindowPanelHasFocus;
- (BOOL)applicationNeedsWindows;
- (void)connectToApp;
- (id)focusedWindow;
- (BOOL)isLoginWindowApplication;
- (id)userWindowDescription;
- (BOOL)userWindowHasFocus;

@end
