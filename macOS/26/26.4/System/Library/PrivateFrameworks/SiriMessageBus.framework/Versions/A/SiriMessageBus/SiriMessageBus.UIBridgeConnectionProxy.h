@interface SiriMessageBus.UIBridgeConnectionProxy : NSObject <SUIBUIBridgeServiceProtocol, SiriUIBridge.UIBridgeServiceDelegateWrapperProtocol> {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ connectionListener;
    void /* unknown type, empty encoding */ uiBridgeServiceIF;
    void /* unknown type, empty encoding */ uiBridgeServiceSRDProvider;
    void /* unknown type, empty encoding */ serviceImpl;
}

- (void)connectionInterrupted;
- (void)preheat;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)init;
- (void)siriDismissed;
- (void)siriPrompted;
- (void)siriWillPrompt;
- (void)startAttending;
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
- (void)notifyTypingStartedWith:(id)a0;
- (void)startAttendingWithReason:(unsigned long long)a0 deviceId:(id)a1;
- (void)stopAttendingForReason:(unsigned long long)a0;
- (void)uiBridgeServiceDidDetectLanguageMismatch:(id)a0;
- (void)uiBridgeServiceDidDetectUserSpeechWithContext:(id)a0;
- (void)uiBridgeServiceDidEndSystemTurnInterruptionWithContext:(id)a0;
- (void)uiBridgeServiceDidEndUserTurnWithContext:(id)a0;
- (void)uiBridgeServiceDidFinalizeUserTurnWithContext:(id)a0;
- (void)uiBridgeServiceDidStartSystemTurnInterruptionWithContext:(id)a0;
- (void)uiBridgeServiceReceivedNLRoutingDecision:(id)a0;
- (void)uiBridgeServiceReceivedRequestProgress:(id)a0;
- (void)uiBridgeServiceReceivedSessionRetrieved:(id)a0;
- (void)uiBridgeServiceReceivedSiriResponse:(id)a0;
- (void)uiBridgeServiceTaskDidCancel:(id)a0;
- (void)uiBridgeServiceTaskDidEnd:(id)a0;

@end
