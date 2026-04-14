@interface _TtC9libfssyncP33_7F4FBB69DAA1D0B2DA22684CBB0F5CB320ProxyOperationClient : NSObject <FPOperationClient> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ idMap;
}

- (id)init;
- (void).cxx_destruct;
- (void)setCancellationHandler:(id)a0;
- (void)cancel;
- (void)operationDidProgressWithInfo:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (id)proxifiedDescription;

@end
