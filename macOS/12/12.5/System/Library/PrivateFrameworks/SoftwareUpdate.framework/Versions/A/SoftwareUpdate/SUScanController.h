@class SUScan, NSError, NSArray, NSURL, NSDate, NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_os_activity;

@interface SUScanController : NSObject {
    NSObject<OS_os_activity> *_activity;
    NSMutableArray *_availableProducts;
    NSMutableSet *_productsIneligibleForCleanup;
    NSMutableDictionary *_productByKey;
    NSURL *_catalogURLFromPrefs;
    NSURL *_catalogURL;
    int _catalogTrustLevel;
    NSArray *_preferredLocalizationsForLastClient;
    long long _scanState;
    SUScan *_scanInProgress;
    NSError *_lastScanError;
    NSDate *_lastCmdRScanCompleted;
    NSObject<OS_dispatch_queue> *_updateInfoQueue;
    NSObject<OS_dispatch_queue> *_scanRefreshQueue;
    NSObject<OS_dispatch_queue> *_scanStateQueue;
    NSObject<OS_dispatch_queue> *_clientNotifyQueue;
    BOOL _scanDisabled;
}

@property (copy) id /* block */ availableProductsDidChangeHandler;
@property (copy) id /* block */ catalogURLDidChangeHandler;

+ (id)sharedScanController;

- (void)dealloc;
- (id)init;
- (void)resetState;
- (id)catalogURL;
- (BOOL)isEVProtected;
- (id)availableProducts;
- (BOOL)checkForChangeInCatalogURL;
- (void)removeInapplicableLocalProducts;
- (void)archiveToCoder:(id)a0;
- (void)dumpStateFromCoder:(id)a0;
- (void)restoreFromCoder:(id)a0;
- (void)availableUpdatesOfType:(long long)a0 withState:(long long)a1 filteredByState:(unsigned long long)a2 filterDeferred:(BOOL)a3 filterDuplicates:(BOOL)a4 usingUpdates:(id)a5 reply:(id /* block */)a6;
- (id)availableProductForKey:(id)a0;
- (id)currentlySetCatalogURL;
- (int)catalogTrustLevel;
- (BOOL)isDefaultAppleCatalog;
- (BOOL)isAppleSeedCatalog;
- (void)refreshAvailableProductsInForeground:(BOOL)a0 limitedToChanged:(BOOL)a1 evenIfConfigurationChanged:(BOOL)a2 initiatedByDeviceConnection:(BOOL)a3 limitedToProductKeys:(id)a4 limitedToProductTypes:(id)a5 forCurrentConfiguration:(BOOL)a6 distributionEnvironment:(id)a7 distributionEvalutionMetainfo:(id)a8 installedPrinters:(id)a9 preferredLocalizations:(id)a10 finish:(id /* block */)a11;
- (double)currentRefreshProgress;
- (id)availableProductsForKeys:(id)a0;
- (void)markRampedUpdatesAsSeen;
- (void)populateTagCache:(id /* block */)a0;
- (void)setScanDisabled:(BOOL)a0;
- (void)dumpDebugInfo;
- (void)removeAvailableProductsWithKeys:(id)a0;
- (void)_handleDeferredInstallSettingsDidChangeNotification:(id)a0;
- (BOOL)_wasSoftwareInstalledSinceLastScan;
- (void)_refreshAvailableUpdatesFromScan:(id)a0;
- (id)_logScanResultsWithProducts:(id)a0;
- (void)_clearCriticalUpdateNotificationDateIfAppropriate;
- (BOOL)isScanActive;
- (id)_shortDescriptionOf:(id)a0;
- (void)setProductIneligibleForCleanup:(id)a0;

@end
