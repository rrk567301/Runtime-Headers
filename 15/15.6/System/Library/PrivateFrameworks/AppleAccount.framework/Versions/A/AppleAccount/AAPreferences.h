@interface AAPreferences : NSObject

+ (char)isSignInSecurityRedesignEnabled;
+ (char)isYorktownEnabled;
+ (id)getTrustedContactsPreflightInfo;
+ (void)setMultipleFullAccountsEnabled:(BOOL)a0;
+ (char)shouldSkipIdMSFinalizeCustodian;
+ (long long)customHealthCheckIntervalMinutes;
+ (long long)customHealthCheckReachabilityIntervalMinutes;
+ (long long)customHealthCheckVersion;
+ (long long)customMaintenanceIntervalMinutes;
+ (char)disableADPStateHealing;
+ (id)getCustodianInfo;
+ (char)isCustomHealthCheckIntervalEnabled;
+ (char)isCustomMaintenanceIntervalEnabled;
+ (char)isExperimentalModeEnabled;
+ (char)isHealthCheckTTREnabled;
+ (char)isLCInviteAcceptanceEnabled;
+ (char)isMomentsDataclassEnabled;
+ (char)isMultipleFullAccountsEnabled;
+ (char)isNeverSkipCustodianCheckEnabled;
+ (char)isRunningInStoreDemoMode;
+ (char)isSignInSecurityRedesignMacOSEnabled;
+ (char)isSimulateUnhealthyCustodianEnabled;
+ (char)isSpyglass2023Enabled;
+ (void)setCustodianInfo:(id)a0;
+ (void)setCustomHealthCheckIntervalEnabled:(char)a0;
+ (void)setCustomHealthCheckIntervalMinutes:(long long)a0;
+ (void)setCustomHealthCheckVersion:(long long)a0;
+ (void)setCustomHealthFailureReachabilityIntervalMinutes:(long long)a0;
+ (void)setCustomMaintenanceIntervalEnabled:(char)a0;
+ (void)setCustomMaintenanceIntervalMinutes:(long long)a0;
+ (void)setDisableADPStateHealing:(char)a0;
+ (void)setExperimentalModeEnabled:(char)a0;
+ (void)setHealthCheckTTREnabled:(char)a0;
+ (void)setLCInviteAcceptanceEnabled:(char)a0;
+ (void)setNeverSkipCustodianCheckEnabled:(char)a0;
+ (void)setShouldShowAccountContacts:(BOOL)a0;
+ (void)setShouldUseUnifiedLoginEndpoint:(BOOL)a0;
+ (void)setSimulateUnhealthyCustodianEnabled:(char)a0;
+ (void)setTrustedContactsPreflightInfo:(id)a0;
+ (char)shouldEnableAccountUserNotifications;
+ (char)shouldEnableFastSignIn;
+ (char)shouldShowAccountContacts;
+ (char)shouldSkipIdMSKeyUpdate;
+ (char)shouldSkipRecoveryInfoRecordStorage;
+ (char)shouldUseUnifiedLoginEndpoint;
+ (char)simulate2FAFA;

- (char)isLCDeletionChangeCKStatusToDeclinedEnabled;

@end
