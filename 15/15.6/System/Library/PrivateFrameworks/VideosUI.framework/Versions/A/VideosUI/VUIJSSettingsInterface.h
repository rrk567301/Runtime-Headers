@interface VUIJSSettingsInterface : VUIJSObject <VUIJSSettingsInterface>

- (void)dealloc;
- (id)userPreferences;
- (id)initWithAppContext:(id)a0;
- (void)_handleSettingsDidChange:(id)a0;
- (char)sportsScoreSpoilersAllowed;
- (void)updateFeaturesConfiguration:(id)a0;

@end
