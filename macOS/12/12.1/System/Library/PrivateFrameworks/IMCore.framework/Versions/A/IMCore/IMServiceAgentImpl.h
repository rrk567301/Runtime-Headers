@interface IMServiceAgentImpl : IMServiceAgent

+ (void)initialize;
+ (id)notificationCenter;
+ (id)imageNameForStatus:(unsigned long long)a0;
+ (void)_statusImageAppearanceChanged:(id)a0;
+ (void)forgetStatusImageAppearance;
+ (void)_determineStatusImageAppearance;
+ (id)sharedAgent;
+ (id)imageURLForStatus:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (id)notificationCenter;
- (id)serviceWithName:(id)a0;
- (void)setupComplete;
- (void)vcCapabilitiesChanged:(unsigned long long)a0;
- (unsigned long long)vcCapabilities;
- (void)setMyStatus:(unsigned long long)a0 message:(id)a1;
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
