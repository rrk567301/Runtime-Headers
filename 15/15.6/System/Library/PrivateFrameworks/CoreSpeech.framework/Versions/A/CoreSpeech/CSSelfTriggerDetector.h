@class NSHashTable, NSString, CSContinuousVoiceTriggerConfig, CSOSTransaction, CSKeywordAnalyzerNDAPI, CSPlainAudioFileWriter, NSObject, CSAsset, CSSpeechManager, CSAudioStream, CSAudioTimeConverter;
@protocol OS_dispatch_queue, CSAudioStreamProviding;

@interface CSSelfTriggerDetector : NSObject <CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSPhoneCallStateMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) CSSpeechManager *speechManager;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzer;
@property (nonatomic) char isKeywordAnalyzerCorrupted;
@property (nonatomic) unsigned long long outputAudioChannel;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (nonatomic) char isSiriClientListening;
@property (nonatomic) char selfTriggerEnabled;
@property (nonatomic) char isListenPollingStarting;
@property (retain, nonatomic) NSString *audioProviderUUID;
@property (retain, nonatomic) CSAudioTimeConverter *audioTimeConverter;
@property (retain, nonatomic) CSContinuousVoiceTriggerConfig *selfTriggerConfig;
@property (weak, nonatomic) id<CSAudioStreamProviding> audioTapProvider;
@property (nonatomic) unsigned long long audioSourceType;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) CSOSTransaction *modelLoadTransaction;
@property (nonatomic) unsigned long long nearMissDelayTimeoutInSamples;
@property (nonatomic) unsigned long long nearMissCandidateDetectedSamples;
@property (nonatomic) char hasPendingNearMiss;
@property (nonatomic) unsigned long long numAnalyzedSamples;
@property (retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)selfTriggerAudioLoggingFilePath;
+ (id)timeStampString;
+ (id)selfTriggerAudioLogDirectory;

- (void).cxx_destruct;
- (void)start;
- (void)reset;
- (void)_reset;
- (unsigned long long)currentState;
- (void)setAsset:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)a0;
- (void)CSPhoneCallStateMonitor:(id)a0 didRecievePhoneCallStateChange:(unsigned long long)a1;
- (void)_addPowerLogsIfSupported:(unsigned long long)a0;
- (unsigned long long)_getPlaybackRouteType;
- (void)_hardStopAndRestartAudioQueueIfNeeded;
- (char)_isTelephonyTapAvailable;
- (void)_keywordAnalyzerNDAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (void)_loadCurrentAssetToAnalyzer;
- (void)_setAsset:(id)a0;
- (char)_shouldAddPowerLogs;
- (char)_shouldReuseBuiltInAudioProvider;
- (void)_startListenPolling;
- (void)_startListenPollingWithInterval:(double)a0 completion:(id /* block */)a1;
- (void)_startListenWithCompletion:(id /* block */)a0;
- (void)_stopAudioFileWriter;
- (void)_stopListeningWithCompletion:(id /* block */)a0;
- (void)_transitCurrentStateTo:(unsigned long long)a0;
- (void)_unloadCurrentAssetToAnalyzer;
- (void)audioStreamProvider:(id)a0 audioBufferAvailable:(id)a1;
- (void)audioStreamProvider:(id)a0 audioChunkForTVAvailable:(id)a1;
- (void)audioStreamProvider:(id)a0 didStopStreamUnexpectedly:(long long)a1;
- (id)initWithTargetQueue:(id)a0 audioTapProvider:(id)a1 audioSourceType:(unsigned long long)a2;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(char)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;
- (void)startAnalyze;
- (void)stopAnalyzeWithCompletion:(id /* block */)a0;

@end
