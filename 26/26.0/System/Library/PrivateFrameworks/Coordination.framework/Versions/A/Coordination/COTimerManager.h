@class NSString, COObserverSet, NSXPCConnection, HMAccessory, COHomeKitAccessoryMemento, NSUUID, DTTimerClient;
@protocol COTimerManagerConnectionProvider;

@interface COTimerManager : NSObject <COTimerManagerClientInterface, COObservable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HMAccessory *accessory;
@property (weak, nonatomic) NSXPCConnection *lastConnection;
@property (retain, nonatomic) DTTimerClient *dtClient;
@property (nonatomic) BOOL dtMonitoring;
@property (nonatomic) BOOL canDispatch;
@property (readonly, nonatomic) id<COTimerManagerConnectionProvider> provider;
@property (readonly, nonatomic) COObserverSet *observers;
@property (readonly, copy, nonatomic) id cluster;
@property (readonly, copy, nonatomic) COHomeKitAccessoryMemento *memento;
@property (readonly, nonatomic) NSUUID *instanceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateCanDispatch;
- (void)postNotificationName:(id)a0 withUserInfo:(id)a1 callback:(id /* block */)a2;
- (BOOL)_canDispatchForAssociatedAccessory;
- (id)initWithConnectionProvider:(id)a0 distributedTimersClient:(id)a1;
- (id)initForAccessory:(id)a0 withConnectionProvider:(id)a1;
- (id)addObserverForName:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)_withLock:(id /* block */)a0;
- (id)dismissTimerWithIdentifier:(id)a0;
- (void)_lostConnectionToService;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (void)_updateMonitoring;
- (void)_activateDistributedTimersMonitoring;
- (id)addTimer:(id)a0;
- (void)_handleNotification:(id)a0;
- (void)_handleDTTimerClientEvent:(long long)a0 dtTimer:(id)a1;
- (void)dealloc;
- (id)removeTimer:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_emitNotificationForName:(id)a0 timer:(id)a1;
- (id)timersForAccessoryMementos:(id)a0;
- (id)init;
- (void)_registerObserverWithName:(id)a0;
- (id)updateTimer:(id)a0;
- (id)timers;
- (id)_timersForAccessory:(id)a0;
- (id)timersForAccessory:(id)a0;
- (id)timersForAccessories:(id)a0;
- (id)_sendRequestWithName:(id)a0 forTimer:(id)a1 distributedTimers:(id /* block */)a2 coordination:(id /* block */)a3;
- (id)initWithConnectionProvider:(id)a0;
- (void).cxx_destruct;

@end
