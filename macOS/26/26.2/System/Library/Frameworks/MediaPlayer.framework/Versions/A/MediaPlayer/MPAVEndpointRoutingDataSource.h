@class NSMutableDictionary, NSString, MRAVRoutingDiscoverySession, MRAVRoutingDiscoverySessionConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource {
    MRAVRoutingDiscoverySession *_discoverySession;
    id _callbackToken;
    BOOL _didReceiveDiscoveryResults;
    unsigned int _targetSessionID;
}

@property (nonatomic) BOOL didReceiveDiscoveryResults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSMutableDictionary *endpoints;
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *discoverySessionConfiguration;
@property (copy, nonatomic) NSString *routingContextUID;
@property (nonatomic) BOOL suppressNotifications;

- (long long)discoveryMode;
- (void)setDiscoveryMode:(long long)a0;
- (BOOL)devicePresenceDetected;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (unsigned int)targetSessionID;
- (void)setTargetSessionID:(unsigned int)a0;
- (void)_clearDiscoverySessionCallback;
- (void)_endpointsDidChange:(id)a0;
- (void)_setDiscoverySessionCallback;
- (id)getRoutesForCategory:(id)a0;
- (id)initWithThrottlingEnabled:(BOOL)a0;
- (void)setPickedRoute:(id)a0 withPassword:(id)a1 completion:(id /* block */)a2;

@end
