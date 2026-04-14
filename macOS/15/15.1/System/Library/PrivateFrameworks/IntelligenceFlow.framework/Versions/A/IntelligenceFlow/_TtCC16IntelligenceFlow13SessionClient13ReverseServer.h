@interface _TtCC16IntelligenceFlow13SessionClient13ReverseServer : _TtCs12_SwiftObject <LXSessionXPCClientProtocol> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ subscribers;
    void /* unknown type, empty encoding */ invalidSubscribers;
    void /* unknown type, empty encoding */ invalidated;
    void /* unknown type, empty encoding */ jsonDecoder;
    void /* unknown type, empty encoding */ transactionHook;
}

- (void)connectionClosedWith:(id /* block */)a0;
- (void)runTransactionHookWithSessionId:(id)a0 transaction:(id)a1 with:(id /* block */)a2;
- (void)sendWithMessageData:(id)a0 with:(id /* block */)a1;

@end
