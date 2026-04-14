@interface AskToUI.ResponseUIFlowStore : NSObject <AskToUI.ResponseUIExtensionXPCProtocol> {
    void /* unknown type, empty encoding */ _connection;
    void /* unknown type, empty encoding */ _currentQuestion;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void).cxx_destruct;
- (id)init;
- (void)requestDismiss;
- (void)beginApprovalFlowWith:(id)a0 completion:(id /* block */)a1;

@end
