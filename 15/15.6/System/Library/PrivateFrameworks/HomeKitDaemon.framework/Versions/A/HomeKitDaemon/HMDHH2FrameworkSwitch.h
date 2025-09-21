@class HMDHomeManager, NAFuture, NSString, NSObject, HMBCloudDatabase;
@protocol OS_dispatch_queue, HMDHH2FrameworkSwitchDataSource, OS_os_log;

@interface HMDHH2FrameworkSwitch : HMFObject <HMFLogging, HMBCloudDatabaseDelegate> {
    NSObject<OS_os_log> *_logger;
}

@property (nonatomic) char autoFrameworkSwitch;
@property (nonatomic) char isTapToSetupOngoing;
@property (retain, nonatomic) HMBCloudDatabase *cloudDatabaseToDetectHH2Zone;
@property (copy, nonatomic) id /* block */ blockToBeCalledBeforeSwitchingFramework;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (retain, nonatomic) id<HMDHH2FrameworkSwitchDataSource> dataSource;
@property (readonly, nonatomic) NAFuture *fetchSentinelZoneDidFinishFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)errorFromHMDCKAccountStatus:(long long)a0;
+ (void)setHH2EnablementPreferenceKey:(char)a0;
+ (void)setHH2SettingsMigrationKey:(char)a0;
+ (void)switchBackToHH1AndDoNotLaunchDueToPrimaryAccountRemoval;

- (void).cxx_destruct;
- (void)cloudDatabase:(id)a0 didCreateZoneWithID:(id)a1;
- (void)_fastBootToHH2IfRequiredForTTSU;
- (char)checkExistenceOfHH2SentinelZone;
- (char)_areWeRunningInRightEnvironment:(char)a0;
- (void)_clearSetupModeIfNeeded;
- (void)_makeSureWeAreRunningInRightEnvironment:(char)a0;
- (long long)areCloudKitServersReachableWithError:(id *)a0;
- (void)createHH2CloudDatabaseAndStartSyncing;
- (void)createHH2SentinelZoneWithCompletionHandler:(id /* block */)a0;
- (void)forceFetchSentinelZone;
- (void)handleTapToSetupFinished:(id)a0;
- (id)initWithAutoSwitch:(char)a0 homeManager:(id)a1 dataSource:(id)a2 callBeforeFrameworkSwitch:(id /* block */)a3;
- (void)makeSureWeAreRunningInRightEnvironment:(char)a0;
- (void)performInitialSync:(id /* block */)a0;
- (void)performInitialSyncAndSwitchFrameworkIfRequired;
- (void)relaunchHomedAfterSettingEnvironmentTo:(char)a0 blockToExecuteBeforeReLaunch:(id /* block */)a1;
- (void)removeHH2SentinelZoneWithCompletion:(id /* block */)a0;
- (void)switchBackToHH1AndRelaunch;
- (void)switchBackToHH1AndRelaunchDueToHH2MigrationFailed;
- (void)switchToHH2AfterPerformingHH2PreRebootTask;
- (void)switchToHH2AndRelaunchHomed;
- (void)switchToHH2AndRelaunchHomedToPerformHH2Migration;
- (char)switchToSetupMode:(unsigned long long)a0;
- (void)waitForCloudKitAccountToBeAvailable;
- (char)waitForHH2SentinelZoneToBeCreated:(double)a0 error:(id *)a1;
- (char)waitForHH2SentinelZoneToBeFetchedFromCloud;
- (void)waitForHH2SentinelZoneToBeRemoved;

@end
