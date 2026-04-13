@class NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlowDivertFlow : NENexusFlow

@property (retain) NSUUID *clientID;
@property (retain) NWEndpoint *internalEndpoint;
@property (retain) NWParameters *internalParameters;
@property struct _NEFlow { } *flowDivertFlow;

- (void)dealloc;
- (void).cxx_destruct;
- (id)endpoint;
- (id)parameters;
- (id)clientIdentifier;
- (id)initWithFlowDivertFlow:(struct _NEFlow { } *)a0;

@end
