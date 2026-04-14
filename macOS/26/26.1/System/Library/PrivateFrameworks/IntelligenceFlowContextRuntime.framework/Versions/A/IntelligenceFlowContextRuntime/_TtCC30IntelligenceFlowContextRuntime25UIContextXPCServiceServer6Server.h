@interface _TtCC30IntelligenceFlowContextRuntime25UIContextXPCServiceServer6Server : NSObject <LXUIContextXPCProtocol> {
    void /* unknown type, empty encoding */ retriever;
    void /* unknown type, empty encoding */ encoder;
    void /* unknown type, empty encoding */ decoder;
}

- (void).cxx_destruct;
- (id)init;
- (void)retrieveElementHierarchyWithVerbose:(BOOL)a0 args:(id)a1 with:(id /* block */)a2;
- (void)retrieveOnScreenContentWithParameters:(id)a0 with:(id /* block */)a1;
- (void)retrieveUIContextElementsWithOptions:(id)a0 with:(id /* block */)a1;
- (void)retrieveUIElementsWithOptions:(id)a0 with:(id /* block */)a1;

@end
