@class MRAVRoutingDiscoverySession, NSString, MRGroupSessionEligibilityMonitor;

@interface MRAVLocalEndpoint : MRAVOutputContextEndpoint <MRGroupSessionEligibilityObserver>

@property (class, readonly, nonatomic) MRAVLocalEndpoint *sharedSystemAudioLocalEndpoint;

@property (readonly, nonatomic) MRAVRoutingDiscoverySession *audioDiscoverySession;
@property (readonly, nonatomic) MRGroupSessionEligibilityMonitor *groupSessionEligibilityMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedLocalEndpointForRoutingContextWithUID:(id)a0;
+ (id)sharedLocalEndpoint;

- (id)groupSessionInfo;
- (BOOL)groupContainsDiscoverableGroupLeader;
- (void)requestGroupSessionWithDetails:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)setCarPlayVideoActive:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)isEligibleForHostingGroupSessionExcludingAcknowledgements;
- (BOOL)canModifyGroupMembership;
- (void)createHostedEndpointWithOutputDeviceUIDs:(id)a0 details:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)createHostedEndpointWithOutputDeviceUIDs:(id)a0 details:(id)a1 queue:(id)a2 groupUIDCompletion:(id /* block */)a3;
- (void)groupSessionMonitor:(id)a0 statusDidChangeFrom:(id)a1 to:(id)a2;
- (id)groupLeader;
- (void)handleActiveGroupSessionDidChangeNotification:(id)a0;

@end
