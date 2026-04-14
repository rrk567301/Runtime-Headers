@class NSError, NSString, MAAutoAssetSelector, NSArray, MADAutoAssetJobInformation, MADAutoAssetDescriptor, NSDictionary, MADAutoAssetClientRequest, MADAutoSetConfiguration;

@interface MADAutoAssetStagerParam : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *paramSafeSummary;
@property (readonly, nonatomic) long long paramType;
@property (retain, nonatomic) MADAutoAssetClientRequest *stagingClientRequest;
@property (retain, nonatomic) NSArray *baseForStagingDescriptors;
@property (readonly, retain, nonatomic) MADAutoAssetJobInformation *jobInformation;
@property (readonly, retain, nonatomic) NSDictionary *autoAssetCatalog;
@property (readonly, retain, nonatomic) NSError *operationError;
@property (readonly, retain, nonatomic) NSString *assetType;
@property (readonly, retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (readonly, retain, nonatomic) MADAutoSetConfiguration *setIdentifierConfiguration;
@property (readonly, retain, nonatomic) NSArray *alreadyDownloaded;
@property (readonly, retain, nonatomic) NSArray *setConfigurations;
@property (readonly, retain, nonatomic) NSArray *setTargets;
@property (readonly, retain, nonatomic) NSArray *scheduledJobs;
@property (readonly, retain, nonatomic) MADAutoAssetDescriptor *downloadedDescriptor;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)_summary;
- (id)initWithAssetType:(id)a0;
- (id)initWithAlreadyDownloadedDescriptors:(id)a0 withSetConfigurations:(id)a1 withSetTargets:(id)a2 withScheduldJobs:(id)a3;
- (id)initWithAssetSelector:(id)a0;
- (id)initWithAutoAssetCatalog:(id)a0 withBaseForStagingDescriptors:(id)a1 withOperationError:(id)a2;
- (id)initWithJobInformation:(id)a0 withDownloadedDescriptor:(id)a1 withOperationError:(id)a2;
- (id)initWithParamType:(long long)a0 withSafeSummary:(id)a1 withStagingClientRequest:(id)a2 withBaseForStagingDescriptors:(id)a3 withJobInformation:(id)a4 withAutoAssetCatalog:(id)a5 withOperationError:(id)a6 withAssetType:(id)a7 withAssetSelector:(id)a8 withSetIdentifierConfiguration:(id)a9 withAlreadyDownloaded:(id)a10 withSetConfigurations:(id)a11 withSetTargets:(id)a12 withScheduldJobs:(id)a13 withDownloadedDescriptor:(id)a14;
- (id)initWithSafeSummary:(id)a0;
- (id)initWithSetConfiguration:(id)a0;
- (id)initWithStagingClientRequest:(id)a0;
- (void)updateSafeSummary;

@end
