@interface VUIJSSettingsInterface : VUIJSObject <VUIJSSettingsInterface>

- (void)dealloc;
- (id)userPreferences;
- (id)initWithAppContext:(id)a0;
- (void)_handleSettingsDidChange:(id)a0;
- (BOOL)privateModeEnabled;
- (BOOL)sportsScoreSpoilersAllowed;
- (id)consentedBrands;
- (id)deniedBrands;
- (unsigned long long)privacyFlowContentVersion;
- (void)forceUpdateWithCallback:(id)a0;
- (id)appSettingsByChannelID;
- (id)wlkOverrides;
- (void)updateFeaturesConfiguration:(id)a0;

@end
