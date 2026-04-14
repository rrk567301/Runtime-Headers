@interface CalEntitlementsVerifier : NSObject

+ (BOOL)currentProcessIsFirstPartyApp;
+ (BOOL)currentProcessHasSyncClientEntitlement;
+ (BOOL)currentProcessIsShortcuts;
+ (BOOL)currentProcessHasWatchOSMutableDatabaseEntitlement;
+ (BOOL)currentProcessIsDataAccess;
+ (BOOL)currentProcessCanAccessProcedureOrEmailAlarms;
+ (BOOL)currentProcessHasTestingEntitlement;
+ (id)currentProcessGetArrayOfStringsEntitlement:(id)a0;
+ (BOOL)currentProcessHasBooleanEntitlement:(id)a0;
+ (BOOL)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (BOOL)currentProcessHasBirthdayModificationEntitlement;
+ (BOOL)currentProcessHasAllowSuggestionsEntitlement;
+ (BOOL)currentProcessIsFirstPartyCalendarApp;
+ (id)_currentProcessValueForEntitlement:(id)a0 loadBlock:(id /* block */)a1;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)currentProcessIsAutomator;
+ (BOOL)currentProcessHasCalendarToolEntitlement;
+ (id)currentProcessGetStringEntitlement:(id)a0;
+ (BOOL)currentProcessIsCalendarDaemon;
+ (BOOL)currentProcessUsesInProcessEventStores;

@end
