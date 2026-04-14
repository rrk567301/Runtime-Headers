@interface VUIJSSettingsInterface : VUIJSObject <VUIJSSettingsInterface>

- (void)dealloc;
- (id)userPreferences;
- (id)initWithAppContext:(id)a0;
- (id)consentedBrands;
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
