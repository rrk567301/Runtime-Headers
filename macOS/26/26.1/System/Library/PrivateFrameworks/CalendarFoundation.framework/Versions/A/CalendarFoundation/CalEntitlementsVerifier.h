@interface CalEntitlementsVerifier : NSObject

+ (BOOL)currentProcessHasAllowSuggestionsEntitlement;
+ (BOOL)currentProcessIsFirstPartyApp;
+ (id)currentProcessGetStringEntitlement:(id)a0;
+ (BOOL)currentProcessHasTestingEntitlement;
+ (BOOL)currentProcessHasSyncClientEntitlement;
+ (BOOL)currentProcessCanAccessProcedureOrEmailAlarms;
+ (BOOL)currentProcessHasBooleanEntitlement:(id)a0;
+ (BOOL)currentProcessIsDataAccess;
+ (BOOL)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)currentProcessIsShortcuts;
+ (BOOL)currentProcessHasCalendarToolEntitlement;
+ (BOOL)currentProcessUsesInProcessEventStores;
+ (BOOL)currentProcessHasWatchOSMutableDatabaseEntitlement;
+ (BOOL)currentProcessIsAutomator;
+ (BOOL)currentProcessIsFirstPartyCalendarApp;
+ (BOOL)currentProcessIsCalendarDaemon;
+ (id)_currentProcessValueForEntitlement:(id)a0 loadBlock:(id /* block */)a1;
+ (id)currentProcessGetArrayOfStringsEntitlement:(id)a0;
+ (BOOL)currentProcessHasBirthdayModificationEntitlement;

@end
