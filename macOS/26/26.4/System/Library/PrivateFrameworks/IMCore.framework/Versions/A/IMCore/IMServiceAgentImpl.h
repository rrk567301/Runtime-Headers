@interface IMServiceAgentImpl : IMServiceAgent

+ (id)notificationCenter;
+ (void)initialize;
+ (id)imageNameForStatus:(unsigned long long)a0;
+ (void)_determineStatusImageAppearance;
+ (void)_statusImageAppearanceChanged:(id)a0;
+ (void)forgetStatusImageAppearance;
+ (id)imageURLForStatus:(unsigned long long)a0;
+ (id)sharedAgent;

- (id)notificationCenter;
- (id)serviceWithName:(id)a0;
- (void)setupComplete;
- (id)init;
- (void)vcCapabilitiesChanged:(unsigned long long)a0;
- (void)dealloc;
- (void)_customMessagesChanged:(id)a0;
- (void)_daemonConnected:(id)a0;
- (void)_daemonDisconnected:(id)a0;
- (void)_statusImageAppearanceChanged:(id)a0;
- (void)launchIfNecessary;
- (id)myAvailableMessages;
- (id)myAwayMessages;
- (void)setMyAvailableMessages:(id)a0;
- (void)setMyAwayMessages:(id)a0;
- (unsigned long long)vcCapabilities;

@end
