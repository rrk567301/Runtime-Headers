@interface SMMobileSMSPreferencesUtilities : NSObject

@property (class, nonatomic) char hasUserCompletedOnboarding;
@property (class, nonatomic) char shareAllLocations;
@property (class, readonly, nonatomic) char isUserOnBoardedForCriticalAlert;
@property (class, nonatomic) long long criticalAlertPreference;

+ (id)store;
+ (void)migrateIfNeeded;
+ (char)isLockScreenSuggestionsAllowed;
+ (void)syncSiriLockScreenSuggestionsPrefs;
+ (void)clearHasUserCompletedOnboarding;
+ (id)duetExpertStore;
+ (void)_setHasUserCompletedOnboarding:(id)a0;
+ (id)_copyDuetExpertPreferencesValueForKey:(id)a0;
+ (id)_copyMobileSMSPreferencesValueForKey:(id)a0;
+ (id)_criticalAlertPreference;
+ (void)_setMobileSMSPreferencesValue:(id)a0 forKey:(id)a1;
+ (void)_setShareAllLocations:(id)a0;
+ (void)_syncSiriLockScreenSuggestionsPrefIfNeeded;
+ (void)_syncSiriLockScreenSuggestionsPrefWithValue:(char)a0;
+ (void)clearCriticalAlertUserPreference;
+ (void)clearShareAllLocations;
+ (char)isMobileSMSPreferencesLockScreenSuggestionsAllowed;
+ (id)legacyStore;

@end
