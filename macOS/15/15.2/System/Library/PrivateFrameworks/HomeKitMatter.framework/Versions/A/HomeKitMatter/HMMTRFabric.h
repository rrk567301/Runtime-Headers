@class HMMTRAccessControl, NSUUID, HMMTRControllerData, HMMTRStorage, HMMTRFabricData, NSNumber, NSObject;
@protocol OS_dispatch_queue, HMMTRFabricDelegate;

@interface HMMTRFabric : HMFObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL cachedDataValid;
@property (copy) NSNumber *fabricID;
@property (readonly) NSUUID *targetFabricUUID;
@property (readonly, getter=isSystemCommissionerFabric) BOOL systemCommissionerFabric;
@property (retain, nonatomic) HMMTRAccessControl *accessControl;
@property (readonly, weak, nonatomic) id<HMMTRFabricDelegate> delegate;
@property (weak, nonatomic) HMMTRStorage *storage;
@property (readonly, nonatomic) HMMTRFabricData *fabricData;
@property (readonly, nonatomic) HMMTRControllerData *currentDeviceNodeData;
@property (retain, nonatomic) NSUUID *controllerEntityIdentifier;

+ (id)logCategory;

- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)createNewFabricIdentityWithCompletion:(id /* block */)a0;
- (void)invalidateCachedData;
- (void)loadFabricAndControllerDataForPairing:(BOOL)a0 fetchFromResident:(BOOL)a1 completion:(id /* block */)a2;
- (void)_loadFromStorageWithCompletion:(id /* block */)a0;
- (void)_clearNewFabricData;
- (BOOL)_createNewFabricData;
- (id)_getDataToPersist;
- (void)_loadForPairingWithFetchFromResident:(BOOL)a0 completion:(id /* block */)a1;
- (void)_loadFromDiskWithCompletion:(id /* block */)a0;
- (void)_loadFromRemoteWithCompletion:(id /* block */)a0;
- (void)_loadFromResidentWithCompletion:(id /* block */)a0;
- (BOOL)isCachedDataValid;

@end
