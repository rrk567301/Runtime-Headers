@class NSData, NSString, NSNumber, NSArray, NSSet, NSObject, NSMutableArray, HMDAccessory, MTRDevice;
@protocol OS_dispatch_queue;

@interface HMDMatterAccessoryAdapter : HMFObject <HMFLogging, HMDMatterAccessoryProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_hmdMatterPaths;
    NSArray *_mtrPaths;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDAccessory *accessory;
@property (copy, nonatomic) NSNumber *matterFabricID;
@property (copy, nonatomic) NSNumber *matterNodeID;
@property (copy, nonatomic) NSNumber *matterVendorID;
@property (copy, nonatomic) NSNumber *matterProductID;
@property (copy, nonatomic) NSNumber *matterWEDSupport;
@property (copy, nonatomic) NSString *matterExtendedMACAddress;
@property (copy, nonatomic) NSData *matterPairingsData;
@property (nonatomic) BOOL fetchInProgress;
@property (retain, nonatomic) MTRDevice *testMatterDevice;
@property (nonatomic) double retryFetchTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *matterPairings;
@property (readonly, nonatomic) NSArray *mtrPaths;
@property (readonly, nonatomic) NSArray *mtrAttributePaths;
@property (readonly, nonatomic) NSArray *mtrCommandPaths;
@property (readonly, nonatomic) NSArray *mtrEventPaths;
@property (readonly, nonatomic) NSArray *matterPaths;
@property (readonly, nonatomic) NSArray *attributePaths;
@property (readonly, nonatomic) NSArray *commandPaths;
@property (readonly, nonatomic) NSArray *eventPaths;

+ (id)logCategory;
+ (id)MatterAccessoryAdapterWithAccessory:(id)a0 accessoryModel:(id)a1;

- (void).cxx_destruct;
- (id)shortDescription;
- (id)logIdentifier;
- (id)workContext;
- (id)initWithAccessory:(id)a0;
- (id)accessoryServer;
- (id)fetchConfiguration;
- (id)matterAccessory;
- (id)addMatterPaths:(id)a0;
- (id)_addMatterPaths:(id)a0;
- (id)_fetchAttributePathsForCluster:(id)a0 endpoint:(id)a1;
- (id)_fetchCommandPathsForCluster:(id)a0 endpoint:(id)a1;
- (id)_fetchEventPathsForCluster:(id)a0 endpoint:(id)a1;
- (id)_fetchMatterPaths;
- (id)_fetchMatterPathsForCluster:(id)a0 endpoint:(id)a1;
- (id)_fetchMatterPathsForEndpoint:(id)a0;
- (id)_processAccessoryConfigurationWithPaths:(id)a0;
- (id)_readFromAttributePath:(id)a0 retryTimeout:(double)a1;
- (id)_removeMatterPaths:(id)a0;
- (id)_runAccessoryTransactions:(id)a0;
- (void)_updateWithAccessoryModel:(id)a0;
- (void)addMatterPathModel:(id)a0 message:(id)a1;
- (id)backingStoreTransactionWithName:(id)a0;
- (id)hapAccessory;
- (id)matterPathWithUUID:(id)a0;
- (id)mtrDevice;
- (void)populateAccessoryModel:(id)a0;
- (id)readFromAttributePath:(id)a0 retryTimeout:(double)a1;
- (void)readFromAttributePath:(id)a0 retryTimeout:(double)a1 completion:(id /* block */)a2;
- (id)readFromAttributePaths:(id)a0 retryTimeout:(double)a1;
- (void)removeMatterPathModel:(id)a0 message:(id)a1;
- (id)removeMatterPaths:(id)a0;
- (BOOL)supportsMTRPath:(id)a0;
- (void)testSetMTRPaths:(id)a0;
- (void)testSetMatterDevice:(id)a0 retryTimeout:(double)a1;
- (void)testSetMatterPaths:(id)a0;

@end
