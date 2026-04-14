@interface MediaContinuityKit.AVConferenceBackedAudioStream : SwiftNativeNSObject <AVCAudioStreamDelegate> {
    void /* unknown type, empty encoding */ audioStream;
    void /* unknown type, empty encoding */ internalEventStream;
    void /* unknown type, empty encoding */ internalEventStreamContinuation;
    void /* unknown type, empty encoding */ internalEventMonitorTask;
    void /* unknown type, empty encoding */ eventStream;
    void /* unknown type, empty encoding */ eventStreamContinuation;
    void /* unknown type, empty encoding */ transitionContinuation;
    void /* unknown type, empty encoding */ stopTransitionContinuation;
    void /* unknown type, empty encoding */ streamToken;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ cachedStreamDirection;
}

- (id)init;
- (void)streamDidStop:(id)a0;
- (void)stream:(id)a0 didPause:(BOOL)a1 error:(id)a2;
- (void)stream:(id)a0 didResume:(BOOL)a1 error:(id)a2;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)streamDidRTCPTimeOut:(id)a0;
- (void)streamDidRecoverFromRTCPTimeOut:(id)a0;
- (void)streamDidServerDie:(id)a0;

@end
