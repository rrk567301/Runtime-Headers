@interface SessionAssertion.AssertionClient : NSObject <SNAAssertionXPCClient> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ serverStartupToken;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ calloutQueue;
    void /* unknown type, empty encoding */ delegate;
}

- (id)init;
- (void)didInvalidate:(id)a0;
- (void)didConnect;
- (void).cxx_destruct;

@end
