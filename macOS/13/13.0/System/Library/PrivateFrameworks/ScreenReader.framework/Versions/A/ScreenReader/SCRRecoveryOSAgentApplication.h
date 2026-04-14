@interface SCRRecoveryOSAgentApplication : SCRSystemApplication

- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (id)menuBar;
- (BOOL)applicationNeedsWindows;
- (BOOL)isPreLoginApp;

@end
