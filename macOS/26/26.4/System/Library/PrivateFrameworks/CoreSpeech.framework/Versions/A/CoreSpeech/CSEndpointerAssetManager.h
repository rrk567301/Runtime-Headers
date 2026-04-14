@class CSAsset, NSString, NSHashTable, CSOEPEntitledAssetManager, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CSEndpointerAssetManager : NSObject <CSAssetManagerDelegate> {
    NSMutableDictionary *_tokenForAssetUpdateNotification;
}

@property (retain, nonatomic) CSAsset *currentHEPAsset;
@property (retain, nonatomic) CSAsset *currentOEPAsset;
@property (retain, nonatomic) CSOEPEntitledAssetManager *oepEntitledAssetManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)_getOEPAssetWithLanguage:(id)a0 withOEPEntitledAssetManager:(id)a1;
+ (id)_getFakeEndpointAsset;

- (id)_fetchEndpointMobileAssetWithLanguage:(id)a0;
- (void)_updateAssetWithLanguage:(id)a0 assetType:(unsigned long long)a1;
- (void)_updateAssetWithCurrentLanguageForAssetType:(unsigned long long)a0;
- (void)_registerForAssetUpdateNotifications;
- (id)getCurrentEndpointerAsset;
- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (id)_getCurrentHEPAsset;
- (void)_updateEndpointerAssetsIfNeeded;
- (void).cxx_destruct;
- (BOOL)_isOSDIncludedInAsset:(id)a0;
- (void)CSAssetManagerDidDownloadNewAsset:(id)a0;
- (void)addObserver:(id)a0;
- (void)_notifyAssetsUpdate;
- (void)_notifyAssetsUpdateForObserver:(id)a0;
- (id)init;
- (id)_getModelPathFromInstallationStatusString:(id)a0;
- (id)getCurrentOSDAsset;
- (void)removeObserver:(id)a0;
- (void)_resetAndGetOEPAssetsWithLanguage:(id)a0;
- (void)dealloc;

@end
