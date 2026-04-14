@class SFSpeechAudioBufferRecognitionRequest, NSString, SFSpeechRecognizer, SFSpeechRecognitionTask;

@interface VCAudioCaptionsSpeechRecognizer : VCAudioCaptions <SFSpeechRecognizerDelegate, SFSpeechRecognitionTaskDelegate> {
    SFSpeechRecognizer *_recognizer;
    SFSpeechAudioBufferRecognitionRequest *_recognizerRequest;
    SFSpeechRecognitionTask *_recognizerTask;
    BOOL _isSpeechModelLoaded;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)speechRecognitionDidDetectSpeech:(id)a0;
- (void)speechRecognitionTask:(id)a0 didFinishRecognition:(id)a1;
- (void)speechRecognitionTask:(id)a0 didFinishSuccessfully:(BOOL)a1;
- (void)speechRecognitionTask:(id)a0 didHypothesizeTranscription:(id)a1;
- (void)speechRecognitionTaskWasCancelled:(id)a0;
- (void)speechRecognizer:(id)a0 availabilityDidChange:(BOOL)a1;
- (void)destroyCaptions;
- (BOOL)recognizerBufferSetupWithError:(id *)a0;
- (BOOL)createRecognizer:(id *)a0;
- (void)destroyRecognizer;
- (BOOL)enableLanguageDetector:(BOOL)a0;
- (void)finishCaptions;
- (id)initWithDelegate:(id)a0 isLocal:(BOOL)a1 taskIdentifier:(id)a2 reportingAgent:(struct opaqueRTCReporting { } *)a3;
- (id)initWithSpeechConfig:(const struct tagVCAudioCaptionsSpeechConfig { id x0; id x1; struct opaqueRTCReporting *x2; BOOL x3; } *)a0;
- (void)packageAndSendTranscribedString:(id)a0 withTask:(id)a1 final:(BOOL)a2;
- (void)pushSamples:(char *)a0 numSamples:(int)a1 hostTime:(double)a2;
- (void)recognizerBufferTeardown;
- (BOOL)setUpCaptionsWithError:(id *)a0;
- (BOOL)shouldPushSamples;
- (BOOL)startCaptionsWithError:(id *)a0;
- (void)stopCaptions;

@end
