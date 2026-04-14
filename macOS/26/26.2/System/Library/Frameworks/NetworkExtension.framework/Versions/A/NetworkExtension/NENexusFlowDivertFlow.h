@class NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlowDivertFlow : NENexusFlow {
    NSUUID *_clientID;
    NWEndpoint *_internalEndpoint;
    NWParameters *_internalParameters;
    struct _NEFlow { } *_flowDivertFlow;
}

- (id)endpoint;
- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)parameters;
- (void)dealloc;

@end
