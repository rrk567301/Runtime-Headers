@class UAFAssetSet;

@interface CSUAFAssetManager : CSUAFAssetManagerBase {
    UAFAssetSet *_assetSet;
    UAFAssetSet *_adBlockerAssetSet;
}

+ (id)sharedInstance;

- (void)retryMappingAssetToExclaveKit:(id)a0 completion:(id /* block */)a1;
- (void)mapAssetToExclaveKit:(id)a0 completion:(id /* block */)a1;
- (void)getInstalledAssetofType:(unsigned long long)a0 forLocale:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_getInstalledAssetofType:(unsigned long long)a0 forLocale:(id)a1 completion:(id /* block */)a2;

@end
