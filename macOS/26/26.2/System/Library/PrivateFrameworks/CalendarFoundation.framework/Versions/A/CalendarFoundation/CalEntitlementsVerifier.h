@interface CalEntitlementsVerifier : NSObject

+ (BOOL)currentProcessHasSyncClientEntitlement;
+ (id)_currentProcessValueForEntitlement:(id)a0 loadBlock:(id /* block */)a1;
+ (id)currentProcessGetArrayOfStringsEntitlement:(id)a0;
+ (BOOL)currentProcessIsShortcuts;
+ (BOOL)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (id)currentProcessGetStringEntitlement:(id)a0;
+ (BOOL)currentProcessIsDataAccess;
+ (BOOL)currentProcessIsAutomator;
+ (BOOL)currentProcessHasCalendarToolEntitlement;
+ (BOOL)currentProcessIsCalendarDaemon;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)currentProcessCanAccessProcedureOrEmailAlarms;
+ (BOOL)currentProcessUsesInProcessEventStores;
+ (BOOL)currentProcessIsFirstPartyCalendarApp;
+ (BOOL)currentProcessHasAllowSuggestionsEntitlement;
+ (BOOL)currentProcessHasBirthdayModificationEntitlement;
+ (BOOL)currentProcessHasWatchOSMutableDatabaseEntitlement;
+ (BOOL)currentProcessIsFirstPartyApp;
+ (BOOL)currentProcessHasBooleanEntitlement:(id)a0;
+ (BOOL)currentProcessHasTestingEntitlement;

@end
