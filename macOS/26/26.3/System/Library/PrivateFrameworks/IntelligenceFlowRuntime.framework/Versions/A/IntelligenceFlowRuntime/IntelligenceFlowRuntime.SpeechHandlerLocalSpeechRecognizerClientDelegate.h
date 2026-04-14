@interface IntelligenceFlowRuntime.SpeechHandlerLocalSpeechRecognizerClientDelegate : NSObject <LBLocalSpeechRecognizerClientDelegate> {
    void /* unknown type, empty encoding */ turnId;
    void /* unknown type, empty encoding */ transcript;
    void /* unknown type, empty encoding */ spanResponseCallback;
    void /* unknown type, empty encoding */ latestRequestEvent;
}

- (id)init;
- (void).cxx_destruct;
- (void)localSpeechRecognizerClient:(id)a0 didAcceptedEagerResultWithRequestId:(id)a1 rcId:(long long)a2 mitigationSignal:(BOOL)a3 featuresToLog:(id)a4;
- (void)localSpeechRecognizerClient:(id)a0 receivedContinuityEndDetected:(id)a1;
- (void)localSpeechRecognizerClient:(id)a0 receivedFinalResultWithRequestId:(id)a1 speechPackage:(id)a2;
- (void)localSpeechRecognizerClient:(id)a0 receivedPartialResultWithRequestId:(id)a1 language:(id)a2 tokens:(id)a3;
- (void)localSpeechRecognizerClient:(id)a0 receivedTRPCandidatePackage:(id)a1;

@end
