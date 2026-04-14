@class CSAsset, NSString, NSHashTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSEndpointerAssetManager : NSObject <CSAssetManagerDelegate> {
    NSMutableDictionary *_tokenForAssetUpdateNotification;
}

@property (retain, nonatomic) CSAsset *currentHEPAsset;
@property (retain, nonatomic) CSAsset *currentOEPAsset;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)_getFakeEndpointAsset;
+ (id)_getOEPAssetWithLanguage:(id)a0;

- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (id)_getModelPathFromInstallationStatusString:(id)a0;
- (void)_updateEndpointerAssetsIfNeeded;
- (id)getCurrentOSDAsset;
- (void)_notifyAssetsUpdateForObserver:(id)a0;
- (void)_updateAssetWithLanguage:(id)a0 assetType:(unsigned long long)a1;
- (void)_notifyAssetsUpdate;
- (void)_updateAssetWithCurrentLanguageForAssetType:(unsigned long long)a0;
- (id)_fetchEndpointMobileAssetWithLanguage:(id)a0;
- (void)_registerForAssetUpdateNotifications;
- (id)_getCurrentHEPAsset;
- (void)dealloc;
- (void)CSAssetManagerDidDownloadNewAsset:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)getCurrentEndpointerAsset;
- (BOOL)_isOSDIncludedInAsset:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;

@end
