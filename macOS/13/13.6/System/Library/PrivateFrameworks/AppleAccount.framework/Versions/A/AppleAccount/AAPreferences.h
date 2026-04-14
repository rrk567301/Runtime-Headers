@interface AAPreferences : NSObject

+ (void)setMultipleFullAccountsEnabled:(BOOL)a0;
+ (long long)customHealthCheckIntervalMinutes;
+ (long long)customHealthCheckReachabilityIntervalMinutes;
+ (long long)customHealthCheckVersion;
+ (BOOL)isBackupForDataSeparationEnabled;
+ (BOOL)isCustomHealthCheckIntervalEnabled;
+ (BOOL)isExperimentalModeEnabled;
+ (BOOL)isHealthCheckTTREnabled;
+ (BOOL)isMultipleFullAccountsEnabled;
+ (BOOL)isNeverSkipCustodianCheckEnabled;
+ (BOOL)isRunningInStoreDemoMode;
+ (BOOL)isSimulateUnhealthyCustodianEnabled;
+ (void)setCustomHealthCheckIntervalEnabled:(BOOL)a0;
+ (void)setCustomHealthCheckIntervalMinutes:(long long)a0;
+ (void)setCustomHealthCheckVersion:(long long)a0;
+ (void)setCustomHealthFailureReachabilityIntervalMinutes:(long long)a0;
+ (void)setExperimentalModeEnabled:(BOOL)a0;
+ (void)setHealthCheckTTREnabled:(BOOL)a0;
+ (void)setNeverSkipCustodianCheckEnabled:(BOOL)a0;
+ (void)setShouldShowAccountContacts:(BOOL)a0;
+ (void)setShouldUseUnifiedLoginEndpoint:(BOOL)a0;
+ (void)setSimulateUnhealthyCustodianEnabled:(BOOL)a0;
+ (BOOL)shouldEnableAccountUserNotifications;
+ (BOOL)shouldEnableFastSignIn;
+ (BOOL)shouldShowAccountContacts;
+ (BOOL)shouldUseUnifiedLoginEndpoint;

@end
