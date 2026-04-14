@interface HKNanoRegistryPairingAndSwitchingNotificationDataSource : HKObserverBridge

- (void)registerObserverForDevicePairingChanges:(id)a0 block:(id /* block */)a1;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (id)_pairingChangeNotifications;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (id)_notificationCenter;
- (void)unregisterObserverForDevicePairingChanges:(id)a0;

@end
