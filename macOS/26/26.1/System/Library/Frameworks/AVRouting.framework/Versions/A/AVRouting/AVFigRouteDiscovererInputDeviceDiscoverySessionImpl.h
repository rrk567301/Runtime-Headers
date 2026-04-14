@class NSArray, AVInputDevice, NSString, AVRoutingWeakReference, AVInputDeviceDiscoverySession;

@interface AVFigRouteDiscovererInputDeviceDiscoverySessionImpl : NSObject <AVInputDeviceDiscoverySessionImpl> {
    id /* block */ _routeDiscovererCreator;
    AVRoutingWeakReference *_weakObserver;
}

@property (readonly, nonatomic) struct OpaqueFigRouteDiscoverer { } *routeDiscoverer;
@property (weak) AVInputDeviceDiscoverySession *parentInputDeviceDiscoverySession;
@property (readonly, nonatomic) NSArray *availableInputDevices;
@property (readonly, nonatomic) BOOL devicePresenceDetected;
@property (readonly, nonatomic) AVInputDevice *fallbackInputDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_endpointDescriptorChanged;
- (id)initWithFigRouteDiscovererCreator:(id /* block */)a0;
- (void)_serverDied;
- (void)dealloc;
- (void)_routePresentChanged;
- (void).cxx_destruct;
- (void)_availableRoutesChanged;
- (id)init;
- (void)inputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)a0 forClientIdentifiers:(id)a1;
- (void)inputDeviceDiscoverySessionFastDiscoveryDidChange:(id)a0;

@end
