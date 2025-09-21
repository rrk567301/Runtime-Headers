@interface SMMobileSMSPreferencesUtilities : NSObject

@property (class, nonatomic) long long alwaysOnPromptCount;
@property (class, nonatomic) BOOL hasUserCompletedOnboarding;
@property (class, nonatomic) BOOL shareAllLocations;
@property (class, readonly, nonatomic) BOOL isUserOnBoardedForCriticalAlert;
@property (class, nonatomic) long long criticalAlertPreference;
@property (class, readonly, nonatomic) BOOL showCheckInRemindersTip;
@property (class, nonatomic) BOOL checkInRemindersPreviouslyEnabled;

+ (id)store;
+ (void)migrateIfNeeded;
+ (BOOL)isLockScreenSuggestionsAllowed;
+ (void)syncSiriLockScreenSuggestionsPrefs;
+ (void)_setHasUserCompletedOnboarding:(id)a0;
+ (void)clearHasUserCompletedOnboarding;
+ (id)duetExpertStore;
+ (id)_copyDuetExpertPreferencesValueForKey:(id)a0;
+ (id)_copyMobileSMSPreferencesValueForKey:(id)a0;
+ (id)_criticalAlertPreference;
+ (void)_setMobileSMSPreferencesValue:(id)a0 forKey:(id)a1;
+ (void)_setShareAllLocations:(id)a0;
+ (void)_syncSiriLockScreenSuggestionsPrefIfNeeded;
+ (void)_syncSiriLockScreenSuggestionsPrefWithValue:(BOOL)a0;
+ (void)clearCriticalAlertUserPreference;
+ (void)clearShareAllLocations;
+ (BOOL)isMobileSMSPreferencesLockScreenSuggestionsAllowed;
+ (id)legacyStore;

@end
