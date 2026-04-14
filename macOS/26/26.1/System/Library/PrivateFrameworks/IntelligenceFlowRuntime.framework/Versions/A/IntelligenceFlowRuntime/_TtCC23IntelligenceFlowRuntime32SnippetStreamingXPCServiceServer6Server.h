@interface _TtCC23IntelligenceFlowRuntime32SnippetStreamingXPCServiceServer6Server : NSObject <LXSnippetStreamingXPCProtocol> {
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
    void /* unknown type, empty encoding */ decoder;
    void /* unknown type, empty encoding */ checkedInStreamProof;
    void /* unknown type, empty encoding */ clientProxy;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)checkInParameters:(id)a0 reply:(id /* block */)a1;
- (void)postWithUpdate:(id)a0 reply:(id /* block */)a1;

@end
