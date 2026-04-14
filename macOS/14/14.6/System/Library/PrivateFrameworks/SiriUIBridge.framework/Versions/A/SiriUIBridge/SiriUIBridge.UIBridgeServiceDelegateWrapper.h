@interface SiriUIBridge.UIBridgeServiceDelegateWrapper : NSObject <SiriUIBridge.UIBridgeServiceDelegateWrapperProtocol> {
    void /* unknown type, empty encoding */ delegate;
}

- (id)init;
- (void).cxx_destruct;
- (void)uiBridgeServiceDetectedSiriDirectedSpeech;
- (void)uiBridgeServiceDetectedSpeechStart;
- (void)uiBridgeServiceDetectedSpeechStart:(BOOL)a0;
- (void)uiBridgeServiceDidStartAttending;
- (void)uiBridgeServiceDidStartAttendingWithRootRequestId:(id)a0;
- (void)uiBridgeServiceDidStopAttendingUnexpectedlyWithReason:(unsigned long long)a0;
- (void)uiBridgeServiceReceivedShowAssetsDownloadPrompt;
- (void)uiBridgeServiceReceivedSpeechMitigationResult:(unsigned long long)a0;
- (void)uiBridgeServiceWillStartAttending;

@end
