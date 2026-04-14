@class NSUUID, NSString, NSRecursiveLock, NSSet, NSMutableDictionary, NSDictionary, NSNumber, HMDHome;

@interface HMDCHIPHomeDataSource : HMFObject <HMMTRFabricStorageDataSource, HMMTRMultiFabricDataStoreQueryCHIPStorageDelegate, HMMTRMultiFabricDataStoreUpdateCHIPStorageDelegate>

@property (retain, nonatomic) NSMutableDictionary *pendingKeyValueStore;
@property (nonatomic) unsigned long long pendingKeyValueStoreTransactionsCount;
@property (readonly, nonatomic) NSRecursiveLock *lock;
@property (weak) HMDHome *home;
@property (readonly, copy, nonatomic) NSNumber *fabricID;
@property (readonly, copy, nonatomic) NSUUID *fabricUUID;
@property (readonly, copy, nonatomic) NSDictionary *keyValueStore;
@property (readonly, copy, nonatomic) NSSet *allNodeIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)identifier;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)updateKeyValueStore:(id)a0 completion:(id /* block */)a1;
- (BOOL)updateKeyValueStoreWithEntries:(id)a0;
- (void)_updateHomeModelWithLabel:(id)a0 completion:(id /* block */)a1 block:(id /* block */)a2;
- (id)allStorageDataSourcesForDeviceWithNodeID:(id)a0;
- (id)initWithFabricID:(id)a0 home:(id)a1;
- (id)primaryAccessoryCategoryForNodeID:(id)a0;
- (id)storageDataSourceForDeviceWithNodeID:(id)a0;
- (void)updateKeyValueStoreWithBlock:(id /* block */)a0 completion:(id /* block */)a1;

@end
