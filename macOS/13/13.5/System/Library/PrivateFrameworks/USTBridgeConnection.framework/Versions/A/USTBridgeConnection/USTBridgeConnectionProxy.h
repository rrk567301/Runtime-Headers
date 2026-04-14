@interface USTBridgeConnectionProxy : NSObject <USTBridgeConnectionProxyDefinition> {
    void /* unknown type, empty encoding */ connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleRequestCancelledWithRequestId:(id)a0 withBridgeDelegate:(id)a1 completion:(id /* block */)a2;
- (void)handleRequestCompletedWithRequestId:(id)a0 withBridgeDelegate:(id)a1 completion:(id /* block */)a2;
- (void)handleStartTestSpeechRequestWithRequestId:(id)a0 withBridgeDelegate:(id)a1 completion:(id /* block */)a2;

@end
