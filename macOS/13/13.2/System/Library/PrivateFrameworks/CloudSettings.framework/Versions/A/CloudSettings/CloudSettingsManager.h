@interface CloudSettingsManager : NSObject

+ (id)sharedCloudSettingsManager;

- (BOOL)isEnabledForStore:(id)a0;
- (void)writeToCloudSettings:(id)a0 forStore:(id)a1;
- (void)applyCloudSettingsToDevice:(id)a0 forStore:(id)a1;
- (void)setCloudSyncingEnabled:(BOOL)a0;
- (BOOL)isCloudSyncingEnabled:(BOOL)a0;
- (void)setEnabled:(BOOL)a0 forStore:(id)a1;
- (void)setConflict:(long long)a0 forStore:(id)a1;
- (long long)conflictStateForStore:(id)a0;
- (BOOL)isServiceKnownForStore:(id)a0;
- (void)performFirstTimeSetup:(id)a0;
- (id)deviceSettingsForStore:(id)a0;
- (void)applySettingsToDevice:(id)a0 forStore:(id)a1;
- (id)knownServiceNames;
- (id)defaultSettingsDictionary;
- (void)writeSettingsDictionaryToPrefs:(id)a0;
- (id)currentStateDictionary;
- (id)activeXPCConnectionForStore:(id)a0;
- (id)currentConflictDictionary;
- (void)writeConflictsDictionaryToPrefs:(id)a0;

@end
