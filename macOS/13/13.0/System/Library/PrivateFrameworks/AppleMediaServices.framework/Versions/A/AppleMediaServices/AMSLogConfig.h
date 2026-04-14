@class NSString, NSObject;
@protocol OS_os_log;

@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (copy) NSString *category;
@property (copy) NSString *subsystem;
@property (retain) NSObject<OS_os_log> *OSLogObject;
@property (readonly) BOOL debugLogsEnabled;

+ (id)sharedConfig;
+ (id)sharedConfigOversize;
+ (id)sharedAccountsAuthenticationPluginConfig;
+ (id)sharedAccountsDaemonConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedDataMigrationConfig;
+ (id)sharedDeviceOffersConfig;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedAccountsMultiUserConfig;
+ (id)sharedAccountsNotificationPluginConfig;
+ (id)sharedAccountsOversizeConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedAccountsSyncPluginConfig;
+ (id)sharedAnisetteConfig;
+ (id)sharedAttestationConfig;
+ (id)sharedBagConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedEngagementConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedKeychainConfig;
+ (id)sharedMarketingItemConfig;
+ (id)sharedMediaConfig;
+ (id)sharedMediaServiceOwnerConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedPromiseConfig;
+ (id)sharedPurchaseConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedRatingsProviderConfig;
+ (id)sharedServerDataCacheConfig;
+ (id)sharedUserNotificationConfig;
+ (id)sharedWebUIConfig;
+ (BOOL)_debugLogsEnabled:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCategory:(id)a0 backingLog:(id)a1;

@end
