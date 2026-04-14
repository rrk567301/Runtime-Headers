@class HMDHomeManager, NSString, NSObject, HMBCloudDatabase;
@protocol OS_dispatch_queue, HMDHH2FrameworkSwitchDataSource, OS_os_log;

@interface HMDHH2FrameworkSwitch : HMFObject <HMFLogging, HMBCloudDatabaseDelegate, HMDHH2FrameworkSwitchProtocol> {
    NSObject<OS_os_log> *_logger;
}

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

+ (void)setHH2EnablementPreferenceKey:(BOOL)a0;
+ (void)setHH2SettingsMigrationKey:(BOOL)a0;
+ (void)removeHH2EnablementPreferenceKey;
+ (void)switchBackToHH1AndDoNotLaunchDueToPrimaryAccountRemoval;
+ (id)logCategory;
+ (id)errorFromHMDCKAccountStatus:(long long)a0;

- (BOOL)waitForHH2SentinelZoneToBeCreatedUntil:(double)a0 error:(id *)a1;
- (void)performInitialSync:(id /* block */)a0;
- (void)cloudDatabase:(id)a0 didCreateZoneWithID:(id)a1;
- (void)relaunchHomedAfterSettingEnvironmentTo:(BOOL)a0 blockToExecuteBeforeReLaunch:(id /* block */)a1;
- (void)createHH2SentinelZoneWithCompletionHandler:(id /* block */)a0;
- (void)forceFetchSentinelZone;
- (BOOL)_areWeRunningInRightEnvironment:(BOOL)a0;
- (void)switchToHH2AfterPerformingHH2PreRebootTask;
- (void)createHH2CloudDatabaseAndStartSyncing;
- (void)switchToHH2AndRelaunchHomedToPerformHH2Migration;
- (id)initWithAutoSwitch:(BOOL)a0 homeManager:(id)a1 dataSource:(id)a2 callBeforeFrameworkSwitch:(id /* block */)a3;
- (BOOL)switchToSetupMode:(unsigned long long)a0;
- (void)makeSureWeAreRunningInRightEnvironment:(BOOL)a0;
- (void).cxx_destruct;
- (void)_fastBootToHH2IfRequiredForTTSU;
- (BOOL)waitForHH2SentinelZoneToBeFetchedFromCloud;
- (void)switchToHH2AndRelaunchHomed;
- (void)waitForCloudKitAccountToBeAvailable;
- (void)_makeSureWeAreRunningInRightEnvironment:(BOOL)a0;
- (BOOL)checkExistenceOfHH2SentinelZone;
- (void)switchBackToHH1AndRelaunch;
- (void)removeHH2SentinelZoneWithCompletion:(id /* block */)a0;
- (void)switchBackToHH1AndRelaunchDueToHH2MigrationFailed;
- (void)_clearSetupModeIfNeeded;
- (void)performInitialSyncAndSwitchFrameworkIfRequired;
- (void)handleTapToSetupFinished:(id)a0;

@end
