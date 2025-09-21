@class NSMutableDictionary, HKNanoRegistryPairingAndSwitchingNotificationDataSource;

@interface HKWatchAppInstallationDataSource : HKObserverBridge {
    NSMutableDictionary *_watchAppInstallationManagersByBundleIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _watchAppInstallationManagersLock;
}

@property (readonly, nonatomic) HKNanoRegistryPairingAndSwitchingNotificationDataSource *devicePairingAndSwitchingDataSource;

- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (id)init;
- (id)isWatchAppInstalledWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (void).cxx_destruct;
- (id)_populateManagersDictionaryForBundleIdentifier:(id)a0;
- (void)addWatchAppInstallationManager:(id)a0 forBundleIdentifier:(id)a1;
- (id)initWithDevicePairingAndSwitchingNotificationDataSource:(id)a0;
- (id)watchAppInstallationManagerForBundleIdentifier:(id)a0;

@end
