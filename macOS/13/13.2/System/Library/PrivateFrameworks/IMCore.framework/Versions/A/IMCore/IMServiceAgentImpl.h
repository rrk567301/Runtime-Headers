@interface IMServiceAgentImpl : IMServiceAgent

+ (void)initialize;
+ (id)notificationCenter;
+ (id)imageNameForStatus:(unsigned long long)a0;
+ (void)_statusImageAppearanceChanged:(id)a0;
+ (id)sharedAgent;
+ (void)forgetStatusImageAppearance;
+ (void)_determineStatusImageAppearance;
+ (id)imageURLForStatus:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (id)notificationCenter;
- (void)setupComplete;
- (void)vcCapabilitiesChanged:(unsigned long long)a0;
- (id)serviceWithName:(id)a0;
- (unsigned long long)vcCapabilities;
- (void)_daemonDisconnected:(id)a0;
- (void)_statusImageAppearanceChanged:(id)a0;
- (void)_customMessagesChanged:(id)a0;
- (void)_daemonConnected:(id)a0;
- (void)launchIfNecessary;
- (id)myAvailableMessages;
- (id)myAwayMessages;
- (void)setMyAvailableMessages:(id)a0;
- (void)setMyAwayMessages:(id)a0;

@end
