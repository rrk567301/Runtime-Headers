@class NSString, NSObject;
@protocol OS_os_log;

@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (copy) NSString *category;
@property (copy) NSString *subsystem;
@property (retain) NSObject<OS_os_log> *OSLogObject;
@property (readonly) BOOL debugLogsEnabled;

+ (id)sharedAccountsNotificationPluginConfig;
+ (id)sharedConfig;
+ (id)sharedPurchaseConfig;
+ (id)sharedWebUIPageConfig;
+ (id)sharedRatingsProviderConfig;
+ (id)sharedMarketingItemConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedMetricsConfig;
+ (id)sharedFraudReportConfig;
+ (id)sharedTSDataSyncConfig;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedHARLoggingConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedRegulatoryEligibilityConfig;
+ (id)sharedBiometricsConfig;
+ (id)sharedAccountsAuthenticationPluginConfig;
+ (id)sharedMessagingUIConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedAnisetteConfig;
+ (id)sharedPurchaseOversizeConfig;
+ (id)sharedEngagementConfig;
+ (id)sharedDataMigrationConfig;
+ (id)sharedActionConfig;
+ (id)sharedAccountsDaemonConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedWebUIConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedAccountsOversizeConfig;
+ (id)sharedConfigOversize;
+ (id)sharedKeychainConfig;
+ (id)sharedUserNotificationConfig;
+ (id)sharedDeviceOffersConfig;
+ (id)sharedTreatmentsConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedAccountsMultiUserConfig;
+ (id)sharedMediaServiceOwnerConfig;
+ (id)sharedAccountsSyncPluginConfig;
+ (id)sharedAttestationConfig;
+ (id)sharedBagConfig;
+ (id)sharedPromiseConfig;
+ (id)sharedBagCacheConfig;
+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)sharedURLLoadingConfig;
+ (id)sharedMediaConfig;
+ (id)sharedServerDataCacheConfig;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCategory:(id)a0 backingLog:(id)a1;

@end
