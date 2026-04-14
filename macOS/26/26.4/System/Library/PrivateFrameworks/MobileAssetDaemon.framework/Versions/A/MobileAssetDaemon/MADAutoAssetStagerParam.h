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
@property (readonly, retain, nonatomic) NSArray *entriesWhenTargeting;
@property (readonly, retain, nonatomic) NSString *timerUUID;
@property (readonly, retain, nonatomic) NSArray *setTargets;
@property (readonly, retain, nonatomic) NSArray *scheduledJobs;
@property (readonly, retain, nonatomic) MADAutoAssetDescriptor *downloadedDescriptor;

- (id)_summary;
- (id)initWithSafeSummary:(id)a0;
- (id)initWithJobInformation:(id)a0 withDownloadedDescriptor:(id)a1 withOperationError:(id)a2;
- (id)initWithSetConfiguration:(id)a0;
- (id)initWithAutoAssetCatalog:(id)a0 withBaseForStagingDescriptors:(id)a1 withOperationError:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTimerUUID:(id)a0;
- (void).cxx_destruct;
- (id)initWithAlreadyDownloadedDescriptors:(id)a0 withSetConfigurations:(id)a1 withSetTargets:(id)a2 withScheduledJobs:(id)a3;
- (id)initWithStagingClientRequest:(id)a0;
- (id)initWithParamType:(long long)a0 withSafeSummary:(id)a1 withStagingClientRequest:(id)a2 withBaseForStagingDescriptors:(id)a3 withJobInformation:(id)a4 withAutoAssetCatalog:(id)a5 withOperationError:(id)a6 withAssetType:(id)a7 withAssetSelector:(id)a8 withSetIdentifierConfiguration:(id)a9 withEntriesWhenTargeting:(id)a10 withTimerUUID:(id)a11 withAlreadyDownloaded:(id)a12 withSetConfigurations:(id)a13 withSetTargets:(id)a14 withScheduledJobs:(id)a15 withDownloadedDescriptor:(id)a16;
- (id)summary;
- (id)initWithStagingClientRequest:(id)a0 withAlreadyDownloadedDescriptors:(id)a1;
- (id)initWithAssetType:(id)a0;
- (id)description;
- (void)updateSafeSummary;
- (id)initWithCoder:(id)a0;
- (id)initWithSetTargets:(id)a0;
- (id)initWithAssetSelector:(id)a0;

@end
