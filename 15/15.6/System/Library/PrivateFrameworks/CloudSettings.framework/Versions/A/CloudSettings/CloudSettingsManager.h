@interface CloudSettingsManager : NSObject

+ (id)sharedCloudSettingsManager;

- (char)isEnabledForStore:(id)a0;
- (void)writeToCloudSettings:(id)a0 forStore:(id)a1;
- (void)applySettingsToDevice:(id)a0 forStore:(id)a1;
- (void)writeSettingsDictionaryToPrefs:(id)a0;
- (id)activeXPCConnectionForStore:(id)a0;
- (void)applyCloudSettingsToDevice:(id)a0 forStore:(id)a1;
- (long long)conflictStateForStore:(id)a0;
- (id)currentConflictDictionary;
- (id)currentStateDictionary;
- (id)defaultSettingsDictionary;
- (id)deviceSettingsForStore:(id)a0;
- (char)isCloudSyncingEnabled:(char)a0;
- (char)isServiceKnownForStore:(id)a0;
- (id)knownServiceNames;
- (void)performFirstTimeSetup:(id)a0;
- (void)setCloudSyncingEnabled:(char)a0;
- (void)setConflict:(long long)a0 forStore:(id)a1;
- (void)setEnabled:(char)a0 forStore:(id)a1;
- (void)writeConflictsDictionaryToPrefs:(id)a0;

@end
