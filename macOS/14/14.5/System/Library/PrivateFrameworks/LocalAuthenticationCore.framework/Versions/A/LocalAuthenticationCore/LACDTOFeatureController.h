@class NSString, NSObject;
@protocol LACDTOEventBus, LACDTODeviceInfoProvider, LACDTOKVStore, OS_dispatch_queue;

@interface LACDTOFeatureController : NSObject <LACDTOFeatureControlling, LACDTOEventProducer> {
    id<LACDTOKVStore> _kvStore;
    id<LACDTODeviceInfoProvider> _device;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<LACDTOEventBus> eventBus;

- (void).cxx_destruct;
- (void)checkCanEnableFeatureWithCompletion:(id /* block */)a0;
- (void)disableFeatureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)enableFeatureWithCompletion:(id /* block */)a0;
- (long long)_featureFlagKey;
- (void)fetchStateWithCompletion:(id /* block */)a0;
- (void)_fetchDeviceHintsCurrentConnection:(id)a0 completion:(id /* block */)a1;
- (void)_setFeatureEnabled:(BOOL)a0 context:(id)a1 connection:(id)a2 completion:(id /* block */)a3;
- (void)_setValue:(id)a0 forKey:(long long)a1 contextUUID:(id)a2 connection:(id)a3 completion:(id /* block */)a4;
- (void)checkIsFeatureAvailableWithCompletion:(id /* block */)a0;
- (void)checkIsFeatureEnabledWithCompletion:(id /* block */)a0;
- (void)checkIsFeatureStrictModeEnabledWithCompletion:(id /* block */)a0;
- (void)checkIsFeatureSupportedWithCompletion:(id /* block */)a0;
- (id)initWithKVStore:(id)a0 device:(id)a1 workQueue:(id)a2;

@end
