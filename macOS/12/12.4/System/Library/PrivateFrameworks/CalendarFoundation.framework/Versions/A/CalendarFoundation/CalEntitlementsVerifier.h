@interface CalEntitlementsVerifier : NSObject

+ (BOOL)currentProcessHasBooleanEntitlement:(id)a0;
+ (BOOL)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (BOOL)currentProcessIsFirstPartyCalendarApp;
+ (BOOL)currentProcessIsCalendarDaemon;
+ (BOOL)currentProcessIsDataAccess;
+ (BOOL)currentProcessHasAllowSuggestionsEntitlement;
+ (BOOL)currentProcessHasWatchOSMutableDatabaseEntitlement;
+ (BOOL)currentProcessHasContactsUIEntitlement;
+ (BOOL)currentProcessHasSyncClientEntitlement;
+ (BOOL)currentProcessHasBirthdayModificationEntitlement;

@end
