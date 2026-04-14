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

+ (id)filteredAssetsForAssets:(id)a0 assetType:(unsigned long long)a1 language:(id)a2;
+ (id)getLanguageDetectorAssetTypeString;
+ (id)getEndpointAssetTypeString;
+ (unsigned long long)getEndpointAssetCurrentCompatibilityVersion;
+ (id)getVoiceTriggerAssetTypeString;
+ (void)addKeyValuePairForQuery:(id *)a0 assetType:(unsigned long long)a1;
+ (id)sharedController;
+ (unsigned long long)getVoiceTriggerAssetCurrentCompatibilityVersion;
+ (id)getSpeakerRecognitionAssetTypeString;
+ (id)getAssetTypeStringForType:(unsigned long long)a0;
+ (id)filteredAssetsForFetchRemoteMetaDataForAssets:(id)a0 assetType:(unsigned long long)a1;
+ (unsigned long long)getLanguageDetectorCurrentCompatibilityVersion;
+ (unsigned long long)getSpeakerRecognitionCurrentCompatibilityVersion;
+ (unsigned long long)getAdBlockerCurrentCompatibilityVersion;
+ (id)getAdBlockerAssetTypeString;

- (void)fetchRemoteMetaOfType:(unsigned long long)a0;
- (void)addObserver:(id)a0 forAssetType:(unsigned long long)a1;
- (void)_downloadAsset:(id)a0 withComplete:(id /* block */)a1;
- (void)_startDownloadingAsset:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_updateFromRemoteToLocalAssets:(id)a0 forAssetType:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)_notInstalledAssetState:(long long)a0 assetType:(unsigned long long)a1;
- (BOOL)_isNeededForOTA:(unsigned long long)a0;
- (void)installedAssetOfType:(unsigned long long)a0 withLanguage:(id)a1 completion:(id /* block */)a2;
- (void)_cleanUpMobileAssetV1Directory;
- (void)fetchRemoteMetaOfType:(unsigned long long)a0 allowRetry:(BOOL)a1;
- (void)installedAssetOfType:(unsigned long long)a0 language:(id)a1 completion:(id /* block */)a2;
- (void)_fetchRemoteAssetOfType:(unsigned long long)a0 withLanguage:(id)a1 query:(id)a2 completion:(id /* block */)a3;
- (id)_assetQueryForAssetType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)assetOfType:(unsigned long long)a0 language:(id)a1 completion:(id /* block */)a2;
- (void)_fetchRemoteAssetOfType:(unsigned long long)a0 withLanguage:(id)a1 completion:(id /* block */)a2;
- (id)assetOfType:(unsigned long long)a0 language:(id)a1;
- (void)assetOfType:(unsigned long long)a0 language:(id)a1 compatibilityVersion:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)allInstalledAssetsOfType:(unsigned long long)a0 language:(id)a1;
- (id)init;
- (void)_setAssetQueryParameters:(id)a0;
- (id)_installedAssetOfType:(unsigned long long)a0 withLanguage:(id)a1;
- (id)_findLatestInstalledAsset:(id)a0 assetType:(unsigned long long)a1;
- (id)_defaultDownloadOptions;
- (void)_installedAssetOfType:(unsigned long long)a0 withLanguage:(id)a1 completion:(id /* block */)a2;
- (void)removeObserver:(id)a0 forAssetType:(unsigned long long)a1;
- (void)_installedAssetOfType:(unsigned long long)a0 query:(id)a1 withLanguage:(id)a2 completion:(id /* block */)a3;
- (BOOL)_isRetryRecommendedWithResult:(long long)a0;
- (void)_downloadAssetCatalogForAssetType:(unsigned long long)a0 complete:(id /* block */)a1;
- (void)CSEventMonitorDidReceiveEvent:(id)a0;
- (void)_runAssetQuery:(id)a0 completion:(id /* block */)a1;
- (id)installedAssetOfType:(unsigned long long)a0 language:(id)a1;
- (id)installedAssetOfType:(unsigned long long)a0 withLanguage:(id)a1;

@end
