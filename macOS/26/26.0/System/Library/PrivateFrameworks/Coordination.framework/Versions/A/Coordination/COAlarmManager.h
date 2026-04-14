@class NSString, COObserverSet, NSXPCConnection, HMAccessory, COHomeKitAccessoryMemento, NSUUID, DTTimerClient;
@protocol COAlarmManagerConnectionProvider;

@interface COAlarmManager : NSObject <COAlarmManagerClientInterface, COObservable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HMAccessory *accessory;
@property (weak, nonatomic) NSXPCConnection *lastConnection;
@property (retain, nonatomic) DTTimerClient *dtClient;
@property (nonatomic) BOOL dtMonitoring;
@property (nonatomic) BOOL canDispatch;
@property (readonly, nonatomic) id<COAlarmManagerConnectionProvider> provider;
@property (readonly, nonatomic) COObserverSet *observers;
@property (readonly, copy, nonatomic) COHomeKitAccessoryMemento *memento;
@property (readonly, nonatomic) NSUUID *instanceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateCanDispatch;
- (id)addAlarm:(id)a0;
- (void)postNotificationName:(id)a0 withUserInfo:(id)a1 callback:(id /* block */)a2;
- (id)dismissAlarmWithIdentifier:(id)a0;
- (id)updateAlarm:(id)a0;
- (BOOL)_canDispatchForAssociatedAccessory;
- (id)snoozeAlarmWithIdentifier:(id)a0;
- (id)initWithConnectionProvider:(id)a0 distributedTimersClient:(id)a1;
- (id)initForAccessory:(id)a0 withConnectionProvider:(id)a1;
- (id)addObserverForName:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)_withLock:(id /* block */)a0;
- (id)removeAlarm:(id)a0;
- (void)_lostConnectionToService;
- (id)alarmsForAccessory:(id)a0;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (id)alarms;
- (void)_updateMonitoring;
- (id)alarmsIncludingSleepAlarm:(BOOL)a0;
- (void)_activateDistributedTimersMonitoring;
- (void)_handleNotification:(id)a0;
- (void)_handleDTTimerClientEvent:(long long)a0 dtTimer:(id)a1;
- (id)_dispatchOpWithName:(id)a0 forAlarm:(id)a1 distributedTimers:(id /* block */)a2 coordination:(id /* block */)a3;
- (void)dealloc;
- (id)_categoryTypeForAlarm:(id)a0;
- (id)alarmsForAccessoryMementos:(id)a0;
- (void)_emitNotificationForName:(id)a0 alarm:(id)a1;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)_registerObserverWithName:(id)a0;
- (id)alarmsForAccessories:(id)a0;
- (id)_alarmsForAccessory:(id)a0 includingSleepAlarm:(BOOL)a1;
- (id)initWithConnectionProvider:(id)a0;
- (void).cxx_destruct;

@end
