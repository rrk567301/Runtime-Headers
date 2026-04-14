@class NSHashTable, NSString, EDMessagePersistence, NSTimer, EFXPCAlarm, EDQueryCreator, EFLocked, EDPersistenceHookRegistry, NSObject;
@protocol EDRemindMeNotificationControllerEventDelegate, OS_os_log, EDRemindMeNotificationControllerAlarmDateProvider, OS_dispatch_queue;

@interface EDRemindMeNotificationController : NSObject <EFLoggable, EDRemindMeNotificationControllerEventDelegate, EDMessageChangeHookResponder> {
    EFLocked *_observers;
    NSObject<OS_dispatch_queue> *_alarmQueue;
    id<EDRemindMeNotificationControllerAlarmDateProvider> _alarmDateProvider;
    EDPersistenceHookRegistry *_hookRegistry;
    EDMessagePersistence *_messagePersistence;
    EDQueryCreator *_readLaterQueryCreator;
    NSTimer *_remindMeTimer;
}

@property (class, readonly, nonatomic) NSString *localizedRemindMeNotificationTitle;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, weak, nonatomic) id<EDRemindMeNotificationControllerEventDelegate> eventDelegate;
@property (readonly, nonatomic) EFXPCAlarm *xpcAlarm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)test_tearDown;
- (void)persistenceDidDeleteMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidChangeReadLaterDate:(id)a0 messages:(id)a1 changeIsRemote:(BOOL)a2 generationWindow:(id)a3;
- (void)_remindMeTimerFired;
- (void)controller:(id)a0 scheduleAlarmForMessage:(id)a1 date:(id)a2;
- (id)initWithHookRegistry:(id)a0 messagePersistence:(id)a1 alarmScheduler:(id)a2;
- (id)initWithHookRegistry:(id)a0 messagePersistence:(id)a1 alarmDateProvider:(id)a2 eventDelegate:(id)a3 alarmScheduler:(id)a4;
- (void)test_waitForUpdates;
- (void)performDelayedTasks;
- (void)_updateAlarm;
- (void)_updateAlarmUpdatedMessages:(id)a0 readLaterDate:(id)a1;
- (id)_fetchMessagesToNotifyWithStartDate:(id)a0 endDate:(id)a1;
- (void)_alarmFired;
- (void)_notify:(id)a0;
- (void)resetRemindMeAlarmIfNeeded;

@end
