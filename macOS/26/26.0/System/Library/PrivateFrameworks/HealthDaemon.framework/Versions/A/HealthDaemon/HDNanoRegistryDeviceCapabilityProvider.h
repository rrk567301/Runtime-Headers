@class HKObserverSet;

@interface HDNanoRegistryDeviceCapabilityProvider : NSObject <HDPairedDeviceCapabilityProviding> {
    int _pairedDeviceDidChangeCapabilitiesNotificationToken;
    HKObserverSet *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_isListeningForUpdates;
    id /* block */ _activePairedDeviceProvider;
}

- (void)unregisterObserver:(id)a0;
- (void)dealloc;
- (id)init;
- (void)_pairedOrActiveDevicesDidChange:(id)a0;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)initWithActivePairedDeviceProvider:(id /* block */)a0;
- (id)isCapabilitySupportedOnActivePairedDevice:(id)a0 error:(id *)a1;

@end
