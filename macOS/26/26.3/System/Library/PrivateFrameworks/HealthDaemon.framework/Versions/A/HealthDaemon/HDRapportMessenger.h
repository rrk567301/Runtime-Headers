@class HKObserverSet, NSMutableDictionary, RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue;

@interface HDRapportMessenger : NSObject {
    RPCompanionLinkClient *_rapportClient;
    NSMutableDictionary *_observersBySchemaIdentifier;
    HKObserverSet *_deviceObservers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _lock_isNearbyDeviceSearchActive;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)nearbyDeviceLostWithIdentifier:(id)a0;
- (void)_handleIncomingRequest:(id)a0 idsIdentifier:(id)a1 responseHandler:(id /* block */)a2;
- (void)addNearbyDeviceObserver:(id)a0;
- (void)addObserver:(id)a0 forSchemaIdentifier:(long long)a1;
- (id)currentlyConnectedDeviceIDSIdentifiers;
- (id)initForCompanionDevice;
- (void)nearbyDeviceFoundWithIdentifier:(id)a0;
- (id)newRapportClient;
- (void)removeNearbyDeviceObserver:(id)a0;
- (void)removeObserver:(id)a0 forSchemaIdentifier:(long long)a1;
- (void)searchForNearbyDevices;
- (void)sendRequest:(id)a0 data:(id)a1 completion:(id /* block */)a2;

@end
