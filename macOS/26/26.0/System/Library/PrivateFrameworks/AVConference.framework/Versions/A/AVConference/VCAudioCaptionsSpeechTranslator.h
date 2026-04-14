@class NSString, NSMutableDictionary, STSpeechTranslatorConfiguration, STSpeechTranslatorClient;

@interface VCAudioCaptionsSpeechTranslator : VCAudioCaptions <STSpeechTranslatorClientDelegate> {
    STSpeechTranslatorClient *_translatorClient;
    STSpeechTranslatorConfiguration *_translatorConfiguration;
    unsigned int _currentTranslatedUpdateNumber;
    unsigned int _currentSourceUpdateNumber;
    BOOL _isStarted;
    double _translatorStartTime;
    double _translatorStartDuration;
    NSMutableDictionary *_transcriptionTimes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)client:(id)a0 didReceiveTranscriptionResult:(id)a1;
- (void)client:(id)a0 didReceiveTranslationResult:(id)a1;
- (void)client:(id)a0 didStopTranslationWithError:(id)a1;
- (void)serverDidDisconnectForClient:(id)a0;
- (void)translationDidStartForClient:(id)a0;
- (void)destroyCaptions;
- (BOOL)setupTranslatorSharedWithError:(id *)a0;
- (BOOL)enableLanguageDetector:(BOOL)a0;
- (void)finishCaptions;
- (id)initWithDelegate:(id)a0 isLocal:(BOOL)a1 taskIdentifier:(id)a2 reportingAgent:(struct opaqueRTCReporting { } *)a3;
- (id)initWithSpeechConfig:(const struct tagVCAudioCaptionsSpeechConfig { id x0; id x1; struct opaqueRTCReporting *x2; BOOL x3; } *)a0;
- (void)packageAndSendTranscribedString:(id)a0 withTask:(id)a1;
- (void)packageAndSendTranslatedString:(id)a0 withTask:(id)a1;
- (void)pushSamples:(char *)a0 numSamples:(int)a1 hostTime:(double)a2;
- (BOOL)setUpCaptionsWithError:(id *)a0;
- (BOOL)setupTranslatorStandaloneWithError:(id *)a0;
- (BOOL)shouldPushSamples;
- (BOOL)startCaptionsWithError:(id *)a0;
- (void)stopCaptions;

@end
