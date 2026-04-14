@interface AAPreferences : NSObject

+ (BOOL)isYorktownEnabled;
+ (BOOL)shouldSkipIdMSFinalizeCustodian;
+ (void)setMultipleFullAccountsEnabled:(BOOL)a0;
+ (long long)customHealthCheckIntervalMinutes;
+ (long long)customHealthCheckReachabilityIntervalMinutes;
+ (long long)customHealthCheckVersion;
+ (long long)customIdentityTaskIntervalMinutes;
+ (id)getCustodianInfo;
+ (BOOL)isCustomHealthCheckIntervalEnabled;
+ (BOOL)isCustomIdentityTaskIntervalEnabled;
+ (BOOL)isExperimentalModeEnabled;
+ (BOOL)isHealthCheckTTREnabled;
+ (BOOL)isIdentityPresentationEnabled;
+ (BOOL)isMomentsDataclassEnabled;
+ (BOOL)isMultipleFullAccountsEnabled;
+ (BOOL)isNeverSkipCustodianCheckEnabled;
+ (BOOL)isRunningInStoreDemoMode;
+ (BOOL)isSimulateUnhealthyCustodianEnabled;
+ (BOOL)isSpyglass2023Enabled;
+ (BOOL)repairWithoutTransparencyCFU;
+ (void)setCustodianInfo:(id)a0;
+ (void)setCustomHealthCheckIntervalEnabled:(BOOL)a0;
+ (void)setCustomHealthCheckIntervalMinutes:(long long)a0;
+ (void)setCustomHealthCheckVersion:(long long)a0;
+ (void)setCustomHealthFailureReachabilityIntervalMinutes:(long long)a0;
+ (void)setCustomIdentityTaskIntervalEnabled:(BOOL)a0;
+ (void)setCustomIdentityTaskIntervalMinutes:(long long)a0;
+ (void)setExperimentalModeEnabled:(BOOL)a0;
+ (void)setHealthCheckTTREnabled:(BOOL)a0;
+ (void)setNeverSkipCustodianCheckEnabled:(BOOL)a0;
+ (void)setShouldShowAccountContacts:(BOOL)a0;
+ (void)setShouldUseUnifiedLoginEndpoint:(BOOL)a0;
+ (void)setSimulateUnhealthyCustodianEnabled:(BOOL)a0;
+ (BOOL)shouldEnableAccountUserNotifications;
+ (BOOL)shouldEnableFastSignIn;
+ (BOOL)shouldShowAccountContacts;
+ (BOOL)shouldSkipIdMSKeyUpdate;
+ (BOOL)shouldUseUnifiedLoginEndpoint;
+ (BOOL)simulate2FAFA;

@end
