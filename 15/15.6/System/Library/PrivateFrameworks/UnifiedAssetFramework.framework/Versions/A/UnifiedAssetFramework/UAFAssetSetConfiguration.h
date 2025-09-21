@class NSString, NSArray, NSDictionary, UAFExperimentalAssetsConfiguration, NSURL;

@interface UAFAssetSetConfiguration : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *usageTypes;
@property (retain, nonatomic) NSDictionary *usageValues;
@property (retain, nonatomic) NSString *trialProject;
@property (retain, nonatomic) NSString *autoAssetType;
@property (retain, nonatomic) NSString *metadataAsset;
@property (retain, nonatomic) NSArray *usageLimits;
@property (nonatomic) char disableAssetRemoval;
@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) UAFExperimentalAssetsConfiguration *experimentalAssets;
@property (nonatomic) char isTrialAvailable;
@property (retain, nonatomic) NSURL *originatingURL;
@property (nonatomic) char enableExpensiveCellular;
@property (nonatomic) char subjectToAppleIntelligenceWaitlist;

+ (char)isValid:(id)a0 error:(id *)a1;
+ (id)fromContentsOfURL:(id)a0 applyFeatureFlags:(char)a1 error:(id *)a2;
+ (id)fromContentsOfURL:(id)a0 error:(id *)a1;
+ (char)isValid:(id)a0 fileURL:(id)a1 error:(id *)a2;
+ (id)supportedFileVersions;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)getTrialAssets:(id)a0;
- (int)_usageCountForUsageType:(id)a0 usingUsages:(id)a1;
- (void)applyFeatureFlags;
- (id)getAssets:(id)a0;
- (id)getAutoAssets:(id)a0;
- (id)getFilteredUsages:(id)a0;
- (char)isUsageLimitExceeded:(id)a0;

@end
