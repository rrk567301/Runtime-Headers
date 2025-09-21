@class NSString, HDProfile, NSMapTable, NSDate, NSObject, HDXPCAlarm;
@protocol OS_dispatch_queue;

@interface HDRestorableAlarmScheduler : NSObject <HDDiagnosticObject, HDDatabaseProtectedDataObserver, HDProfileReadyObserver, HDRestorableAlarmSchedulerProtocol> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    int _significantTimeChangeNotificationToken;
    NSMapTable *_clients;
    char _hasInitializedSystemScheduler;
    char _maintenanceOperationQueued;
    char _needsMaintenanceNotifyAndSchedule;
    char _needsLockStateUpdates;
    char _isDeviceOnWrist;
}

@property (copy, nonatomic) NSDate *_unitTest_currentDate;
@property (readonly, nonatomic) char isRegisteredForOnWristUpdates;
@property (readonly, nonatomic) char isRegisteredForLockStateUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HDXPCAlarm *systemScheduler;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)addAlarm:(id)a0;
- (void)removeAlarm:(id)a0;
- (char)removeEvents:(id)a0 error:(id *)a1;
- (id)diagnosticDescription;
- (void)checkForDueEventsImmediatelyWithCompletion:(id /* block */)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(char)a1;
- (void)profileDidBecomeReady:(id)a0;
- (char)removeAllEventsWithClientIdentifier:(id)a0 error:(id *)a1;
- (id)replaceAllScheduledEventsWithClientIdentifier:(id)a0 newEvents:(id)a1 error:(id *)a2;
- (char)scheduleEvents:(id)a0 error:(id *)a1;
- (id)scheduledEventsForClientIdentifier:(id)a0 error:(id *)a1;

@end
