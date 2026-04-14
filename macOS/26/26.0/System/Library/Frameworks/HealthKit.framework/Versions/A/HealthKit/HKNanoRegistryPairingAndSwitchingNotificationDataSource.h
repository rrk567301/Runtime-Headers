@interface HKNanoRegistryPairingAndSwitchingNotificationDataSource : HKObserverBridge

- (id)_notificationCenter;
- (id)_pairingChangeNotifications;
- (void)unregisterObserverForDevicePairingChanges:(id)a0;
- (void)registerObserverForDevicePairingChanges:(id)a0 block:(id /* block */)a1;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;

@end
