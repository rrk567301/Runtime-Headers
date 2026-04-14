@interface SCRLoginWindowApplication : SCRSecurityAgentApplication

- (id)focusedWindow;
- (id)_appThreadUserWindowDescription;
- (id)_appThreadUserWindowPanelHasFocus;
- (BOOL)applicationNeedsWindows;
- (void)connectToApp;
- (BOOL)isLoginWindowApplication;
- (id)userWindowDescription;
- (BOOL)userWindowHasFocus;

@end
