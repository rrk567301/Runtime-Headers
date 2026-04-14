@interface AAPreferences : NSObject

+ (BOOL)isExperimentalModeEnabled;
+ (BOOL)isBackupForDataSeparationEnabled;
+ (BOOL)isRunningInStoreDemoMode;
+ (BOOL)isMultipleFullAccountsEnabled;
+ (void)setMultipleFullAccountsEnabled:(BOOL)a0;
+ (BOOL)shouldUseUnifiedLoginEndpoint;
+ (void)setShouldUseUnifiedLoginEndpoint:(BOOL)a0;
+ (BOOL)shouldShowAccountContacts;
+ (void)setShouldShowAccountContacts:(BOOL)a0;
+ (void)setExperimentalModeEnabled:(BOOL)a0;
+ (BOOL)isCustomHealthCheckIntervalEnabled;
+ (void)setCustomHealthCheckIntervalEnabled:(BOOL)a0;
+ (long long)customHealthCheckIntervalMinutes;
+ (void)setCustomHealthCheckIntervalMinutes:(long long)a0;

@end
