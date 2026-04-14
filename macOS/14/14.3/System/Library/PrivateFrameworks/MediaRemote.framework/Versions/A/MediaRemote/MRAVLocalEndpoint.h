@class MRAVRoutingDiscoverySession;

@interface MRAVLocalEndpoint : MRAVOutputContextEndpoint

@property (readonly, nonatomic) MRAVRoutingDiscoverySession *audioDiscoverySession;

+ (id)sharedLocalEndpoint;
+ (id)sharedLocalEndpointForRoutingContextWithUID:(id)a0;

- (id)deviceInfo;
- (id)groupLeader;
- (id)groupSessionInfo;
- (void)handleLocalGroupSessionDidChangeNotification:(id)a0;

@end
