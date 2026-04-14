@interface VUIJSSettingsInterface : VUIJSObject <VUIJSSettingsInterface>

- (void)dealloc;
- (id)userPreferences;
- (id)initWithAppContext:(id)a0;
- (void)_handleSettingsDidChange:(id)a0;
- (unsigned long long)privacyFlowContentVersion;
- (BOOL)privateModeEnabled;
- (BOOL)sportsScoreSpoilersAllowed;
- (void)forceUpdateWithCallback:(id)a0;
- (id)appSettingsByChannelID;
- (id)consentedBrands;
- (id)deniedBrands;
- (id)wlkOverrides;
- (void)updateFeaturesConfiguration:(id)a0;

@end
