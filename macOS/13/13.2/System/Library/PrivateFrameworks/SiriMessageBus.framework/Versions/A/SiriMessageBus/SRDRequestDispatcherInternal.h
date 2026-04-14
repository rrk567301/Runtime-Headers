@interface SRDRequestDispatcherInternal : NSObject {
    void /* unknown type, empty encoding */ rdmbQueue;
    void /* unknown type, empty encoding */ broker;
    void /* unknown type, empty encoding */ messagePublisher;
    void /* unknown type, empty encoding */ sessionsManager;
    void /* unknown type, empty encoding */ aceCommandDispatcher;
    void /* unknown type, empty encoding */ serviceHelper;
    void /* unknown type, empty encoding */ instrumentationUtil;
    void /* unknown type, empty encoding */ assetLogger;
    void /* unknown type, empty encoding */ sessionUserId;
}

- (id)init;
- (void).cxx_destruct;
- (id)domains;
- (id)initWithRequestDispatcherServiceHelper:(id)a0;
- (id)commandsForDomain:(id)a0;
- (BOOL)implementsCommand:(id)a0 forDomain:(id)a1;
- (void)handleCommand:(id)a0 executionContextInfo:(id)a1 reply:(id /* block */)a2;
- (void)requestCompletedWithAssistantId:(id)a0 requestId:(id)a1;
- (void)cancelRequestWithAssistantId:(id)a0 requestId:(id)a1;
- (void)startSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 location:(id)a3;
- (void)startSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 location:(id)a3 asrOnServer:(BOOL)a4;
- (void)startLocalRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2;
- (void)startCorrectionSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3 previousUtterance:(id)a4;
- (void)startUnderstandingOnServerRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2;
- (void)startDirectActionRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 directAction:(id)a3 requestExecutionParameters:(id)a4;
- (void)startTextRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3;
- (void)startSessionWithAssistantId:(id)a0 languageCode:(id)a1 understandingOnDevice:(BOOL)a2;
- (void)startTestSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 enableASR:(BOOL)a2 inputOrigin:(id)a3 location:(id)a4 jitContext:(id)a5 overrideModelPath:(id)a6;
- (void)postTestResultCandidateWithAssistantId:(id)a0 requestId:(id)a1 rcId:(id)a2 recognitionSausage:(id)a3;
- (void)postTestResultSelectedWithAssistantId:(id)a0 requestId:(id)a1 rcId:(id)a2;
- (void)sendRequestContextWithAssistantId:(id)a0 requestId:(id)a1 audioSource:(id)a2 audioDestination:(id)a3 responseMode:(id)a4 isEyesFree:(BOOL)a5 isVoiceTriggerEnabled:(BOOL)a6 isTextToSpeechEnabled:(BOOL)a7 isTriggerlessFollowup:(BOOL)a8 bargeInModes:(id)a9 approximatePreviousTTSInterval:(id)a10 deviceRestrictions:(id)a11 voiceTriggerEventInfo:(id)a12 voiceAudioSessionId:(unsigned int)a13;
- (void)startUnderstandingOnServerTextRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3;
- (void)startSpeechDictationSessionWithAssistantId:(id)a0 languageCode:(id)a1 recognitionOnDevice:(BOOL)a2;
- (void)startSpeechDictationRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 dictationOptions:(id)a3;
- (void)startUnderstandingDictationSessionWithAssistantId:(id)a0 languageCode:(id)a1 understandingOnDevice:(BOOL)a2;
- (void)startUnderstandingDictationRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 dictationOptions:(id)a3;
- (void)endDictationSessionWithAssistantId:(id)a0;
- (void)startSessionWithAssistantId:(id)a0 languageCode:(id)a1 understandingOnDevice:(BOOL)a2 sharedUserId:(id)a3;
- (void)pauseDictationRecognitionWithAssistantId:(id)a0 requestId:(id)a1;
- (void)resumeDictationRecognitionWithAssistantId:(id)a0 requestId:(id)a1 prefixText:(id)a2 postfixText:(id)a3 selectedText:(id)a4;
- (BOOL)sessionExistsForAssistantId:(id)a0;
- (void)startSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2;
- (void)startSessionWithAssistantId:(id)a0 languageCode:(id)a1;
- (void)endSessionWithAssistantId:(id)a0 withDelay:(BOOL)a1;
- (void)startTestSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2;
- (void)sendMultiUserInfoWithDeviceAssistantId:(id)a0 multiUserInfo:(id)a1 isRMVEnabled:(BOOL)a2;

@end
