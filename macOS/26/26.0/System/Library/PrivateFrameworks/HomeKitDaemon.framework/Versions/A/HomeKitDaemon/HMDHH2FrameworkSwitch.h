@class HMDHomeManager, NAFuture, NSString, NSObject, HMBCloudDatabase;
@protocol OS_dispatch_queue, HMDHH2FrameworkSwitchDataSource, OS_os_log;

@interface HMDHH2FrameworkSwitch : HMFObject <HMFLogging, HMBCloudDatabaseDelegate> {
    NSObject<OS_os_log> *_logger;
}

@property (nonatomic) BOOL autoFrameworkSwitch;
@property (nonatomic) BOOL isTapToSetupOngoing;
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
+ (void)setHH2EnablementPreferenceKey:(BOOL)a0;
+ (id)errorFromHMDCKAccountStatus:(long long)a0;
+ (void)setHH2SettingsMigrationKey:(BOOL)a0;
+ (void)removeHH2EnablementPreferenceKey;
+ (void)switchBackToHH1AndDoNotLaunchDueToPrimaryAccountRemoval;

- (BOOL)_areWeRunningInRightEnvironment:(BOOL)a0;
- (void)_clearSetupModeIfNeeded;
- (BOOL)checkExistenceOfHH2SentinelZone;
- (void)forceFetchSentinelZone;
- (void)cloudDatabase:(id)a0 didCreateZoneWithID:(id)a1;
- (BOOL)waitForHH2SentinelZoneToBeCreated:(double)a0 error:(id *)a1;
- (void)switchToHH2AndRelaunchHomedToPerformHH2Migration;
- (void)_makeSureWeAreRunningInRightEnvironment:(BOOL)a0;
- (void)makeSureWeAreRunningInRightEnvironment:(BOOL)a0;
- (void)switchToHH2AfterPerformingHH2PreRebootTask;
- (void)relaunchHomedAfterSettingEnvironmentTo:(BOOL)a0 blockToExecuteBeforeReLaunch:(id /* block */)a1;
- (id)initWithAutoSwitch:(BOOL)a0 homeManager:(id)a1 dataSource:(id)a2 callBeforeFrameworkSwitch:(id /* block */)a3;
- (void)switchBackToHH1AndRelaunchDueToHH2MigrationFailed;
- (void)createHH2SentinelZoneWithCompletionHandler:(id /* block */)a0;
- (BOOL)switchToSetupMode:(unsigned long long)a0;
- (void)performInitialSync:(id /* block */)a0;
- (void)switchToHH2AndRelaunchHomed;
- (void)_fastBootToHH2IfRequiredForTTSU;
- (void)switchBackToHH1AndRelaunch;
- (void)performInitialSyncAndSwitchFrameworkIfRequired;
- (long long)areCloudKitServersReachableWithError:(id *)a0;
- (void)waitForHH2SentinelZoneToBeRemoved;
- (void)handleTapToSetupFinished:(id)a0;
- (BOOL)waitForHH2SentinelZoneToBeFetchedFromCloud;
- (void)waitForCloudKitAccountToBeAvailable;
- (void)createHH2CloudDatabaseAndStartSyncing;
- (void)removeHH2SentinelZoneWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
