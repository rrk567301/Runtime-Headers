@interface VUIJSSettingsInterface : VUIJSObject <VUIJSSettingsInterface>

- (void)dealloc;
- (id)userPreferences;
- (id)consentedBrands;
- (id)initWithAppContext:(id)a0;
- (void)_handleSettingsDidChange:(id)a0;
- (id)appSettingsByChannelID;
- (id)deniedBrands;
- (void)forceUpdateWithCallback:(id)a0;
- (unsigned long long)privacyFlowContentVersion;
- (BOOL)privateModeEnabled;
- (BOOL)sportsScoreSpoilersAllowed;
- (void)updateFeaturesConfiguration:(id)a0;
- (id)wlkOverrides;

@end
