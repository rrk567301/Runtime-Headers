@interface SiriKitRuntime.ExecutionBridgeToXPCAdapter : _TtCs12_SwiftObject <SKRExecutionBridge> {
    void /* unknown type, empty encoding */ wrapped;
}

- (void)prepareForAudioHandoffWithCompletion:(id /* block */)a0;
- (void)prepareForAudioHandoffFailedWithCompletion:(id /* block */)a0;
- (void)submitWithExecutionOutput:(id)a0 completion:(id /* block */)a1;
- (void)closeWithExecutionOutput:(id)a0;
- (void)closeWithExecutionOutput:(id)a0 needsUserInput:(BOOL)a1;
- (void)closeWithExecutionOutput:(id)a0 errorString:(id)a1;
- (void)flowPluginWillExecuteWithFlowPluginInfo:(id)a0;
- (void)fallbackToServerForResultCandidateId:(id)a0;
- (void)fetchContextsFor:(id)a0 includesNearByDevices:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchSpeechInfoWithReply:(id /* block */)a0;
- (void)acquireConversationUserInputForUserId:(id)a0 requestId:(id)a1 reply:(id /* block */)a2;
- (void)retriggerOriginalRequestWithExecutionRequestId:(id)a0 forUserId:(id)a1 givenCurrentExecutionRequestId:(id)a2 reply:(id /* block */)a3;
- (void)closeServerRequestForExecutionRequestId:(id)a0;

@end
