@interface SessionCore.AssertionServiceClient : NSObject <SNAAssertionXPCClient, SNAAssertionXPCServer> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ assertionManager;
}

- (void)didConnect;
- (void).cxx_destruct;
- (id)init;
- (void)didInvalidate:(id)a0;
- (id)acquire:(id)a0 error:(id *)a1;
- (BOOL)invalidate:(id)a0 error:(id *)a1;
- (id)reconnect:(id)a0 error:(id *)a1;

@end
