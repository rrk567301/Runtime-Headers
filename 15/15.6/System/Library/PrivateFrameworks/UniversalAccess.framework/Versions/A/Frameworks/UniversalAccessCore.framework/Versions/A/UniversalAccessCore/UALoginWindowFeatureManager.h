@class NSArray;

@interface UALoginWindowFeatureManager : NSObject

@property (class, readonly, nonatomic) NSArray *_orderedAvailableFeatureTypes;

@property (readonly, nonatomic) NSArray *allAvailableFeatures;

+ (id)sharedManager;

- (void)updateLoginWindowFeatures:(id)a0;
- (id)pathToVoiceData;
- (id)_allFeatures;
- (id)_currentLoginWindowPreferencesForUserInterface:(char)a0;
- (id)_enabledKeysForFeature:(long long)a0;
- (char)_featureEnabledAtLoginWindowForUserInterface:(long long)a0;
- (id)_featureHumanReadableName:(long long)a0;
- (char)_featureWillCopyUserPreferences:(long long)a0;
- (id)_featureWithType:(long long)a0;
- (void)_migrateVoiceOverEnabledKeyIfNeeded;
- (id)_preferenceKeysForFeature:(long long)a0;
- (id)_preferencesDictionaryForFeatureType:(long long)a0 enabled:(char)a1;
- (void)_setLoginWindowFeatureType:(long long)a0 isEnabled:(char)a1;
- (void)_setupUserWithLoginWindowPrefs:(id)a0 forFeature:(long long)a1;
- (char)_shouldUtilizePrebootValues;
- (char)_validateLoginWindowPreferences:(id)a0 forFeature:(long long)a1;
- (id)preferredVoice;
- (unsigned long long)settingsOverride;
- (void)transferLoginWindowFeaturesToCurrentUser;

@end
