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

+ (id)clientInterface;
+ (id)serviceInterface;

- (void)configurationWithCompletion:(id /* block */)a0;
- (void)setRoutingContextUID:(id)a0;
- (id)routingContextUID;
- (unsigned int)endpointFeatures;
- (void)_notifyEndpointsChanged;
- (unsigned int)discoveryMode;
- (id)availableOutputDevices;
- (void)setDiscoveryMode:(unsigned int)a0;
- (id)_resolveEndpoints:(id)a0;
- (void)_reloadAvailableDistantOutputDevices;
- (BOOL)devicePresenceDetected;
- (void)_initializeHostedRoutingConnectionWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_reloadHostedRoutingServiceDiscoveryMode;
- (id)availableEndpoints;
- (void)availableEndpointsDidChange:(id)a0;
- (void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)a0;
- (id)_hostedRoutingConnection;
- (void)availableOutputDevicesDidChange:(id)a0;
- (void)_reloadAvailableDistantEndpointsWithEndpoints:(id)a0;
- (id)_resolveDistantEndpoints:(id)a0;
- (void)_reloadAvailableDistantEndpoints;
- (void)_registerForPerRoutingContextNotifications;
- (id)initWithConfiguration:(id)a0;
- (void)dealloc;

@end
