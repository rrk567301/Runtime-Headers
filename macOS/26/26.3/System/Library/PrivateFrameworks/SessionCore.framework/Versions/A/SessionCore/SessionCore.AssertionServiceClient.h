@interface SessionCore.AssertionServiceClient : NSObject <SNAAssertionXPCClient, SNAAssertionXPCServer> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ assertionManager;
}

- (void)didInvalidate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didConnect;
- (id)acquire:(id)a0 error:(id *)a1;
- (BOOL)invalidate:(id)a0 error:(id *)a1;
- (id)reconnect:(id)a0 error:(id *)a1;

@end
