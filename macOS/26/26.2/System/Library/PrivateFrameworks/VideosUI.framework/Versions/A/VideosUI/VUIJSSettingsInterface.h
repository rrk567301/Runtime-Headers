@interface VUIJSSettingsInterface : VUIJSObject <VUIJSSettingsInterface>

- (id)userPreferences;
- (BOOL)sportsScoreSpoilersAllowed;
- (void)dealloc;
- (id)initWithAppContext:(id)a0;
- (void)_handleSettingsDidChange:(id)a0;
- (void)updateFeaturesConfiguration:(id)a0;

@end
