@class MRAVRoutingDiscoverySessionConfiguration;

@interface MRSetDiscoveryModeMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned int mode;
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *configuration;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;
- (id)initWithMode:(unsigned int)a0 configuration:(id)a1;
- (id)initWithMode:(unsigned int)a0 features:(unsigned int)a1;

@end
