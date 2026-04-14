@interface CalEntitlementsVerifier : NSObject

+ (id)_currentProcessValueForEntitlement:(id)a0 expectedType:(unsigned long long)a1;
+ (id)currentProcessGetStringEntitlement:(id)a0;
+ (BOOL)currentProcessHasAllowSuggestionsEntitlement;
+ (BOOL)currentProcessHasBirthdayModificationEntitlement;
+ (BOOL)currentProcessHasBooleanEntitlement:(id)a0;
+ (BOOL)currentProcessHasContactsUIEntitlement;
+ (BOOL)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (BOOL)currentProcessHasSyncClientEntitlement;
+ (BOOL)currentProcessHasTestingEntitlement;
+ (BOOL)currentProcessHasWatchOSMutableDatabaseEntitlement;
+ (BOOL)currentProcessIsAutomator;
+ (BOOL)currentProcessIsCalendarDaemon;
+ (BOOL)currentProcessIsDataAccess;
+ (BOOL)currentProcessIsFirstPartyCalendarApp;
+ (BOOL)currentProcessIsPreferences;

@end
