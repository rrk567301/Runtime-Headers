@class NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (retain) NSObject<OS_os_log> *backingOSLogObject;
@property (retain) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (copy) NSString *category;
@property (copy) NSString *subsystem;
@property (readonly) BOOL debugLogsEnabled;
@property (readonly) NSObject<OS_os_log> *OSLogObject;

+ (id)sharedConfig;
+ (id)_createLogConfigWithSubsystem:(id)a0 category:(id)a1;
+ (id)_createLogConfigWithBaseConfig:(id)a0 subystem:(id)a1 category:(id)a2;
+ (id)sharedDataMigrationConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedAccountsAuthenticationPluginConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedAnisetteConfig;
+ (id)sharedAttestationConfig;
+ (id)sharedAccountsOversizeConfig;
+ (id)sharedBagConfig;
+ (id)sharedConfigOversize;
+ (id)sharedPurchaseConfig;
+ (id)sharedAccountsDaemonConfig;
+ (id)sharedDeviceOffersConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedKeychainConfig;
+ (id)sharedMediaConfig;
+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedAccountsMultiUserConfig;
+ (id)sharedAccountsNotificationPluginConfig;
+ (id)sharedAccountsSyncPluginConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedMarketingItemConfig;
+ (id)sharedPromiseConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedRatingsProviderConfig;
+ (id)sharedUserNotificationConfig;
+ (id)sharedMediaServiceOwnerConfig;
+ (id)sharedServerDataCacheConfig;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
