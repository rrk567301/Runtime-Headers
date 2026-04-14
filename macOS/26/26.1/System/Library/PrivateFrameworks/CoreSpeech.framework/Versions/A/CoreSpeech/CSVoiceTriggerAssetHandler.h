@class NSObject, CSUAFAssetManager, NSHashTable;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAssetHandler : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSUAFAssetManager *uafAssetManager;

+ (id)assetHandlerFactoryWithDisableOnDeviceCompilation:(BOOL)a0;
+ (id)sharedHandler;
+ (id)sharedHandlerDisabledOnDeviceCompilation;

- (id)defaultFallbackModelIfNil:(id)a0;
- (void)retryMappingAssetToExclaveKit:(id)a0 completion:(id /* block */)a1;
- (void)mapAssetToExclaveKit:(id)a0 completion:(id /* block */)a1;
- (void)getVoiceTriggerAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void).cxx_destruct;
- (void)notifyObservers:(id)a0 endpointId:(id)a1;
- (id)init;

@end
