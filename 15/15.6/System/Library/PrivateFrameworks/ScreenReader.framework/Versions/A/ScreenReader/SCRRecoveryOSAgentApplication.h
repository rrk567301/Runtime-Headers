@interface SCRRecoveryOSAgentApplication : SCRSystemApplication

- (id)menuBar;
- (char)applicationNeedsWindows;
- (Class)classForChildUIElement:(id)a0 parent:(id)a1;
- (char)handleEvent:(id)a0 request:(id)a1;
- (char)isPreLoginApp;

@end
