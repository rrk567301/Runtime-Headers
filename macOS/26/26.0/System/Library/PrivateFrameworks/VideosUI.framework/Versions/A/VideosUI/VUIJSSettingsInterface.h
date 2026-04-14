@interface VUIJSSettingsInterface : VUIJSObject <VUIJSSettingsInterface>

- (void)dealloc;
- (BOOL)sportsScoreSpoilersAllowed;
- (id)userPreferences;
- (id)initWithAppContext:(id)a0;
- (void)_handleSettingsDidChange:(id)a0;
- (void)updateFeaturesConfiguration:(id)a0;

@end
