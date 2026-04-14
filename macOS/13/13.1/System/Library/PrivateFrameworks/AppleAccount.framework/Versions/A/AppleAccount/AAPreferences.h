@interface AAPreferences : NSObject

+ (BOOL)isMultipleFullAccountsEnabled;
+ (void)setMultipleFullAccountsEnabled:(BOOL)a0;
+ (BOOL)shouldUseUnifiedLoginEndpoint;
+ (void)setShouldUseUnifiedLoginEndpoint:(BOOL)a0;
+ (BOOL)shouldEnableFastSignIn;
+ (BOOL)shouldEnableAccountUserNotifications;
+ (BOOL)shouldShowAccountContacts;
+ (void)setShouldShowAccountContacts:(BOOL)a0;
+ (BOOL)isRunningInStoreDemoMode;
+ (BOOL)isExperimentalModeEnabled;
+ (void)setExperimentalModeEnabled:(BOOL)a0;
+ (BOOL)isHealthCheckTTREnabled;
+ (void)setHealthCheckTTREnabled:(BOOL)a0;
+ (BOOL)isSimulateUnhealthyCustodianEnabled;
+ (void)setSimulateUnhealthyCustodianEnabled:(BOOL)a0;
+ (BOOL)isCustomHealthCheckIntervalEnabled;
+ (void)setCustomHealthCheckIntervalEnabled:(BOOL)a0;
+ (BOOL)isNeverSkipCustodianCheckEnabled;
+ (void)setNeverSkipCustodianCheckEnabled:(BOOL)a0;
+ (long long)customHealthCheckIntervalMinutes;
+ (void)setCustomHealthCheckIntervalMinutes:(long long)a0;
+ (long long)customHealthCheckReachabilityIntervalMinutes;
+ (void)setCustomHealthFailureReachabilityIntervalMinutes:(long long)a0;
+ (long long)customHealthCheckVersion;
+ (void)setCustomHealthCheckVersion:(long long)a0;
+ (BOOL)isSkipPurgeAndPullBeforeHealthChecksEnabled;
+ (void)setSkipPurgeAndPullBeforeHealthChecksEnabled:(BOOL)a0;
+ (BOOL)isBackupForDataSeparationEnabled;

@end
