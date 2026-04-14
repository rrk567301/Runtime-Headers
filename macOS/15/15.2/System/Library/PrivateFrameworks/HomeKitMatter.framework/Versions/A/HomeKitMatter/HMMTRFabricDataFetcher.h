@protocol HMMTRFabricDataFetcherCHIPStorageDelegate, HMMTRFabricDataFetcherKeychainDelegate;

@interface HMMTRFabricDataFetcher : HMFObject

@property (weak, nonatomic) id<HMMTRFabricDataFetcherCHIPStorageDelegate> chipStorageDelegate;
@property (weak, nonatomic) id<HMMTRFabricDataFetcherKeychainDelegate> keychainDelegate;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)initWithCHIPStorageDelegate:(id)a0 keychainDelegate:(id)a1;
- (id)locallyStoredFabricDataWithError:(id *)a0;

@end
