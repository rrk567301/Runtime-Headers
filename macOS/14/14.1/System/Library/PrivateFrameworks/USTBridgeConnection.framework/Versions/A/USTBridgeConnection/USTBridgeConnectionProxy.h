@interface USTBridgeConnectionProxy : NSObject <USTBridgeConnectionProxyDefinition> {
    void /* unknown type, empty encoding */ connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleSiriDismissedWithSessionId:(id)a0 withBridgeDelegate:(id)a1 completion:(id /* block */)a2;
- (void)handleAttendingStartedWithSessionId:(id)a0 withBridgeDelegate:(id)a1 completion:(id /* block */)a2;
- (void)handleDictationAsrResultMessageWithMessage:(id)a0 withBridgeDelegate:(id)a1 completion:(id /* block */)a2;
- (void)handleEndSpeechDictationSessionMessageWithSessionId:(id)a0 withBridgeDelegate:(id)a1 completion:(id /* block */)a2;
- (void)handleRequestCancelledWithRequestId:(id)a0 withBridgeDelegate:(id)a1 completion:(id /* block */)a2;
- (void)handleRequestCompletedWithRequestId:(id)a0 withBridgeDelegate:(id)a1 completion:(id /* block */)a2;
- (void)handleRequestMessageWithMessage:(id)a0 withBridgeDelegate:(id)a1 completion:(id /* block */)a2;
- (void)handleSiriPromptedWithRequestId:(id)a0 withBridgeDelegate:(id)a1 completion:(id /* block */)a2;
- (void)handleSiriWillPromptWithRequestId:(id)a0 withBridgeDelegate:(id)a1 completion:(id /* block */)a2;
- (void)handleStartSpeechDictationRequestMessageWithRequestId:(id)a0 withBridgeDelegate:(id)a1 completion:(id /* block */)a2;
- (void)handleStartSpeechDictationSessionMessageWithSessionId:(id)a0 withBridgeDelegate:(id)a1 completion:(id /* block */)a2;
- (void)handleStartTestSpeechRequestWithRequestId:(id)a0 withBridgeDelegate:(id)a1 completion:(id /* block */)a2;
- (void)handleStopAttendingRequestedWithSessionId:(id)a0 withBridgeDelegate:(id)a1 completion:(id /* block */)a2;
- (void)handleStoppedListeningForSpeechContinuationWithRequestId:(id)a0 withBridgeDelegate:(id)a1 completion:(id /* block */)a2;

@end
