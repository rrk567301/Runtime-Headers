@class NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlowDivertFlow : NENexusFlow {
    NSUUID *_clientID;
    NWEndpoint *_internalEndpoint;
    NWParameters *_internalParameters;
    struct _NEFlow { } *_flowDivertFlow;
}

- (id)parameters;
- (void)dealloc;
- (id)clientIdentifier;
- (id)endpoint;
- (void).cxx_destruct;

@end
