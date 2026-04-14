@interface AskToUI.ResponseUIFlowStore : NSObject <AskToUI.ResponseUIExtensionXPCProtocol> {
    void /* unknown type, empty encoding */ _connection;
    void /* unknown type, empty encoding */ _currentQuestion;
    void /* unknown type, empty encoding */ _payload;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (id)init;
- (void).cxx_destruct;
- (void)requestDismiss;
- (void)beginFlowWithPayload:(id)a0 completion:(id /* block */)a1;
- (void)didCompleteDismissalWithCompletion:(id /* block */)a0;

@end
