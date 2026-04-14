@class CWFAssetPowerTable, MAAutoAssetSelector, NSString, CWFAssetCreatorFromRoot, MAAutoAsset, NSObject, CWFAssetRootMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CWFAssetSetManager : NSObject <CWFAssetMgmtProtocol, CWFAssetRootMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (copy, nonatomic) id /* block */ assetDownloadedHandler;
@property (copy, nonatomic) id /* block */ assetDiscoveredHandler;
@property (retain, nonatomic) MAAutoAssetSelector *currentLockedAutoAssetSelector;
@property (retain, nonatomic) MAAutoAsset *currentLockedAutoAsset;
@property (nonatomic) BOOL interestExpressed;
@property (nonatomic) int notifyTokenVersionDownloaded;
@property (nonatomic) int notifyTokenVersionDiscovered;
@property (retain, nonatomic) NSString *assetSpecifier;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *periodicCheckA11Timer;
@property (retain, nonatomic) NSString *apiMajorVersion;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *forTestingPeriodicCheckTimer;
@property (nonatomic) BOOL forTestingPeriodicCheckEnabled;
@property (nonatomic) long long forTestingPeriodicityInSecs;
@property (nonatomic) BOOL forTestingPeriodicCheckForDownloadEnabled;
@property (nonatomic) long long forTestingPeriodicityForDownloadInSecs;
@property (nonatomic) BOOL periodicCheckForDownloadEnabled;
@property (nonatomic) unsigned long long periodicCheckForDownloadCounts;
@property (retain, nonatomic) NSString *atomicInstanceTrackedForDownloaded;
@property (nonatomic) BOOL assetRootToProcess;
@property (retain, nonatomic) CWFAssetPowerTable *assetPowerTable;
@property (retain, nonatomic) CWFAssetCreatorFromRoot *assetFromRoot;
@property (nonatomic) unsigned long long readinessRetryCount;
@property (retain, nonatomic) CWFAssetRootMonitor *assetRootMonitor;
@property (copy) id /* block */ eventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)endAllPreviousLocks;

- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (id)init;
- (void)__periodicCheckA11;
- (void)__startAssetTracking;
- (void)__stopPeriodicCheckA11;
- (void)_configureIntervalForTestingForPeriodicCheckForDownload;
- (void)_forTestingPeriodicCheck;
- (void)_handleAssetDiscoveredNotification;
- (void)_handleAssetDownloadedNotification;
- (void)_periodicCheckForDownloaded;
- (void)_registerForAssetDiscoveredNotification:(id /* block */)a0;
- (void)_registerForAssetDownloadedNotification:(id /* block */)a0;
- (id)checkAssetsWithReason:(id)a0 CanBlock:(BOOL)a1 forAtomicInstance:(id)a2;
- (void)forTestingEnablePeriodicCheck;
- (BOOL)isMobileAssetDaemonReady;
- (void)lockAndHandOffCanBlock:(BOOL)a0 forcedFetch:(BOOL)a1;
- (id)lockAutoAssetWithReason:(id)a0 isBlocking:(BOOL)a1 forcedFetch:(BOOL)a2;
- (id)makeAutoAssetSetWithEntry:(id)a0;
- (id)makeAutoAssetWithSelector:(id)a0;
- (void)processQueryResults:(id)a0 withError:(id)a1;
- (void)rootMonitorDetectedAdd:(id)a0 deleted:(id)a1 updated:(id)a2;
- (void)scheduleReadinessRetry;
- (void)unlockAssetWithReason:(id)a0;

@end
