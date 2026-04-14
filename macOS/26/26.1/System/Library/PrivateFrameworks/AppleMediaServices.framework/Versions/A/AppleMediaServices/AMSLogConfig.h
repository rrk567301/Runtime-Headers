@class NSString, NSObject;
@protocol OS_os_log;

@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (copy) NSString *category;
@property (copy) NSString *subsystem;
@property (retain) NSObject<OS_os_log> *OSLogObject;
@property (readonly) BOOL debugLogsEnabled;

+ (id)sharedAccountsMigrationConfig;
+ (id)sharedServerDataCacheConfig;
+ (id)sharedAnisetteConfig;
+ (id)sharedAccountsOversizeConfig;
+ (id)sharedConfig;
+ (id)sharedTSDataSyncConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedPurchaseOversizeConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedPromiseConfig;
+ (id)sharedRegulatoryEligibilityConfig;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedAccountsAuthenticationPluginConfig;
+ (id)sharedEngagementConfig;
+ (id)sharedAttestationConfig;
+ (id)sharedAccountsNotificationPluginConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedMediaServiceOwnerConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedAccountsSyncPluginConfig;
+ (id)sharedUserNotificationConfig;
+ (id)sharedWebUIConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedBiometricsConfig;
+ (id)sharedRatingsProviderConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedPurchaseConfig;
+ (id)sharedActionConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedDeviceOffersConfig;
+ (id)sharedKeychainConfig;
+ (id)sharedWebUIPageConfig;
+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)sharedMessagingUIConfig;
+ (id)sharedAccountsDaemonConfig;
+ (id)sharedFraudReportConfig;
+ (id)sharedBagConfig;
+ (id)sharedMarketingItemConfig;
+ (id)sharedDataMigrationConfig;
+ (id)sharedMetricsConfig;
+ (id)sharedConfigOversize;
+ (id)sharedURLLoadingConfig;
+ (id)sharedHARLoggingConfig;
+ (id)sharedAccountsMultiUserConfig;
+ (id)sharedTreatmentsConfig;
+ (id)sharedMediaConfig;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCategory:(id)a0 backingLog:(id)a1;

@end
