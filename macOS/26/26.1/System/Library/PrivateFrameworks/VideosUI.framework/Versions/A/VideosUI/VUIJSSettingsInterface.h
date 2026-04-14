@interface VUIJSSettingsInterface : VUIJSObject <VUIJSSettingsInterface>

- (BOOL)sportsScoreSpoilersAllowed;
- (id)userPreferences;
- (void)dealloc;
- (id)initWithAppContext:(id)a0;
- (void)_handleSettingsDidChange:(id)a0;
- (void)updateFeaturesConfiguration:(id)a0;

@end
