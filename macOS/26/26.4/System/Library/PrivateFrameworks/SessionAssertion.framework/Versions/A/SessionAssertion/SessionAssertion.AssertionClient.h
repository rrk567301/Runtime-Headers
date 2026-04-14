@interface SessionAssertion.AssertionClient : NSObject <SNAAssertionXPCClient> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ serverStartupToken;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ calloutQueue;
    void /* unknown type, empty encoding */ delegate;
}

- (void)didConnect;
- (void).cxx_destruct;
- (id)init;
- (void)didInvalidate:(id)a0;

@end
