@class NSError, SUScan, NSArray, NSURL, NSDate, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_os_activity;

@interface SUScanController : NSObject {
    NSObject<OS_os_activity> *_activity;
    NSMutableArray *_availableProducts;
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
    char _scanDisabled;
}

@property (copy) id /* block */ availableProductsDidChangeHandler;
@property (copy) id /* block */ catalogURLDidChangeHandler;

+ (id)sharedScanController;

- (void)dealloc;
- (id)init;
- (void)resetState;
- (void)removeInapplicableLocalProducts;
- (void)archiveToCoder:(id)a0;
- (void)_clearCriticalUpdateNotificationDateIfAppropriate;
- (void)_handleDeferredInstallSettingsDidChangeNotification:(id)a0;
- (id)_logScanResultsWithProducts:(id)a0;
- (void)_refreshAvailableUpdatesFromScan:(id)a0;
- (id)_shortDescriptionOf:(id)a0;
- (char)_wasSoftwareInstalledSinceLastScan;
- (id)availableProductForKey:(id)a0;
- (id)availableProducts;
- (id)availableProductsForKeys:(id)a0;
- (void)availableUpdatesOfType:(long long)a0 withState:(long long)a1 filteredByState:(unsigned long long)a2 filterDeferred:(char)a3 filterDuplicates:(char)a4 usingUpdates:(id)a5 reply:(id /* block */)a6;
- (int)catalogTrustLevel;
- (id)catalogURL;
- (char)checkForChangeInCatalogURL;
- (double)currentRefreshProgress;
- (id)currentlySetCatalogURL;
- (void)dumpDebugInfo;
- (void)dumpStateFromCoder:(id)a0;
- (char)isDefaultAppleCatalog;
- (char)isEVProtected;
- (char)isScanActive;
- (void)markRampedUpdatesAsSeen;
- (void)populateTagCache:(id /* block */)a0;
- (void)refreshAvailableProductsInForeground:(char)a0 limitedToChanged:(char)a1 evenIfConfigurationChanged:(char)a2 initiatedByDeviceConnection:(char)a3 limitedToProductKeys:(id)a4 limitedToProductTypes:(id)a5 forCurrentConfiguration:(char)a6 distributionEnvironment:(id)a7 distributionEvalutionMetainfo:(id)a8 installedPrinters:(id)a9 preferredLocalizations:(id)a10 finish:(id /* block */)a11;
- (void)removeAvailableProductsWithKeys:(id)a0;
- (void)restoreFromCoder:(id)a0;
- (void)setScanDisabled:(char)a0;

@end
