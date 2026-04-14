@class CWFAssetPowerTable, MAAutoAssetSelector, NSString, CWFAssetCreatorFromRoot, MAAutoAsset, NSObject, CWFAssetRootMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CWFAssetSetManager : NSObject <CWFAssetMgmtProtocol, CWFAssetRootMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (copy, nonatomic) id /* block */ assetDidChangeHandler;
@property (retain, nonatomic) MAAutoAssetSelector *currentLockedAutoAssetSelector;
@property (retain, nonatomic) MAAutoAsset *currentLockedAutoAsset;
@property (nonatomic) BOOL interestExpressed;
@property (nonatomic) int notifyTokenVersionDownloaded;
@property (retain, nonatomic) NSString *assetSpecifier;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *periodicCheckA11Timer;
@property (retain, nonatomic) NSString *apiMajorVersion;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *periodicCheckTimer;
@property (nonatomic) BOOL periodicCheckEnabled;
@property (nonatomic) long long periodicityInSecs;
@property (nonatomic) BOOL assetRootToProcess;
@property (retain, nonatomic) CWFAssetPowerTable *assetPowerTable;
@property (retain, nonatomic) CWFAssetCreatorFromRoot *assetFromRoot;
@property (retain, nonatomic) CWFAssetRootMonitor *assetRootMonitor;
@property (copy) id /* block */ eventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)endAllPreviousLocks;

- (void)invalidate;
- (id)init;
- (void)activate;
- (void).cxx_destruct;
- (void)_handleAssetChangedNotification;
- (void)__periodicCheck;
- (void)__periodicCheckA11;
- (void)__startAssetTracking;
- (void)__stopPeriodicCheckA11;
- (void)_registerForAssetChangedNotification:(id /* block */)a0;
- (void)enablePeriodicCheck;
- (void)lockAndHandOffCanBlock:(BOOL)a0 forcedFetch:(BOOL)a1;
- (id)lockAutoAssetWithReason:(id)a0 isBlocking:(BOOL)a1 forcedFetch:(BOOL)a2;
- (id)makeAutoAssetSetWithEntry:(id)a0;
- (id)makeAutoAssetWithSelector:(id)a0;
- (void)processQueryResults:(id)a0 withError:(id)a1;
- (void)rootMonitorDetectedAdd:(id)a0 deleted:(id)a1 updated:(id)a2;
- (void)unlockAssetWithReason:(id)a0;

@end
