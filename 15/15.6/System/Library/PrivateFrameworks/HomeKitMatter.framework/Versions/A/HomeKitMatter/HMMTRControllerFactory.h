@class MTRDeviceControllerFactoryParams, HMMTRControllerFactoryStorage, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMMTRControllerFactory : HMFObject {
    char _enabled;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy, nonatomic) MTRDeviceControllerFactoryParams *factoryParams;
@property (readonly, nonatomic) HMMTRControllerFactoryStorage *storage;
@property (nonatomic) char matterFactoryRunning;
@property (readonly, nonatomic) NSMutableArray *controllerWrappers;
@property char factoryOperationEnabled;
@property (readonly, nonatomic) NSMutableSet *disablingTokens;
@property (readonly) char enabled;
@property (readonly) char usesCommonStorage;

+ (id)logCategory;
+ (id)factoryParamsWithCommonStorage;

- (char)enabled;
- (void).cxx_destruct;
- (void)_setEnabled:(char)a0;
- (void)_restartMatterControllerFactory;
- (void)enableNormalOperationWithToken:(id)a0;
- (id)_createControllerForGetter:(id)a0;
- (id)_createControllerUsingCommonStorageWithStartupParams:(id)a0;
- (id)_createControllerUsingOwnStorageWithStartupParams:(id)a0;
- (id)_createControllerWithStartupParams:(id)a0;
- (id)_disableNormalOperation:(char)a0;
- (void)_removeGetter:(id)a0;
- (void)_revokeAvailable:(char)a0;
- (id)disableNormalOperation;
- (id)initWithWorkQueue:(id)a0 factoryParams:(id)a1;
- (id)mtrPluginDeviceControllerRegistry;
- (id)mtrPluginSharedInstance;
- (void)restartNormalOperation;
- (id)sharedDeviceControllerFactory;
- (id)stackStorageWithStartupParams:(id)a0 operationalKeyPairTLV:(id)a1;
- (id)wrapperWithName:(id)a0 startupParams:(id)a1 entityIdentifier:(id)a2;

@end
