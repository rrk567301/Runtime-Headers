@class NSString, AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVOutputDeviceDiscoverySession, AVWeakReference;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionImpl : NSObject <AVOutputDeviceDiscoverySessionImpl> {
    id /* block */ _routeDiscovererCreator;
    struct OpaqueAPSyncController { } *_syncController;
    AVWeakReference *_weakObserver;
}

@property (readonly, nonatomic) struct OpaqueFigRouteDiscoverer { } *routeDiscoverer;
@property (weak) AVOutputDeviceDiscoverySession *parentOutputDeviceDiscoverySession;
@property (readonly, nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (readonly, nonatomic) BOOL devicePresenceDetected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_serverDied;
- (id)initWithFigRouteDiscovererCreator:(id /* block */)a0 syncController:(struct OpaqueAPSyncController { } *)a1;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)a0;
- (void)_availableRoutesChanged;
- (void)_availableGroupsChanged;
- (void)_routePresentChanged;

@end
