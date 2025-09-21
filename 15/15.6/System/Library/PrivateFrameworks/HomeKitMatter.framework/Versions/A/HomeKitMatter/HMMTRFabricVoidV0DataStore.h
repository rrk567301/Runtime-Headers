@class NSNumber, NSDictionary;

@interface HMMTRFabricVoidV0DataStore : HMFObject <HMMTRMultiFabricDataStoreQueryCHIPStorageDelegate, HMMTRMultiFabricDataStoreUpdateCHIPStorageDelegate>

@property (readonly, copy, nonatomic) NSNumber *fabricID;
@property (readonly, copy, nonatomic) NSDictionary *keyValueStore;

+ (id)logCategory;

- (id)identifier;
- (char)updateKeyValueStoreWithEntries:(id)a0;

@end
