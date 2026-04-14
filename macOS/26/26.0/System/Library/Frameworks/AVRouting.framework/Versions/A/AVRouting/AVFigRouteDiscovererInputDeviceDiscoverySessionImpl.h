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

- (void)_routePresentChanged;
- (void)dealloc;
- (id)initWithFigRouteDiscovererCreator:(id /* block */)a0;
- (void)_availableRoutesChanged;
- (void)_endpointDescriptorChanged;
- (id)init;
- (void)_serverDied;
- (void).cxx_destruct;
- (void)inputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)a0 forClientIdentifiers:(id)a1;

@end
