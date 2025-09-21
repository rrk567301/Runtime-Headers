@class HMMTRAccessControl, NSUUID, HMMTRControllerData, NSNumber, NSObject;
@protocol OS_dispatch_queue, HMMTRFabricDelegate;

@interface HMMTRFabric : HMFObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL cachedDataValid;
@property (copy) NSNumber *fabricID;
@property (readonly) NSUUID *targetFabricUUID;
@property (readonly, getter=isSystemCommissionerFabric) BOOL systemCommissionerFabric;
@property (retain, nonatomic) HMMTRAccessControl *accessControl;
@property (readonly, weak, nonatomic) id<HMMTRFabricDelegate> delegate;
@property (readonly, nonatomic) HMMTRControllerData *currentDeviceNodeData;
@property (retain, nonatomic) NSUUID *controllerEntityIdentifier;

+ (id)logCategory;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)invalidateCachedData;
- (id)targetFabricUUID;
- (BOOL)isCachedDataValid;

@end
