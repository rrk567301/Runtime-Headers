@class NSTimer, NSString, NSDate, CADSequenceToken, EKTimedEventStorePurger, NSObject, RTRoutineManager, NSDateFormatter;
@protocol OS_dispatch_queue;

@interface _EKAlarmEngine : NSObject <CLLocationManagerDelegate> {
    CADSequenceToken *_lastDBSequenceToken;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDate *_nextFireDate;
    NSDate *_lastCheckpoint;
    BOOL _populating;
    NSDate *_populateStart;
    NSTimer *_syncTimer;
    BOOL _pendingChanges;
    BOOL _needsAlarmTablePopulation;
    NSDateFormatter *_dateFormatter;
    RTRoutineManager *_routineManager;
    NSDate *_tomorrow;
    BOOL _shouldUpdateWithForceForAlarmTable;
    EKTimedEventStorePurger *_timedEventStorePurger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)requestedDarwinNotifications;

- (id)_dateFormatter;
- (void)receivedAlarmNamed:(id)a0;
- (void)_timerFired;
- (void)_protectedDataDidBecomeAvailable;
- (void)didRegisterForAlarms;
- (void)_notifyAlarmsFired:(id)a0;
- (void)_syncDidEnd;
- (void)start;
- (void)dealloc;
- (void)_databaseChanged;
- (void)_rescheduleTimer;
- (void)_populateFinished;
- (BOOL)_haveAlarmsChanged:(id)a0;
- (void)_updateWithForceForAlarmTable:(BOOL)a0;
- (void)_installTimerWithFireDate:(id)a0;
- (void)_simulatedOffsetChanged:(id)a0;
- (void)_calendarNotificationSettingChanged;
- (void)_resetSyncTimer;
- (void)_globalAlarmPreferencesChanged;
- (id)_alertInfoAlarmIDFromEKAlarm:(id)a0;
- (BOOL)_populateAlarmTable:(id)a0;
- (id)init;
- (void)_killSyncTimer;
- (void)_storeAlarms:(id)a0 nextScheduleLimit:(id)a1 eventStore:(id)a2;
- (BOOL)_isAlarmAcknowledgedWithAcknowledgedDate:(id)a0 fireDate:(id)a1;
- (BOOL)_isDataProtected;
- (void)handleDarwinNotification:(id)a0;
- (void)_timeDidChangeSignificantly;
- (void)_timeZoneChanged:(id)a0;
- (id)_alertInfoAlarmIDFromSideAlarm:(id)a0;
- (void)_killTimer;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)a0;
- (void).cxx_destruct;
- (id)_eventStore;

@end
