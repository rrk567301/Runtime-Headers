@interface Settings.SettingsHostDelegate : NSObject <Settings.SettingsPrivateHostProtocol>

- (id)init;
- (void).cxx_destruct;
- (void)switchTo:(id)a0 arguments:(id)a1;
- (void)signalWithMilestone:(id)a0;
- (void)updateTitlebarWithConfig:(id)a0;
- (void)didBeginHosting;
- (void)didEndHosting:(id)a0;
- (void)navigationStackDidChange:(id)a0;
- (void)navigationSubtitleDidChange:(id)a0;
- (void)navigationTitleDidChange:(id)a0;
- (void)signalWithExtensionID:(id)a0 milestone:(id)a1;

@end
