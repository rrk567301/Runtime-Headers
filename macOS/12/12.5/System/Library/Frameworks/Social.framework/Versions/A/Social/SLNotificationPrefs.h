@interface SLNotificationPrefs : NSObject

+ (id)sharedPreferences;

- (id)init;
- (id)defaultTwitterPrefs;
- (id)defaultSinaWeiboPrefs;
- (id)localizedPrefsForType:(id)a0 withValue:(id)a1;
- (id)defaultPrefsForBundleID:(id)a0;
- (id)preferencesForClient:(id)a0;
- (void)addCheckBoxFromPreferences:(id)a0 toArray:(id)a1 forKey:(id)a2;
- (void)addRadioButtonsFromPreferences:(id)a0 toArray:(id)a1 forKey:(id)a2;
- (id)notificationPreferencesForClient:(id)a0;
- (id)notificationPreferenceForClient:(id)a0 andKey:(id)a1;
- (void)setNotificationPreferenceForClient:(id)a0 withObject:(id)a1 forKey:(id)a2;

@end
