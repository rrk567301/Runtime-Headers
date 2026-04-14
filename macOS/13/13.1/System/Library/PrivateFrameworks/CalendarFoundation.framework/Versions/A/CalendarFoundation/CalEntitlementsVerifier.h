@interface CalEntitlementsVerifier : NSObject

+ (BOOL)currentProcessHasBooleanEntitlement:(id)a0;
+ (id)currentProcessGetStringEntitlement:(id)a0;
+ (id)_currentProcessValueForEntitlement:(id)a0 expectedType:(unsigned long long)a1;
+ (BOOL)currentProcessIsFirstPartyCalendarApp;
+ (BOOL)currentProcessIsCalendarDaemon;
+ (BOOL)currentProcessIsDataAccess;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)currentProcessIsAutomator;
+ (BOOL)currentProcessHasAllowSuggestionsEntitlement;
+ (BOOL)currentProcessHasWatchOSMutableDatabaseEntitlement;
+ (BOOL)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (BOOL)currentProcessHasContactsUIEntitlement;
+ (BOOL)currentProcessHasSyncClientEntitlement;
+ (BOOL)currentProcessHasBirthdayModificationEntitlement;
+ (BOOL)currentProcessHasTestingEntitlement;

@end
