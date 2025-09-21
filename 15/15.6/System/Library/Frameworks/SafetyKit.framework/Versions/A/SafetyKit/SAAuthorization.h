@interface SAAuthorization : NSObject

@property (class, readonly, nonatomic, getter=isInFlight) char inFlight;

+ (id)SASyncedBundleId;
+ (void *)_copyPrefsValueForKey:(id)a0;
+ (void)_setPrefsValue:(id)a0 forKey:(id)a1;
+ (char)_synchronizePrefs;
+ (id)approvedAppExcludingBundleId:(id)a0;
+ (id)approvedBundleId;
+ (char)auditTokenAuthorizedForAnyEmergency:(struct { unsigned int x0[8]; })a0;
+ (char)auditTokenAuthorizedForCrashDetection:(struct { unsigned int x0[8]; })a0;
+ (long long)authorizationStatusForCurrentConnection;
+ (long long)authorizationStatusWithTCCPreflightResult:(int)a0;
+ (char)connectionAuthorizedForAnyEmergency:(id)a0;
+ (char)connectionAuthorizedForCrashDetection:(id)a0;
+ (char)currentConnectionAuthorizedForAnyEmergency;
+ (char)currentConnectionAuthorizedForCrashDetection;
+ (char)setAccess:(char)a0 forBundleId:(id)a1;
+ (void)setThirdPartyBundleId:(id)a0;
+ (void)showAuthorizationPrompt;
+ (char)startAuthorizationForBundleURL:(id)a0 preflightAuthorizationStatus:(long long)a1 completionHandler:(id /* block */)a2;

@end
