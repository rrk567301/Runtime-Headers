@class NSMutableDictionary, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSAssetController : NSObject <CSEventMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assetsMigrationQueue;
@property (retain, nonatomic) NSDictionary *csAssetsDictionary;
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;
+ (id)getVoiceTriggerAssetTypeString;
+ (id)getEndpointAssetTypeString;
+ (id)getLanguageDetectorAssetTypeString;
+ (id)getAdBlockerAssetTypeString;
+ (id)getSpeakerRecognitionAssetTypeString;
+ (id)filteredAssetsForAssets:(id)a0 assetType:(unsigned long long)a1 language:(id)a2;
+ (void)addKeyValuePairForQuery:(id *)a0 assetType:(unsigned long long)a1;
+ (id)getAssetTypeStringForType:(unsigned long long)a0;
+ (unsigned long long)getVoiceTriggerAssetCurrentCompatibilityVersion;
+ (unsigned long long)getEndpointAssetCurrentCompatibilityVersion;
+ (unsigned long long)getLanguageDetectorCurrentCompatibilityVersion;
+ (unsigned long long)getAdBlockerCurrentCompatibilityVersion;
+ (unsigned long long)getSpeakerRecognitionCurrentCompatibilityVersion;
+ (id)filteredAssetsForFetchRemoteMetaDataForAssets:(id)a0 assetType:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)installedAssetOfType:(unsigned long long)a0 language:(id)a1;
- (void)assetOfType:(unsigned long long)a0 language:(id)a1 completion:(id /* block */)a2;
- (void)CSEventMonitorDidReceiveEvent:(id)a0;
- (void)addObserver:(id)a0 forAssetType:(unsigned long long)a1;
- (id)assetOfType:(unsigned long long)a0 language:(id)a1;
- (id)allInstalledAssetsOfType:(unsigned long long)a0 language:(id)a1;
- (void)installedAssetOfType:(unsigned long long)a0 language:(id)a1 completion:(id /* block */)a2;
- (void)assetOfType:(unsigned long long)a0 language:(id)a1 compatibilityVersion:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)fetchRemoteMetaOfType:(unsigned long long)a0;
- (void)removeObserver:(id)a0 forAssetType:(unsigned long long)a1;
- (void)_cleanUpMobileAssetV1Directory;
- (BOOL)_isReadyToUse;
- (id)installedAssetOfType:(unsigned long long)a0 withLanguage:(id)a1;
- (void)_fetchRemoteAssetOfType:(unsigned long long)a0 withLanguage:(id)a1 completion:(id /* block */)a2;
- (id)_assetQueryForAssetType:(unsigned long long)a0;
- (void)installedAssetOfType:(unsigned long long)a0 withLanguage:(id)a1 completion:(id /* block */)a2;
- (void)_installedAssetOfType:(unsigned long long)a0 query:(id)a1 withLanguage:(id)a2 completion:(id /* block */)a3;
- (void)_fetchRemoteAssetOfType:(unsigned long long)a0 withLanguage:(id)a1 query:(id)a2 completion:(id /* block */)a3;
- (id)_installedAssetOfType:(unsigned long long)a0 withLanguage:(id)a1;
- (void)_installedAssetOfType:(unsigned long long)a0 withLanguage:(id)a1 completion:(id /* block */)a2;
- (id)_findLatestInstalledAsset:(id)a0;
- (void)fetchRemoteMetaOfType:(unsigned long long)a0 allowRetry:(BOOL)a1;
- (void)_runAssetQuery:(id)a0 completion:(id /* block */)a1;
- (void)_downloadAssetCatalogForAssetType:(unsigned long long)a0 complete:(id /* block */)a1;
- (void)_updateFromRemoteToLocalAssets:(id)a0 forAssetType:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)_defaultDownloadOptions;
- (BOOL)_isRetryRecommendedWithResult:(long long)a0;
- (void)_downloadAsset:(id)a0 withComplete:(id /* block */)a1;
- (void)_startDownloadingAsset:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;

@end
