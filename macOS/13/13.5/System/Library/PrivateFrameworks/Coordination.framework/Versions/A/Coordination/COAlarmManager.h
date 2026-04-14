@class COObserverSet, NSXPCConnection, HMAccessory, NSUUID, NSString;
@protocol COAlarmManagerConnectionProvider;

@interface COAlarmManager : NSObject <COAlarmManagerClientInterface, COObservable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HMAccessory *accessory;
@property (weak, nonatomic) NSXPCConnection *lastConnection;
@property (readonly, nonatomic) id<COAlarmManagerConnectionProvider> provider;
@property (readonly, nonatomic) COObserverSet *observers;
@property (readonly, copy, nonatomic) id cluster;
@property (readonly, nonatomic) NSUUID *instanceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)addAlarm:(id)a0;
- (id)alarms;
- (id)removeAlarm:(id)a0;
- (id)initWithConnectionProvider:(id)a0;
- (void)_handleNotification:(id)a0;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (id)alarmsIncludingSleepAlarm:(BOOL)a0;
- (id)dismissAlarmWithIdentifier:(id)a0;
- (id)updateAlarm:(id)a0;
- (id)_alarmsForAccessoryUniqueIdentifier:(id)a0 categoryType:(id)a1 includingSleepAlarm:(BOOL)a2;
- (BOOL)_canDispatchForAssociatedAccessory;
- (id)_categoryTypeForAlarm:(id)a0;
- (void)_lostConnectionToService;
- (void)_registerObserverWithName:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (id)addObserverForName:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (id)alarmsForAccessories:(id)a0;
- (id)alarmsForAccessory:(id)a0;
- (id)initForAccessory:(id)a0 withConnectionProvider:(id)a1;
- (void)postNotificationName:(id)a0 withUserInfo:(id)a1 callback:(id /* block */)a2;
- (id)snoozeAlarmWithIdentifier:(id)a0;

@end
