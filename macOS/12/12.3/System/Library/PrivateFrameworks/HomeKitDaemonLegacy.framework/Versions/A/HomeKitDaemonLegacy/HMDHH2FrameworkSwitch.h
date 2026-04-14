@class HMBCloudDatabase, HMDHomeManager, NSString, HMFUnfairLock, NSObject, CKContainer;
@protocol OS_dispatch_queue;

@interface HMDHH2FrameworkSwitch : HMFObject <HMFLogging, HMBCloudDatabaseDelegate, HMBCloudZoneDelegate> {
    HMFUnfairLock *_lock;
}

@property (nonatomic) BOOL autoFrameworkSwitch;
@property (nonatomic) BOOL isTapToSetupOngoing;
@property (retain, nonatomic) HMBCloudDatabase *cloudDatabaseToDetectHH2Zone;
@property (retain, nonatomic) CKContainer *containerToCheckCloudKitReachability;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueueToCheckCloudKitReachability;
@property (copy, nonatomic) id /* block */ completionBlockToBeCalledBeforeSwitchingFramework;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)setHH2EnablementPreferenceKey:(BOOL)a0;
+ (void)relaunchHomed:(id /* block */)a0;
+ (void)switchBackToHH1AndRelaunch;
+ (void)switchBackToHH1AndDoNotLaunchDueToPrimaryAccountRemoval;
+ (void)switchBackToHH1AndRelaunchDueToHH2MigrationFailed;
+ (void)switchToHH2AndRelaunchHomed;

- (void).cxx_destruct;
- (void)cloudDatabase:(id)a0 didCreateZoneWithID:(id)a1;
- (id)initWithAutoSwitch:(BOOL)a0 callBeforeFrameworkSwitch:(id /* block */)a1 homeManager:(id)a2;
- (void)handleTapToSetupFinished:(id)a0;
- (void)createHH2CloudDatabaseAndStartSyncing;
- (void)performInitialSyncAndSwitchFrameworkIfRequired;
- (void)waitForCloudKitAccountToBeAvailable;
- (void)forceFetchAllCloudZones;
- (void)performInitialSync:(id /* block */)a0;
- (void)makeSureWeAreRunningInRightEnvironment;
- (void)createHH2SentinelZoneWithCompletionHandler:(id /* block */)a0;
- (BOOL)_areWeRunningInRightEnvironment;
- (BOOL)checkExistenceOfHH2SentinelZone;
- (void)removeHH2SentinelZoneWithCompletion:(id /* block */)a0;
- (id)initWithAutoSwitchEnabledWithHomeManager:(id)a0 callBeforeFrameworkSwitchCompletionHandler:(id /* block */)a1;
- (id)initWithAutoSwitchDisabledWithHomeManager:(id)a0;
- (BOOL)waitForHH2SentinelZoneToBeFetchedFromCloud;
- (BOOL)waitForHH2SentinelZoneToBeCreated:(double)a0;
- (void)waitForHH2SentinelZoneToBeRemoved;
- (BOOL)areCloudKitServersReachable;

@end
