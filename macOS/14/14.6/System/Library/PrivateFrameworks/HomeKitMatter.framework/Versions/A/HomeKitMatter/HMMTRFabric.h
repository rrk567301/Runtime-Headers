@class NSObject, HMMTRControllerData, HMMTRStorage, HMMTRFabricData, NSNumber, HMMTRAccessControl;
@protocol OS_dispatch_queue, HMMTRFabricDelegate;

@interface HMMTRFabric : HMFObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL cachedDataValid;
@property (copy) NSNumber *fabricID;
@property (readonly, getter=isSystemCommissionerFabric) BOOL systemCommissionerFabric;
@property (retain, nonatomic) HMMTRAccessControl *accessControl;
@property (readonly, weak, nonatomic) id<HMMTRFabricDelegate> delegate;
@property (weak, nonatomic) HMMTRStorage *storage;
@property (readonly, nonatomic) HMMTRFabricData *fabricData;
@property (readonly, nonatomic) HMMTRControllerData *currentDeviceNodeData;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)invalidateCachedData;
- (void)loadFabricAndControllerDataWithCompletion:(id /* block */)a0;
- (void)_loadFromStorageWithCompletion:(id /* block */)a0;
- (BOOL)_createNewFabricData;
- (id)_getDataToPersist;
- (void)_loadFromDiskWithCompletion:(id /* block */)a0;
- (void)_loadFromRemoteWithCompletion:(id /* block */)a0;
- (void)_loadFromResidentWithCompletion:(id /* block */)a0;
- (void)createNewFabricIdentityWithCompletion:(id /* block */)a0;
- (BOOL)isCachedDataValid;

@end
