@class SFSpeechAnalyzer, SFSpeechAnalyzerOptions, SFSpeechAnalyzerLanguageDetectorOptions, SFSpeechAnalyzerTranscriberOptions, NSOperationQueue, SFSpeechAnalyzerSpeechDetectorOptions;

@interface VCAudioCaptionsSpeechAnalyzer : VCAudioCaptions <SFSpeechAnalyzerTranscriberResultDelegate, SFSpeechAnalyzerSpeechDetectorResultDelegate> {
    SFSpeechAnalyzer *_analyzer;
    SFSpeechAnalyzerTranscriberOptions *_transcriberOptions;
    SFSpeechAnalyzerOptions *_analyzerOptions;
    NSOperationQueue *_operationQueue;
    SFSpeechAnalyzerLanguageDetectorOptions *_languageDetectorOptions;
    SFSpeechAnalyzerSpeechDetectorOptions *_speechDetectorOptions;
}

- (void)dealloc;
- (void)destroyCaptions;
- (void)destroyAnalyzer;
- (BOOL)analyzerSetupWithError:(id *)a0;
- (void)analyzerTeardown;
- (BOOL)configureAnalyzerOptions;
- (BOOL)enableLanguageDetector:(BOOL)a0;
- (void)finishCaptions;
- (id)initWithDelegate:(id)a0 isLocal:(BOOL)a1 taskIdentifier:(id)a2 reportingAgent:(struct opaqueRTCReporting { } *)a3;
- (id)initWithSpeechConfig:(const struct tagVCAudioCaptionsSpeechConfig { id x0; id x1; struct opaqueRTCReporting *x2; BOOL x3; } *)a0;
- (void)packageAndSendTranscriberResult:(id)a0 withTask:(id)a1 final:(BOOL)a2;
- (void)pushSamples:(char *)a0 numSamples:(int)a1 hostTime:(double)a2;
- (void)setFrameworkType:(unsigned char)a0;
- (BOOL)setUpCaptionsWithError:(id *)a0;
- (BOOL)shouldPushSamples;
- (void)speechAnalyzer:(id)a0 didProduceSpeechDetectorResult:(id)a1;
- (void)speechAnalyzer:(id)a0 didProduceTranscriberResult:(id)a1;
- (void)speechAnalyzer:(id)a0 didStopSpeechDetectorWithError:(id)a1;
- (void)speechAnalyzer:(id)a0 didStopTranscriptionWithError:(id)a1;
- (void)speechAnalyzerDidProduceAllTranscriberResults:(id)a0;
- (BOOL)startCaptionsWithError:(id *)a0;
- (void)stopCaptions;
- (void)updateCurrentTaskInfo;

@end
