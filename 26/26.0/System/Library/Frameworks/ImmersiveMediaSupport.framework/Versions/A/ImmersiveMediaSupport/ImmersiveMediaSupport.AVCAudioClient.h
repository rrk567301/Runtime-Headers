@interface ImmersiveMediaSupport.AVCAudioClient : NSObject <AVCAudioStreamDelegate> {
    void /* unknown type, empty encoding */ audioStream;
    void /* unknown type, empty encoding */ pathEvaluator;
}

- (void)dealloc;
- (id)init;
- (void)streamDidStop:(id)a0;
- (void).cxx_destruct;
- (void)stream:(id)a0 didPause:(BOOL)a1 error:(id)a2;
- (void)stream:(id)a0 didReceiveDTMFEventWithDigit:(char)a1;
- (void)stream:(id)a0 didReceiveRTCPPackets:(id)a1;
- (void)stream:(id)a0 didResume:(BOOL)a1 error:(id)a2;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)stream:(id)a0 didStartSynchronizer:(BOOL)a1 error:(id)a2;
- (void)stream:(id)a0 updateInputFrequencyLevel:(id)a1;
- (void)stream:(id)a0 updateOutputFrequencyLevel:(id)a1;
- (void)streamDidInterruptionBegin:(id)a0;
- (void)streamDidInterruptionEnd:(id)a0;
- (void)streamDidRTCPTimeOut:(id)a0;
- (void)streamDidRTPTimeOut:(id)a0;
- (void)streamDidRecoverFromRTCPTimeOut:(id)a0;
- (void)streamDidServerDie:(id)a0;

@end
