@class NSObject, CSUAFAssetManager, NSHashTable;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAssetHandler : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSUAFAssetManager *uafAssetManager;

+ (id)sharedHandlerDisabledOnDeviceCompilation;
+ (id)assetHandlerFactoryWithDisableOnDeviceCompilation:(BOOL)a0;
+ (id)sharedHandler;

- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)notifyObservers:(id)a0 endpointId:(id)a1;
- (id)init;
- (void)mapAssetToExclaveKit:(id)a0 completion:(id /* block */)a1;
- (id)defaultFallbackModelIfNil:(id)a0;
- (void)retryMappingAssetToExclaveKit:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)getVoiceTriggerAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;

@end
