@interface AskToUI.SendRequestFlowStore : NSObject <AskToUI.ApexSendAskToQuestionFlowXPCProtocol> {
    void /* unknown type, empty encoding */ _messageComposeRequestTask;
    void /* unknown type, empty encoding */ _messageAlertContent;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ _connectedClientVerifier;
    void /* unknown type, empty encoding */ _daemonConnectionManager;
    void /* unknown type, empty encoding */ contactStore;
    void /* unknown type, empty encoding */ downtimeContainerFetcher;
    void /* unknown type, empty encoding */ _showMessageCompose;
    void /* unknown type, empty encoding */ _showScreenTimePasscodeView;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void).cxx_destruct;
- (id)init;
- (void)sendBeginMessageWithMessageComposeRequest:(id)a0 reply:(id /* block */)a1;

@end
