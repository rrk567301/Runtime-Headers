@class _HKBehavior, NSString, NSObject, HDFastPassBackgroundTask, HDCloudSyncPlatformConfiguration, HDCloudSyncCoordinator, HDRepeatingBackgroundTask;
@protocol OS_dispatch_queue;

@interface HDCloudSyncPeriodicActivityScheduler : NSObject <HDHealthDaemonReadyObserver> {
    HDCloudSyncCoordinator *_coordinator;
    _HKBehavior *_behavior;
    NSObject<OS_dispatch_queue> *_queue;
    HDRepeatingBackgroundTask *_userRequestedBackupTask;
    HDFastPassBackgroundTask *_initialSyncTask;
}

@property (retain, nonatomic) HDRepeatingBackgroundTask *periodicSyncTask;
@property (readonly, nonatomic) HDCloudSyncPlatformConfiguration *platformConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerDisabledPeriodicActivitiesForUnsupportedDaemon:(id)a0;
+ (void)setupTaskGroupForRequest:(id)a0;

- (void)daemonReady:(id)a0;
- (void).cxx_destruct;
- (BOOL)cellularThresholdPassed;
- (void)disablePeriodicActivities;
- (id)initWithCoordinator:(id)a0 behavior:(id)a1;
- (long long)periodicActivityErrorCount;
- (void)setupPeriodicActivities;
- (id)syncContextForBackgroundTask:(id)a0 periodicSyncType:(long long)a1;
- (void)unitTest_performPeriodicSyncWithCompletion:(id /* block */)a0;
- (void)updatePeriodicActivitesWithResult:(long long)a0 minimumRetryInterval:(double)a1 error:(id)a2;
- (void)updatePeriodicActivitiesWithSyncSuccess:(BOOL)a0;
- (void)updatePeriodicActivityCriteria;

@end
