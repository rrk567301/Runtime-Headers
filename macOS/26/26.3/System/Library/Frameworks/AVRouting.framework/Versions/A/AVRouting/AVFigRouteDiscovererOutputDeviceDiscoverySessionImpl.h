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

- (id)initWithFigRouteDiscovererCreator:(id /* block */)a0;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)a0 forClientIdentifiers:(id)a1;
- (id)init;
- (void)_availableRoutesChanged;
- (void)_routePresentChanged;
- (void)outputDeviceDiscoverySessionBluetoothOnlyDiscoveryDidChange:(id)a0;
- (void)_serverDied;
- (void).cxx_destruct;
- (void)_availableGroupsChanged;
- (void)dealloc;
- (void)outputDeviceDiscoverySessionFastDiscoveryDidChange:(id)a0;
- (void)outputDeviceDiscoverySessionCachedDiscoveryDidChange:(id)a0;
- (void)_endpointDescriptorChanged;

@end
