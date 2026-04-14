@class HMDHomeManager, NSString, NSObject, HMBCloudDatabase;
@protocol OS_dispatch_queue, HMDHH2FrameworkSwitchDataSource;

@interface HMDHH2FrameworkSwitch : HMFObject <HMFLogging, HMBCloudDatabaseDelegate, HMBCloudZoneDelegate>

@property (nonatomic) BOOL autoFrameworkSwitch;
@property (nonatomic) BOOL isTapToSetupOngoing;
@property (retain, nonatomic) HMBCloudDatabase *cloudDatabaseToDetectHH2Zone;
@property (copy, nonatomic) id /* block */ blockToBeCalledBeforeSwitchingFramework;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (retain, nonatomic) id<HMDHH2FrameworkSwitchDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)setHH2EnablementPreferenceKey:(BOOL)a0;
+ (void)setHH2SettingsMigrationKey:(BOOL)a0;
+ (void)relaunchHomedAfterSettingEnvironmentTo:(BOOL)a0 blockToExecuteBeforeReLaunch:(id /* block */)a1;
+ (void)switchBackToHH1AndDoNotLaunchDueToPrimaryAccountRemoval;
+ (void)switchBackToHH1AndRelaunchDueToHH2MigrationFailed;
+ (void)switchBackToHH1AndRelaunch;
+ (void)switchToHH2AndRelaunchHomed;

- (void).cxx_destruct;
- (void)cloudDatabase:(id)a0 didCreateZoneWithID:(id)a1;
- (void)handleTapToSetupFinished:(id)a0;
- (id)initWithAutoSwitchEnabledWithHomeManager:(id)a0 dataSource:(id)a1 callBeforeFrameworkSwitchCompletionHandler:(id /* block */)a2;
- (id)initWithAutoSwitchEnabledWithHomeManager:(id)a0 callBeforeFrameworkSwitchCompletionHandler:(id /* block */)a1;
- (id)initWithAutoSwitchDisabledWithHomeManager:(id)a0;
- (id)initWithAutoSwitch:(BOOL)a0 callBeforeFrameworkSwitch:(id /* block */)a1 homeManager:(id)a2 dataSource:(id)a3;
- (void)createHH2CloudDatabaseAndStartSyncing;
- (void)performInitialSyncAndSwitchFrameworkIfRequired;
- (void)forceFetchAllCloudZones;
- (BOOL)waitForHH2SentinelZoneToBeFetchedFromCloud;
- (void)performInitialSync:(id /* block */)a0;
- (void)createHH2SentinelZoneWithCompletionHandler:(id /* block */)a0;
- (BOOL)waitForHH2SentinelZoneToBeCreated:(double)a0;
- (BOOL)checkExistenceOfHH2SentinelZone;
- (void)makeSureWeAreRunningInRightEnvironment:(BOOL)a0;
- (void)_makeSureWeAreRunningInRightEnvironment:(BOOL)a0;
- (BOOL)_areWeRunningInRightEnvironment:(BOOL)a0;
- (void)waitForHH2SentinelZoneToBeRemoved;
- (void)removeHH2SentinelZoneWithCompletion:(id /* block */)a0;
- (void)_clearSetupModeIfNeeded;
- (void)switchToHH2AndRelaunchHomedToPerformHH2Migration;
- (void)switchToHH2AfterPerformingHH2PreRebootTask;
- (BOOL)switchToSetupMode:(unsigned long long)a0;
- (BOOL)areCloudKitServersReachable;
- (void)waitForCloudKitAccountToBeAvailable;

@end
