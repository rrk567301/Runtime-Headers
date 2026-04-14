@class NSDate, NSArray, NSXPCConnection, NSString, MRAVDistantEndpoint, NSObject, MRAVLocalEndpoint;
@protocol OS_dispatch_queue, MRActivityTracker;

@interface MRAVDistantRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRAVDistantRoutingDiscoveryClientProtocol> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    NSDate *_discoveryModeDate;
    NSArray *_distantEndpoints;
    NSArray *_distantOutputDevices;
    NSString *_routingContextUID;
    int _serviceResetNotifyToken;
    BOOL _hostedRoutingConnectionDidInitialize;
    NSDate *_hostedRoutingConnectionDate;
    NSArray *_notificationTokens;
    id<MRActivityTracker> _discoveryTracker;
}

@property (retain, nonatomic) NSXPCConnection *hostedRoutingSessionConnection;
@property (readonly, nonatomic) NSArray *distantEndpoints;
@property (readonly, nonatomic) NSArray *distantOutputDevices;
@property (retain, nonatomic) MRAVLocalEndpoint *localEndpoint;
@property (retain, nonatomic) MRAVDistantEndpoint *distantLocalEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceInterface;
+ (id)clientInterface;

- (unsigned int)discoveryMode;
- (BOOL)devicePresenceDetected;
- (id)routingContextUID;
- (void)setRoutingContextUID:(id)a0;
- (void)setDiscoveryMode:(unsigned int)a0;
- (void)dealloc;
- (id)availableEndpoints;
- (id)availableOutputDevices;
- (unsigned int)endpointFeatures;
- (void)_reloadAvailableDistantOutputDevices;
- (void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)a0;
- (void)_initializeHostedRoutingConnectionWithCompletion:(id /* block */)a0;
- (id)_resolveDistantEndpoints:(id)a0;
- (void)_notifyEndpointsChanged;
- (id)_resolveEndpoints:(id)a0;
- (void)_reloadAvailableDistantEndpoints;
- (void)availableOutputDevicesDidChange:(id)a0;
- (void)_reloadHostedRoutingServiceDiscoveryMode;
- (void)configurationWithCompletion:(id /* block */)a0;
- (void)availableEndpointsDidChange:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)_registerForPerRoutingContextNotifications;
- (void).cxx_destruct;
- (id)_hostedRoutingConnection;
- (void)_reloadAvailableDistantEndpointsWithEndpoints:(id)a0;

@end
