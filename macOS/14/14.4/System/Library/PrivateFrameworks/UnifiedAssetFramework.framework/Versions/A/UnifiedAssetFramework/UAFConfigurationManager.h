@class NSArray;

@interface UAFConfigurationManager : NSObject

@property (retain, nonatomic) NSArray *baseURLs;

+ (id)defaultManager;

- (void).cxx_destruct;
- (id)initWithURLs:(id)a0;
- (id)getAllAssetSets;
- (id)applySubscriptions:(id)a0;
- (id)getAssetSet:(id)a0;
- (id)getMinVersion:(id)a0 provider:(id)a1;
- (id)getPrestage:(id)a0;
- (id)getUsageAlias:(id)a0;
- (BOOL)isUsageLimitExceeded:(id)a0;
- (id)minVersions:(id)a0;
- (BOOL)shouldApplyFeatureFlags;

@end
