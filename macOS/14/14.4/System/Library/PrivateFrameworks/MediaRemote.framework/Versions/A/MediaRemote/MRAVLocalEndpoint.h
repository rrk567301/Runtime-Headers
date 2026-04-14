@class MRAVRoutingDiscoverySession;

@interface MRAVLocalEndpoint : MRAVOutputContextEndpoint

@property (readonly, nonatomic) MRAVRoutingDiscoverySession *audioDiscoverySession;

+ (id)sharedLocalEndpoint;
+ (id)sharedLocalEndpointForRoutingContextWithUID:(id)a0;

- (id)deviceInfo;
- (id)groupLeader;
- (id)groupSessionInfo;
- (void)handleActiveGroupSessionDidChangeNotification:(id)a0;

@end
