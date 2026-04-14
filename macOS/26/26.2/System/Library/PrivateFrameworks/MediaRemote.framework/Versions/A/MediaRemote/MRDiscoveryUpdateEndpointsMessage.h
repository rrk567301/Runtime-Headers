@class NSArray, MRAVRoutingDiscoverySessionConfiguration;

@interface MRDiscoveryUpdateEndpointsMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *endpoints;
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *configuration;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;
- (id)initWithEndpoints:(id)a0 configuration:(id)a1;

@end
