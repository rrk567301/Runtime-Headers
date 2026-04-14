@class NSString, NSArray, NSDictionary;

@interface UAFAssetSetConfiguration : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *usageTypes;
@property (retain, nonatomic) NSDictionary *usageValues;
@property (retain, nonatomic) NSString *trialProject;
@property (retain, nonatomic) NSString *autoAssetType;
@property (retain, nonatomic) NSArray *usageLimits;
@property (nonatomic) BOOL disableAssetRemoval;
@property (retain, nonatomic) NSArray *assets;
@property (nonatomic) BOOL isTrialAvailable;

+ (BOOL)isValid:(id)a0 error:(id *)a1;
+ (id)fromContentsOfURL:(id)a0 applyFeatureFlags:(BOOL)a1 error:(id *)a2;
+ (id)fromContentsOfURL:(id)a0 error:(id *)a1;
+ (id)supportedFileVersions;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)getTrialAssets:(id)a0;
- (int)_usageCountForUsageType:(id)a0 usingUsages:(id)a1;
- (void)applyFeatureFlags;
- (id)getAssets:(id)a0;
- (id)getAutoAssets:(id)a0;
- (id)getFilteredUsages:(id)a0;
- (BOOL)isUsageLimitExceeded:(id)a0;

@end
