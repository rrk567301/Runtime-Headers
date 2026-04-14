@class NSString, AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVOutputDeviceDiscoverySession, AVRoutingWeakReference;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionImpl : NSObject <AVOutputDeviceDiscoverySessionImpl> {
    id /* block */ _routeDiscovererCreator;
    AVRoutingWeakReference *_weakObserver;
}

@property (readonly, nonatomic) struct OpaqueFigRouteDiscoverer { } *routeDiscoverer;
@property (weak) AVOutputDeviceDiscoverySession *parentOutputDeviceDiscoverySession;
@property (readonly, nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (readonly, nonatomic) BOOL devicePresenceDetected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_serverDied;
- (void)_routePresentChanged;
- (void)outputDeviceDiscoverySessionBluetoothOnlyDiscoveryDidChange:(id)a0;
- (void)_availableGroupsChanged;
- (void)outputDeviceDiscoverySessionFastDiscoveryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_availableRoutesChanged;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)a0 forClientIdentifiers:(id)a1;
- (void)_endpointDescriptorChanged;
- (id)init;
- (id)initWithFigRouteDiscovererCreator:(id /* block */)a0;
- (void)outputDeviceDiscoverySessionCachedDiscoveryDidChange:(id)a0;
- (void)dealloc;

@end
