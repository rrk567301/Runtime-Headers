@class NSDictionary, NSString;

@interface CSVTUITrainingSessionWithPayload : CSVTUITrainingSession <SFSpeechRecognitionTaskDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate> {
    char _detectBOS;
    char _ASRResultReceived;
    char _reportedStopListening;
    char _utteranceStored;
    unsigned long long _numSamplesFed;
    unsigned long long _bestTriggerSampleStart;
    unsigned long long _extraSamplesAtStart;
}

@property (retain, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)speechRecognitionTask:(id)a0 didFinishRecognition:(id)a1;
- (void)speechRecognitionTask:(id)a0 didFinishSuccessfully:(char)a1;
- (void)speechRecognitionTask:(id)a0 didHypothesizeTranscription:(id)a1;
- (void)_firedEndPointTimeout;
- (void)_firedVoiceTriggerTimeout;
- (float)_getSessionEOSTimeout;
- (void)_registerEndPointTimeout;
- (void)_registerForceEndPointTimeout;
- (void)_registerVoiceTriggerTimeout;
- (void)_reportStopListening;
- (void)audioSessionDidStartRecording:(char)a0 error:(id)a1;
- (void)audioSessionDidStopRecording:(long long)a0;
- (void)audioSessionErrorDidOccur:(id)a0;
- (void)audioSessionRecordBufferAvailable:(id)a0;
- (void)audioSessionUnsupportedAudioRoute;
- (void)closeSessionWithStatus:(int)a0 successfully:(char)a1;
- (void)didDetectBeginOfSpeech;
- (void)didDetectEndOfSpeech:(long long)a0;
- (void)handleAudioInput:(id)a0;
- (void)matchRecognitionResult:(id)a0 withMatchedBlock:(id /* block */)a1 withNonMatchedBlock:(id /* block */)a2;
- (char)shouldHandleSession;
- (char)shouldMatchPayload;
- (void)startTraining;

@end
