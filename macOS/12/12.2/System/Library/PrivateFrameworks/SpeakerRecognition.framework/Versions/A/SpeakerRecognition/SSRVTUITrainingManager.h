@class CSVTUIEndpointAnalyzer, NSString, CSPlainAudioFileWriter, CSVTUIKeywordDetector, CSDispatchGroup, SSRVoiceProfile, NSMutableArray, NSObject, SFSpeechRecognizer, CSVTUITrainingSession, CSAsset;
@protocol OS_dispatch_queue, SSRVTUITrainingManagerDelegate, CSVTUIAudioSession;

@interface SSRVTUITrainingManager : NSObject <CSVTUITrainingSessionDelegate, CSVTUIAudioSessionDelegate, CSVTUIEndpointAnalyzerDelegate> {
    BOOL _performRMS;
    NSString *_locale;
    id<CSVTUIAudioSession> _audioSession;
    CSVTUIEndpointAnalyzer *_audioAnalyzer;
    CSVTUIKeywordDetector *_keywordDetector;
    NSMutableArray *_trainingSessions;
    CSVTUITrainingSession *_currentTrainingSession;
    long long _sessionNumber;
    BOOL _suspendAudio;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _cleanupCompletion;
    SFSpeechRecognizer *_speechRecognizer;
    CSAsset *_currentAsset;
    SSRVoiceProfile *_profile;
    CSDispatchGroup *_didStopWaitingGroup;
}

@property (retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter;
@property (readonly) SSRVoiceProfile *voiceProfile;
@property float rms;
@property (weak, nonatomic) id<SSRVTUITrainingManagerDelegate> delegate;
@property (readonly) BOOL speechRecognizerAvailable;
@property (readonly) unsigned long long audioSource;
@property BOOL suspendAudio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedtrainingSessionQueue;
+ (id)trainingManagerWithLocaleID:(id)a0 withAppDomain:(id)a1;

- (void).cxx_destruct;
- (void)reset;
- (void)endpointer:(id)a0 didDetectStartpointAtTime:(double)a1;
- (void)setLocaleIdentifier:(id)a0;
- (void)prepareWithCompletion:(id /* block */)a0;
- (unsigned long long)_audioSource;
- (BOOL)_startAudioSession;
- (BOOL)_stopAudioSession;
- (BOOL)_setupAudioSession;
- (void)endpointer:(id)a0 didDetectHardEndpointAtTime:(double)a1;
- (id)initWithLocaleIdentifier:(id)a0 withAudioSession:(id)a1 withAppDomain:(id)a2;
- (BOOL)createKeywordDetector;
- (void)destroySpeakerTrainer;
- (void)_destroyAudioSession;
- (void)closeSessionBeforeStartWithStatus:(int)a0 successfully:(BOOL)a1 withCompletion:(id /* block */)a2;
- (BOOL)_createAudioAnalyzer;
- (BOOL)_shouldShowHeadsetDisconnectionMessage;
- (void)createSpeechRecognizer;
- (void)audioSessionDidStartRecording:(BOOL)a0 error:(id)a1;
- (void)audioSessionDidStopRecording:(long long)a0;
- (void)audioSessionRecordBufferAvailable:(id)a0;
- (void)audioSessionErrorDidOccur:(id)a0;
- (void)audioSessionUnsupportedAudioRoute;
- (void)CSVTUITrainingSessionRMSAvailable:(float)a0;
- (void)CSVTUITrainingSessionStopListen;
- (BOOL)CSVTUITrainingSession:(id)a0 hasTrainUtterance:(id)a1 languageCode:(id)a2 payload:(BOOL)a3;
- (id)updateTrainingManagerForDevice:(unsigned long long)a0 trainingDeviceUUIDList:(id)a1;
- (void)_beginOfSpeechDetected;
- (void)_endOfSpeechDetected;
- (id)cleanupWithCompletion:(id /* block */)a0;
- (long long)trainUtterance:(long long)a0 shouldUseASR:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)cancelTrainingForID:(long long)a0;
- (void)startRMS;
- (void)stopRMS;
- (BOOL)shouldPerformRMS;
- (void)didDetectForceEndPoint;

@end
