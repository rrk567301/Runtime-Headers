@interface AAPreferences : NSObject

+ (BOOL)isSignInSecurityRedesignEnabled;
+ (BOOL)isYorktownEnabled;
+ (void)setMultipleFullAccountsEnabled:(BOOL)a0;
+ (id)getTrustedContactsPreflightInfo;
+ (BOOL)shouldSkipIdMSFinalizeCustodian;
+ (long long)customHealthCheckIntervalMinutes;
+ (long long)customHealthCheckReachabilityIntervalMinutes;
+ (long long)customHealthCheckVersion;
+ (BOOL)disableADPStateHealing;
+ (id)getCustodianInfo;
+ (BOOL)isAppleAccountInformationCacheEnabled;
+ (BOOL)isCustomHealthCheckIntervalEnabled;
+ (BOOL)isExperimentalModeEnabled;
+ (BOOL)isHealthCheckTTREnabled;
+ (BOOL)isMomentsDataclassEnabled;
+ (BOOL)isMultipleFullAccountsEnabled;
+ (BOOL)isNeverSkipCustodianCheckEnabled;
+ (BOOL)isRunningInStoreDemoMode;
+ (BOOL)isSignInSecurityRedesignMacOSEnabled;
+ (BOOL)isSimulateUnhealthyCustodianEnabled;
+ (BOOL)isSpyglass2023Enabled;
+ (void)setCustodianInfo:(id)a0;
+ (void)setCustomHealthCheckIntervalEnabled:(BOOL)a0;
+ (void)setCustomHealthCheckIntervalMinutes:(long long)a0;
+ (void)setCustomHealthCheckVersion:(long long)a0;
+ (void)setCustomHealthFailureReachabilityIntervalMinutes:(long long)a0;
+ (void)setDisableADPStateHealing:(BOOL)a0;
+ (void)setExperimentalModeEnabled:(BOOL)a0;
+ (void)setHealthCheckTTREnabled:(BOOL)a0;
+ (void)setNeverSkipCustodianCheckEnabled:(BOOL)a0;
+ (void)setShouldShowAccountContacts:(BOOL)a0;
+ (void)setShouldUseUnifiedLoginEndpoint:(BOOL)a0;
+ (void)setSimulateUnhealthyCustodianEnabled:(BOOL)a0;
+ (void)setTrustedContactsPreflightInfo:(id)a0;
+ (BOOL)shouldEnableAccountUserNotifications;
+ (BOOL)shouldEnableFastSignIn;
+ (BOOL)shouldShowAccountContacts;
+ (BOOL)shouldSkipIdMSKeyUpdate;
+ (BOOL)shouldSkipRecoveryInfoRecordStorage;
+ (BOOL)shouldUseUnifiedLoginEndpoint;
+ (BOOL)simulate2FAFA;

- (BOOL)isLCDeletionChangeCKStatusToDeclinedEnabled;

@end
