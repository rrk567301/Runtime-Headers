@class CSAsset, NSDictionary, NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSEndpointerAssetManager : NSObject <CSAssetManagerDelegate, CESRTrialAssetDelegate>

@property (retain, nonatomic) CSAsset *currentHEPAsset;
@property (retain, nonatomic) CSAsset *currentOEPAsset;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDictionary *asrDatapackInstallationStatus;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)CSAssetManagerDidDownloadNewAsset:(id)a0;
- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (id)_fetchEndpointMobileAssetWithLanguage:(id)a0;
- (id)_getCurrentHEPAsset;
- (id)_getFakeEndpointAsset;
- (id)_getModelPathFromInstallationStatusString:(id)a0;
- (id)_getOEPVersionFromPath:(id)a0;
- (BOOL)_isOSDIncludedInAsset:(id)a0;
- (void)_notifyAssetsUpdate;
- (void)_updateAssetWithCurrentLanguageForAssetType:(unsigned long long)a0;
- (void)_updateAssetWithLanguage:(id)a0 assetType:(unsigned long long)a1;
- (void)_updateOEPAssetsWithLanguage:(id)a0;
- (void)assetStatus:(id)a0;
- (id)getCurrentEndpointerAsset;
- (id)getCurrentOSDAsset;
- (void)updateEndpointerAssetsIfNeeded;

@end
