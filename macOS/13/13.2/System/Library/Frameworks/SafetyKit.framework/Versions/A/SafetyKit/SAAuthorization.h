@interface SAAuthorization : NSObject

@property (class, readonly, nonatomic, getter=isInFlight) BOOL inFlight;

+ (BOOL)currentConnectionAuthorizedForCrashDetection;
+ (BOOL)connectionAuthorizedForCrashDetection:(id)a0;
+ (BOOL)auditTokenAuthorizedForCrashDetection:(struct { unsigned int x0[8]; })a0;
+ (BOOL)currentConnectionAuthorizedForAnyEmergency;
+ (BOOL)connectionAuthorizedForAnyEmergency:(id)a0;
+ (BOOL)auditTokenAuthorizedForAnyEmergency:(struct { unsigned int x0[8]; })a0;
+ (long long)authorizationStatusWithTCCPreflightResult:(int)a0;
+ (long long)authorizationStatusForCurrentConnection;
+ (BOOL)startAuthorizationForBundleURL:(id)a0 preflightAuthorizationStatus:(long long)a1 completionHandler:(id /* block */)a2;
+ (id)approvedAppExcludingBundleId:(id)a0;
+ (id)approvedBundleId;
+ (void)showAuthorizationPrompt;
+ (BOOL)setAccess:(BOOL)a0 forBundleId:(id)a1;
+ (id)SASyncedBundleId;
+ (void)setThirdPartyBundleId:(id)a0;
+ (void *)_copyPrefsValueForKey:(id)a0;
+ (void)_setPrefsValue:(id)a0 forKey:(id)a1;
+ (BOOL)_synchronizePrefs;

@end
