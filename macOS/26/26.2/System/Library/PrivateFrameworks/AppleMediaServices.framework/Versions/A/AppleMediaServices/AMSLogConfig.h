@class NSString, NSObject;
@protocol OS_os_log;

@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (copy) NSString *category;
@property (copy) NSString *subsystem;
@property (retain) NSObject<OS_os_log> *OSLogObject;
@property (readonly) BOOL debugLogsEnabled;

+ (id)sharedPurchaseOversizeConfig;
+ (id)sharedAccountsNotificationPluginConfig;
+ (id)sharedAccountsMultiUserConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedConfigOversize;
+ (id)sharedTreatmentsConfig;
+ (id)sharedWebUIPageConfig;
+ (id)sharedRegulatoryEligibilityConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedServerDataCacheConfig;
+ (id)sharedAttestationConfig;
+ (id)sharedDataMigrationConfig;
+ (id)sharedBagConfig;
+ (id)sharedPromiseConfig;
+ (id)sharedHARLoggingConfig;
+ (id)sharedMetricsConfig;
+ (id)sharedAccountsOversizeConfig;
+ (id)sharedFraudReportConfig;
+ (id)sharedKeychainConfig;
+ (id)sharedEngagementConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedRatingsProviderConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedMediaConfig;
+ (id)sharedBiometricsConfig;
+ (id)sharedMessagingUIConfig;
+ (id)sharedAccountsSyncPluginConfig;
+ (id)sharedActionConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedDeviceOffersConfig;
+ (id)sharedAccountsAuthenticationPluginConfig;
+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)sharedAnisetteConfig;
+ (id)sharedUserNotificationConfig;
+ (id)sharedMarketingItemConfig;
+ (id)sharedMediaServiceOwnerConfig;
+ (id)sharedConfig;
+ (id)sharedWebUIConfig;
+ (id)sharedURLLoadingConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedTSDataSyncConfig;
+ (id)sharedPurchaseConfig;
+ (id)sharedAccountsDaemonConfig;
+ (id)sharedAccountsMigrationConfig;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCategory:(id)a0 backingLog:(id)a1;

@end
