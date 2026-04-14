@interface SNSystemAudioAnalyzerLocal : NSObject <SNSystemAudioAnalyzerProtocol> {
    void /* unknown type, empty encoding */ dispatchQueue;
    void /* unknown type, empty encoding */ analysisQueue;
    void /* unknown type, empty encoding */ recordingCancellable;
    void /* unknown type, empty encoding */ streamAnalyzer;
    void /* unknown type, empty encoding */ audioIsRunning;
    void /* unknown type, empty encoding */ requestsAndObservers;
    void /* unknown type, empty encoding */ audioConfiguration;
    void /* unknown type, empty encoding */ audioSession;
    void /* unknown type, empty encoding */ allowSuppressionOfMicrophoneUsageIndicator;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)removeRequest:(id)a0;
- (void)handleAVAudioSessionInterruption:(id)a0;
- (void)handleAVAudioSessionMediaServicesLost:(id)a0;
- (void)handleAVAudioSessionMediaServicesReset:(id)a0;
- (void)handleAVAudioSessionRouteChange:(id)a0;
- (id)initAllowingSuppresionOfMicrophoneUsageIndicator:(BOOL)a0;
- (void)removeAllRequests;
- (void)sendErrorToAllRequests:(id)a0;
- (void)setAudioConfiguration:(id)a0;

@end
