@class NSObject, CSExclaveAssetManagerProxy, UAFAssetSet;
@protocol OS_dispatch_queue;

@interface CSUAFAssetManager : NSObject {
    UAFAssetSet *_assetSet;
    UAFAssetSet *_adBlockerAssetSet;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isExclaveHardware;
    CSExclaveAssetManagerProxy *_exclaveManagerProxy;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)getInstalledAssetofType:(unsigned long long)a0 forLocale:(id)a1 completion:(id /* block */)a2;
- (void)mapAssetToExclaveKit:(id)a0 completion:(id /* block */)a1;
- (void)_getInstalledAssetofType:(unsigned long long)a0 forLocale:(id)a1 completion:(id /* block */)a2;
- (id)_initWithForceSetIsExclave:(BOOL)a0 exclaveManagerProxy:(id)a1;
- (void)_mapAssetToExclaveKitForAssetName:(id)a0 asset:(id)a1 completion:(id /* block */)a2;

@end
