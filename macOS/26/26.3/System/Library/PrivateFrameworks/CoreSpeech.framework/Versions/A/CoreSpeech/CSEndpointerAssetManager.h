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
+ (id)_getOEPAssetWithLanguage:(id)a0;
+ (id)sharedManager;

- (void)_registerForAssetUpdateNotifications;
- (id)_getCurrentHEPAsset;
- (void)CSAssetManagerDidDownloadNewAsset:(id)a0;
- (BOOL)_isOSDIncludedInAsset:(id)a0;
- (id)init;
- (id)_getModelPathFromInstallationStatusString:(id)a0;
- (id)_fetchEndpointMobileAssetWithLanguage:(id)a0;
- (void)_updateEndpointerAssetsIfNeeded;
- (void)addObserver:(id)a0;
- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void).cxx_destruct;
- (void)_notifyAssetsUpdate;
- (void)dealloc;
- (id)getCurrentEndpointerAsset;
- (void)removeObserver:(id)a0;
- (void)_updateAssetWithCurrentLanguageForAssetType:(unsigned long long)a0;
- (void)_notifyAssetsUpdateForObserver:(id)a0;
- (id)getCurrentOSDAsset;
- (void)_updateAssetWithLanguage:(id)a0 assetType:(unsigned long long)a1;

@end
