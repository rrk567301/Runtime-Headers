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

+ (id)_getFakeEndpointAsset;
+ (id)sharedManager;
+ (id)_getOEPAssetWithLanguage:(id)a0;

- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void)removeObserver:(id)a0;
- (void)_updateEndpointerAssetsIfNeeded;
- (void)_registerForAssetUpdateNotifications;
- (id)_getCurrentHEPAsset;
- (void)addObserver:(id)a0;
- (id)getCurrentOSDAsset;
- (void).cxx_destruct;
- (void)_updateAssetWithLanguage:(id)a0 assetType:(unsigned long long)a1;
- (id)getCurrentEndpointerAsset;
- (void)_updateAssetWithCurrentLanguageForAssetType:(unsigned long long)a0;
- (void)_notifyAssetsUpdateForObserver:(id)a0;
- (void)_notifyAssetsUpdate;
- (void)CSAssetManagerDidDownloadNewAsset:(id)a0;
- (id)_getModelPathFromInstallationStatusString:(id)a0;
- (id)init;
- (id)_fetchEndpointMobileAssetWithLanguage:(id)a0;
- (BOOL)_isOSDIncludedInAsset:(id)a0;
- (void)dealloc;

@end
