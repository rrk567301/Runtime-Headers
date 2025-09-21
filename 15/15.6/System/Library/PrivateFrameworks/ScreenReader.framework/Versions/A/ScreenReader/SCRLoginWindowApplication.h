@interface SCRLoginWindowApplication : SCRSecurityAgentApplication

- (id)focusedWindow;
- (id)_appThreadUserWindowDescription;
- (void)_layoutChanged:(id)a0;
- (id)_appThreadUserWindowPanelHasFocus;
- (char)applicationNeedsWindows;
- (void)connectToApp;
- (char)isLoginWindowApplication;
- (id)userWindowDescription;
- (char)userWindowHasFocus;

@end
