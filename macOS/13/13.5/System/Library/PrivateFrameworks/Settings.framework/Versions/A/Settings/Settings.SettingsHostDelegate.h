@interface Settings.SettingsHostDelegate : NSObject <Settings.SettingsPrivateHostProtocol>

- (id)init;
- (void).cxx_destruct;
- (void)switchTo:(id)a0 arguments:(id)a1;
- (void)closeTransaction;
- (void)openTransactionWithReason:(id)a0 description:(id)a1;
- (void)updateSidebarWithConfig:(id)a0;
- (void)updateSidebarWithItems:(id)a0;
- (void)updateSidebarWithSections:(id)a0;
- (void)updateTitlebarWithConfig:(id)a0;
- (void)didBeginHosting;
- (void)didEndHosting:(id)a0;
- (void)navigationStackDidChangeWithHasPushedContent:(BOOL)a0 title:(id)a1;
- (void)navigationSubtitleDidChange:(id)a0;

@end
