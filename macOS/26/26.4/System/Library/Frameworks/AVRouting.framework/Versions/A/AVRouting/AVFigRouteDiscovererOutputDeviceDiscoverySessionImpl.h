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

- (void)outputDeviceDiscoverySessionBluetoothOnlyDiscoveryDidChange:(id)a0;
- (id)initWithFigRouteDiscovererCreator:(id /* block */)a0;
- (void)_serverDied;
- (void)outputDeviceDiscoverySessionFastDiscoveryDidChange:(id)a0;
- (void)_routePresentChanged;
- (void)_availableRoutesChanged;
- (void).cxx_destruct;
- (void)_availableGroupsChanged;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)a0 forClientIdentifiers:(id)a1;
- (id)init;
- (void)outputDeviceDiscoverySessionCachedDiscoveryDidChange:(id)a0;
- (void)dealloc;
- (void)_endpointDescriptorChanged;

@end
