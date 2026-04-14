@interface WBSFeatureAvailability : NSObject

@property (class, readonly, nonatomic) BOOL isInternalInstall;
@property (class, readonly, nonatomic) BOOL isCustomizationSyncEnabled;

+ (BOOL)_shouldShowChineseFeatures;
+ (BOOL)_shouldShowRussianFeatures;
+ (BOOL)isSearchProviderEnabled:(unsigned long long)a0;
+ (BOOL)supportsURLCredentialStorageAccessControlGroups;
+ (BOOL)wantsAggressiveKeychainCredentialCaching;

@end
