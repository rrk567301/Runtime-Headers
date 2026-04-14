@class NSString, NSObject;
@protocol OS_os_log;

@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (copy) NSString *category;
@property (copy) NSString *subsystem;
@property (retain) NSObject<OS_os_log> *OSLogObject;
@property (readonly) BOOL debugLogsEnabled;

+ (id)sharedURLLoadingConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)sharedTSDataSyncConfig;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedKeychainConfig;
+ (id)sharedBiometricsConfig;
+ (id)sharedWebUIPageConfig;
+ (id)sharedUserNotificationConfig;
+ (id)sharedAccountsOversizeConfig;
+ (id)sharedMarketingItemConfig;
+ (id)sharedPromiseConfig;
+ (id)sharedActionConfig;
+ (id)sharedMediaConfig;
+ (id)sharedAccountsAuthenticationPluginConfig;
+ (id)sharedConfig;
+ (id)sharedWebUIConfig;
+ (id)sharedConfigOversize;
+ (id)sharedMediaServiceOwnerConfig;
+ (id)sharedRegulatoryEligibilityConfig;
+ (id)sharedAccountsSyncPluginConfig;
+ (id)sharedMetricsConfig;
+ (id)sharedPurchaseConfig;
+ (id)sharedEngagementConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedAccountsDaemonConfig;
+ (id)sharedAccountsNotificationPluginConfig;
+ (id)sharedFraudReportConfig;
+ (id)sharedAttestationConfig;
+ (id)sharedRatingsProviderConfig;
+ (id)sharedTreatmentsConfig;
+ (id)sharedDataMigrationConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedBagConfig;
+ (id)sharedHARLoggingConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedMessagingUIConfig;
+ (id)sharedServerDataCacheConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedAnisetteConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedAccountsMultiUserConfig;
+ (id)sharedDeviceOffersConfig;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCategory:(id)a0 backingLog:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
