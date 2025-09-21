@class NSString, COSignalsClientObserverSet;

@interface COTimerService : COService <COTimerManagerServiceInterface, COMeshTimerAddOnDelegate>

@property (readonly, nonatomic) COSignalsClientObserverSet *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isAllowedClient:(id)a0;
+ (id)serviceWithDelegate:(id)a0;

- (void)timerAddOn:(id)a0 didChangeTimers:(id)a1;
- (void)didChangeCompositionForTimerAddOn:(id)a0;
- (id)_newClientForConnection:(id)a0;
- (void)updateTimer:(id)a0 asAccessory:(id)a1 withCallback:(id /* block */)a2;
- (void)_didStopCanDispatchUpdate:(id)a0;
- (void)_didResetTimerAddOn:(id)a0;
- (void)removeObserverForNotificationName:(id)a0 asAccessory:(id)a1 withCallback:(id /* block */)a2;
- (void)timersAsAccessory:(id)a0 forAccessories:(id)a1 callback:(id /* block */)a2;
- (void)_postNotificationName:(id)a0 forAccessory:(id)a1 toAddOn:(id)a2;
- (void)timersAsAccessory:(id)a0 asInstance:(id)a1 withCallback:(id /* block */)a2;
- (void)_postNotificationName:(id)a0 forTimers:(id)a1 toAddOn:(id)a2 requiresUserInfo:(BOOL)a3;
- (void)timerAddOn:(id)a0 didAddTimers:(id)a1;
- (void)_postCanDispatchChanged:(BOOL)a0 forAccessory:(id)a1 toObserver:(id)a2;
- (void)removeTimer:(id)a0 asAccessory:(id)a1 withCallback:(id /* block */)a2;
- (void)dismissTimerWithIdentifier:(id)a0 asAccessory:(id)a1 withCallback:(id /* block */)a2;
- (void)_addOnAdded:(id)a0;
- (BOOL)_applicableToCluster:(id)a0;
- (void)timerAddOn:(id)a0 didRemoveTimers:(id)a1;
- (void)_completeDispatchabilityStallActivity:(id)a0;
- (void)didResetTimerAddOn:(id)a0;
- (void)_addOnRemoved:(id)a0;
- (void)timerAddOn:(id)a0 didFireTimers:(id)a1;
- (id)initWithListenerProvider:(id)a0 addOnProvider:(id)a1 delegate:(id)a2;
- (void)addTimer:(id)a0 asAccessory:(id)a1 asInstance:(id)a2 withCallback:(id /* block */)a3;
- (void)_postCanDispatchChangedAddOn:(id)a0;
- (void)timerAddOn:(id)a0 didDismissTimers:(id)a1;
- (void)timerAddOn:(id)a0 didUpdateTimers:(id)a1;
- (void)canDispatchAsAccessory:(id)a0 asInstance:(id)a1 reply:(id /* block */)a2;
- (void)_postNotificationName:(id)a0 connection:(id)a1 userInfo:(id)a2;
- (void)timerAddOn:(id)a0 resetAccesory:(id)a1;
- (void)_clientLost:(id)a0;
- (void)_configureServiceInterfacesOnConnection:(id)a0;
- (void).cxx_destruct;
- (void)addObserverForNotificationName:(id)a0 asAccessory:(id)a1 asInstance:(id)a2 constraints:(id)a3 withCallback:(id /* block */)a4;

@end
