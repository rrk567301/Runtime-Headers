@interface SiriUIBridge.UIBridgeServiceDelegateWrapper : NSObject <SiriUIBridge.UIBridgeServiceDelegateWrapperProtocol> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ delegateQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)uiBridgeServiceDetectedSiriDirectedSpeech;
- (void)uiBridgeServiceDetectedSpeechStart;
- (void)uiBridgeServiceDetectedSpeechStart:(BOOL)a0;
- (void)uiBridgeServiceDidStartAttending;
- (void)uiBridgeServiceDidStartAttendingWithRootRequestId:(id)a0;
- (void)uiBridgeServiceDidStopAttendingUnexpectedlyWithReason:(unsigned long long)a0;
- (void)uiBridgeServiceReceivedShowAssetsDownloadPrompt;
- (void)uiBridgeServiceReceivedSpeechMitigationResult:(unsigned long long)a0;
- (void)uiBridgeServiceWillStartAttending;
- (void)uiBridgeServiceDidReceiveTasks:(id)a0;
- (void)uiBridgeServiceDidDetectLanguageMismatch:(id)a0;
- (void)uiBridgeServiceReceivedNLRoutingDecision:(id)a0;
- (void)uiBridgeServiceReceivedRequestProgress:(id)a0;
- (void)uiBridgeServiceReceivedSiriResponse:(id)a0;
- (void)uiBridgeServiceTaskDidCancel:(id)a0;
- (void)uiBridgeServiceTaskDidEnd:(id)a0;

@end
