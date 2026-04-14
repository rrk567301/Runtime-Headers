@class NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlowDivertFlow : NENexusFlow {
    NSUUID *_clientID;
    NWEndpoint *_internalEndpoint;
    NWParameters *_internalParameters;
    struct _NEFlow { } *_flowDivertFlow;
}

- (id)clientIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (id)endpoint;
- (id)parameters;

@end
