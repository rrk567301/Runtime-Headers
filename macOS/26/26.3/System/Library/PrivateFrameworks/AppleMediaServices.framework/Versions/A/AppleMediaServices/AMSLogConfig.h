@class NSString, NSObject;
@protocol OS_os_log;

@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (copy) NSString *category;
@property (copy) NSString *subsystem;
@property (retain) NSObject<OS_os_log> *OSLogObject;
@property (readonly) BOOL debugLogsEnabled;

+ (id)sharedBiometricsConfig;
+ (id)sharedMetricsConfig;
+ (id)sharedDataMigrationConfig;
+ (id)sharedWebUIConfig;
+ (id)sharedConfig;
+ (id)sharedUserNotificationConfig;
+ (id)sharedPurchaseConfig;
+ (id)sharedPurchaseOversizeConfig;
+ (id)sharedAccountsSyncPluginConfig;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedAccountsNotificationPluginConfig;
+ (id)sharedURLLoadingConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedAccountsAuthenticationPluginConfig;
+ (id)sharedTSDataSyncConfig;
+ (id)sharedAnisetteConfig;
+ (id)sharedEngagementConfig;
+ (id)sharedMediaServiceOwnerConfig;
+ (id)sharedAccountsOversizeConfig;
+ (id)sharedKeychainConfig;
+ (id)sharedRatingsProviderConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedFollowUpConfig;
+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)sharedAccountsMultiUserConfig;
+ (id)sharedMarketingItemConfig;
+ (id)sharedActionConfig;
+ (id)sharedPromiseConfig;
+ (id)sharedConfigOversize;
+ (id)sharedRegulatoryEligibilityConfig;
+ (id)sharedBagConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedMessagingUIConfig;
+ (id)sharedDeviceOffersConfig;
+ (id)sharedHARLoggingConfig;
+ (id)sharedAttestationConfig;
+ (id)sharedTreatmentsConfig;
+ (id)sharedWebUIPageConfig;
+ (id)sharedServerDataCacheConfig;
+ (id)sharedMediaConfig;
+ (id)sharedFraudReportConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedAccountsDaemonConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedAccountsStorefrontConfig;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCategory:(id)a0 backingLog:(id)a1;

@end
