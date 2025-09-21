@interface CalEntitlementsVerifier : NSObject

+ (BOOL)currentProcessIsDataAccess;
+ (BOOL)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (id)_currentProcessValueForEntitlement:(id)a0 loadBlock:(id /* block */)a1;
+ (BOOL)currentProcessHasBirthdayModificationEntitlement;
+ (BOOL)currentProcessUsesInProcessEventStores;
+ (id)currentProcessGetStringEntitlement:(id)a0;
+ (BOOL)currentProcessHasSyncClientEntitlement;
+ (BOOL)currentProcessHasTestingEntitlement;
+ (BOOL)currentProcessHasWatchOSMutableDatabaseEntitlement;
+ (BOOL)currentProcessHasCalendarToolEntitlement;
+ (BOOL)currentProcessCanAccessProcedureOrEmailAlarms;
+ (BOOL)currentProcessIsAutomator;
+ (BOOL)currentProcessIsFirstPartyCalendarApp;
+ (BOOL)currentProcessIsCalendarDaemon;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)currentProcessHasAllowSuggestionsEntitlement;
+ (BOOL)currentProcessIsShortcuts;
+ (id)currentProcessGetArrayOfStringsEntitlement:(id)a0;
+ (BOOL)currentProcessHasBooleanEntitlement:(id)a0;
+ (BOOL)currentProcessIsFirstPartyApp;

@end
