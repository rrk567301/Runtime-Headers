@class NSArray, NSMutableDictionary;

@interface UAFConfigurationManager : NSObject

@property (retain, nonatomic) NSArray *baseURLs;
@property (retain, nonatomic) NSMutableDictionary *assetSetCache;

+ (id)defaultManager;
+ (id)getAssetNameFromPath:(id)a0;
+ (id)getConfigurationDirURL:(id)a0;
+ (id)getDeprecatedUsageAliasNameFromPath:(id)a0;

- (void)invalidateCache;
- (void).cxx_destruct;
- (id)initWithURLs:(id)a0;
- (id)getAllAssetSets;
- (id)_getUsageAlias:(id)a0 usageAliasValue:(id)a1;
- (BOOL)_directoryContainsPlist:(id)a0;
- (id)_getDeprecatedDirectoriesForUsageAlias:(id)a0 baseURL:(id)a1;
- (id)_getDeprecatedFilesForUsageAlias:(id)a0 baseURL:(id)a1;
- (id)_getDeprecatedUsageAlias:(id)a0 usageAliasValue:(id)a1;
- (id)_getURLForDeprecatedUsageAlias:(id)a0 usageAliasValue:(id)a1;
- (id)_getURLForUsageAlias:(id)a0 usageAliasName:(id)a1 usageAliasValue:(id)a2;
- (id)applySubscriptions:(id)a0;
- (void)assetSetCacheMiss:(id)a0;
- (id)getAllAssetSetsWithDeprecated:(BOOL)a0;
- (id)getAllDeprecatedAssetSets;
- (id)getAssetSet:(id)a0;
- (id)getAssetSetNoCache:(id)a0 deprecated:(BOOL)a1;
- (id)getAssetSetUsagesForUsageAlias:(id)a0 usageAliasValue:(id)a1;
- (id)getMinVersion:(id)a0 provider:(id)a1;
- (id)getPrestageSubscriptions;
- (id)getUsageAlias:(id)a0 usageAliasValue:(id)a1;
- (BOOL)isUsageLimitExceeded:(id)a0;
- (id)minVersions:(id)a0;

@end
