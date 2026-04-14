@interface _TtCE19ExtensionFoundationCSo18_EXNSExtensionShim14Implementation : NSObject <_EXNSExtensionShimImplementation> {
    void /* unknown type, empty encoding */ identity;
    void /* unknown type, empty encoding */ completionBlock;
    void /* unknown type, empty encoding */ cancellationBlock;
    void /* unknown type, empty encoding */ interruptionBlock;
    void /* unknown type, empty encoding */ requestsLock;
    void /* unknown type, empty encoding */ requests;
    void /* unknown type, empty encoding */ _process;
}

- (void)cancelExtensionRequestWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)beginExtensionRequest:(id)a0 completion:(id /* block */)a1;
- (id)beginExtensionRequest:(id)a0 error:(id *)a1;

@end
