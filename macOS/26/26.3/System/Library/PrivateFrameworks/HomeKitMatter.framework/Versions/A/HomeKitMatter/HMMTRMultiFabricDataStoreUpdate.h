@class HMMTRFabricData;
@protocol HMMTRMultiFabricDataStoreUpdateCHIPStorageDelegate, HMMTRMultiFabricDataStoreUpdateKeychainDelegate, HMMTRMultiFabricDataStoreUpdateV2FabricDataStoreDelegate;

@interface HMMTRMultiFabricDataStoreUpdate : HMFObject

@property (readonly, nonatomic) HMMTRFabricData *fabricData;
@property (readonly, weak, nonatomic) id<HMMTRMultiFabricDataStoreUpdateCHIPStorageDelegate> chipStorageDelegate;
@property (readonly, weak, nonatomic) id<HMMTRMultiFabricDataStoreUpdateKeychainDelegate> keychainDelegate;
@property (readonly, weak, nonatomic) id<HMMTRMultiFabricDataStoreUpdateV2FabricDataStoreDelegate> v2FabricDataStoreDelegate;

+ (id)logCategory;

- (BOOL)commit;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithFabricData:(id)a0 chipStorageDelegate:(id)a1 keychainDelegate:(id)a2 v2FabricDataStoreDelegate:(id)a3;
- (id)chipStorageContentFromFabricData:(id)a0;

@end
