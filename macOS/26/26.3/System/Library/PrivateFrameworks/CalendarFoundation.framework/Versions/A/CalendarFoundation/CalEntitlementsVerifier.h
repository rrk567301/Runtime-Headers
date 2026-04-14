@interface CalEntitlementsVerifier : NSObject

+ (BOOL)currentProcessIsAutomator;
+ (BOOL)currentProcessHasBirthdayModificationEntitlement;
+ (id)currentProcessGetStringEntitlement:(id)a0;
+ (BOOL)currentProcessCanAccessProcedureOrEmailAlarms;
+ (BOOL)currentProcessHasTestingEntitlement;
+ (BOOL)currentProcessHasAllowSuggestionsEntitlement;
+ (BOOL)currentProcessHasSyncClientEntitlement;
+ (BOOL)currentProcessIsFirstPartyApp;
+ (BOOL)currentProcessHasCalendarToolEntitlement;
+ (BOOL)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (BOOL)currentProcessIsPreferences;
+ (id)currentProcessGetArrayOfStringsEntitlement:(id)a0;
+ (BOOL)currentProcessUsesInProcessEventStores;
+ (BOOL)currentProcessHasWatchOSMutableDatabaseEntitlement;
+ (BOOL)currentProcessIsShortcuts;
+ (BOOL)currentProcessIsDataAccess;
+ (BOOL)currentProcessHasBooleanEntitlement:(id)a0;
+ (BOOL)currentProcessIsCalendarDaemon;
+ (id)_currentProcessValueForEntitlement:(id)a0 loadBlock:(id /* block */)a1;
+ (BOOL)currentProcessIsFirstPartyCalendarApp;

@end
