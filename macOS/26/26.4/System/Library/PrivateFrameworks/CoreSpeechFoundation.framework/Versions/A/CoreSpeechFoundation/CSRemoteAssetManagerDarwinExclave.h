@class NSString, NSHashTable, NSObject, CSRemoteAssetCache;
@protocol OS_dispatch_queue, CSExclaveAssetsControlling;

@interface CSRemoteAssetManagerDarwinExclave : NSObject <CSRemoteAssetManagerProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    CSRemoteAssetCache *_assetCache;
}

@property (retain, nonatomic) id<CSExclaveAssetsControlling> exclaveAssetsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)addObserver:(id)a0 forAssetType:(unsigned long long)a1;
- (id)_languageCode;
- (id)assetForCurrentLanguageOfType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeObserver:(id)a0 forAssetType:(unsigned long long)a1;
- (id)languageCode;
- (id)assetConfigVersionForAssetType:(unsigned long long)a0;
- (void)setLanguageCode:(id)a0 resourcePath:(id)a1 configVersion:(id)a2 assetHash:(id)a3 assetType:(unsigned long long)a4;
- (id)assetHashForAssetType:(unsigned long long)a0;
- (id)initWithExclaveAssetsController:(id)a0;
- (id)resourcePathForAssetType:(unsigned long long)a0;

@end
