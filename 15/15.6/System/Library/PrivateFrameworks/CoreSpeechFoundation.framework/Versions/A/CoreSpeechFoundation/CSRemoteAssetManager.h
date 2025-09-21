@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CSRemoteAssetManager : NSObject {
    NSString *_currentLanguageCode;
    NSString *_resourcePath;
    NSString *_configVersion;
    NSString *_assetHash;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)languageCode;
- (void)addObserver:(id)a0 forAssetType:(unsigned long long)a1;
- (id)assetForCurrentLanguageOfType:(unsigned long long)a0;
- (void)removeObserver:(id)a0 forAssetType:(unsigned long long)a1;
- (id)assetConfigVersionForAssetType:(unsigned long long)a0;
- (void)setLanguageCode:(id)a0 resourcePath:(id)a1 configVersion:(id)a2 assetHash:(id)a3 assetType:(unsigned long long)a4;
- (char)_loadFromJsonFile:(id)a0;
- (id)_loadJsonDataFromFile:(id)a0;
- (char)_loadPreinstalledAssetMetaIfNeeded;
- (id)_remoteAssetMetaPath;
- (void)_setAssetsInfoFromMetaData:(id)a0;
- (char)_writeToJsonFile:(id)a0;
- (id)assetHashForAssetType:(unsigned long long)a0;
- (id)resourcePathForAssetType:(unsigned long long)a0;

@end
