@interface SCRLoginWindowApplication : SCRSecurityAgentApplication

- (id)focusedWindow;
- (void)_layoutChanged:(id)a0;
- (id)_appThreadUserWindowDescription;
- (id)_appThreadUserWindowPanelHasFocus;
- (BOOL)applicationNeedsWindows;
- (void)connectToApp;
- (BOOL)isLoginWindowApplication;
- (id)userWindowDescription;
- (BOOL)userWindowHasFocus;

@end
