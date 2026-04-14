@class NSArray, NSString, NSXPCConnection, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVDistantRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRAVDistantRoutingDiscoveryClientProtocol> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    NSDate *_discoveryModeDate;
    BOOL _enableThrottling;
    NSArray *_distantEndpoints;
    NSArray *_distantOutputDevices;
    NSString *_routingContextUID;
    int _serviceResetNotifyToken;
    BOOL _hostedRoutingConnectionDidInitialize;
    NSDate *_hostedRoutingConnectionDate;
}

@property (retain, nonatomic) NSXPCConnection *hostedRoutingSessionConnection;
@property (retain, nonatomic) NSArray *distantEndpoints;
@property (retain, nonatomic) NSArray *distantOutputDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serviceInterface;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)routingContextUID;
- (void)setDiscoveryMode:(unsigned int)a0;
- (id)availableOutputDevices;
- (BOOL)devicePresenceDetected;
- (unsigned int)discoveryMode;
- (id)_hostedRoutingConnection;
- (void)_initializeHostedRoutingConnectionWithCompletion:(id /* block */)a0;
- (void)_reloadAvailableDistantEndpoints;
- (void)_reloadAvailableDistantEndpointsWithEndpoints:(id)a0;
- (void)_reloadAvailableDistantOutputDevices;
- (void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)a0;
- (void)_reloadHostedRoutingServiceDiscoveryMode;
- (BOOL)_shouldAddLocalEndpoint;
- (id)availableEndpoints;
- (void)availableEndpointsDidChange:(id)a0;
- (void)availableOutputDevicesDidChange:(id)a0;
- (unsigned int)endpointFeatures;
- (void)setRoutingContextUID:(id)a0;

@end
