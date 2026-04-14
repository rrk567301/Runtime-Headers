@interface SCRRecoveryOSAgentApplication : SCRSystemApplication

- (id)menuBar;
- (BOOL)isPreLoginApp;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (BOOL)applicationNeedsWindows;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;

@end
