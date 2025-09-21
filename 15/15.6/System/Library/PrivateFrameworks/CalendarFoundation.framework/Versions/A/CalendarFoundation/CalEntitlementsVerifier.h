@interface CalEntitlementsVerifier : NSObject

+ (id)_currentProcessValueForEntitlement:(id)a0 loadBlock:(id /* block */)a1;
+ (char)currentProcessCanAccessProcedureOrEmailAlarms;
+ (id)currentProcessGetArrayOfStringsEntitlement:(id)a0;
+ (id)currentProcessGetStringEntitlement:(id)a0;
+ (char)currentProcessHasAllowSuggestionsEntitlement;
+ (char)currentProcessHasBirthdayModificationEntitlement;
+ (char)currentProcessHasBooleanEntitlement:(id)a0;
+ (char)currentProcessHasCalendarToolEntitlement;
+ (char)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (char)currentProcessHasSyncClientEntitlement;
+ (char)currentProcessHasTestingEntitlement;
+ (char)currentProcessHasWatchOSMutableDatabaseEntitlement;
+ (char)currentProcessIsAutomator;
+ (char)currentProcessIsCalendarDaemon;
+ (char)currentProcessIsDataAccess;
+ (char)currentProcessIsFirstPartyApp;
+ (char)currentProcessIsFirstPartyCalendarApp;
+ (char)currentProcessIsPreferences;
+ (char)currentProcessIsShortcuts;
+ (char)currentProcessUsesInProcessEventStores;

@end
