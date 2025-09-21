@class CSSpeechManager, CSOpportuneSpeakEventMonitor, NSObject, CSOSTransaction, NSMutableArray, CSAudioStream, CSSiriClientBehaviorMonitor, CSAudioProvider, NSString, CSKeywordAnalyzerNDAPI, CSVoiceTriggerSecondPass, CSVoiceTriggerSecondChanceContext, CSVoiceTriggerUserSelectedPhrase, CSPolicy, CSAsset, CSRemoteVADSignalExtractor;
@protocol OS_dispatch_group, CSVoiceTriggerDelegate, OS_dispatch_queue, CSOtherAppRecordingStateMonitorProviding;

@interface CSVoiceTriggerFirstPassHearstAP : NSObject <CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate, CSOpportuneSpeakEventMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzerNDAPI;
@property (retain, nonatomic) CSAudioStream *audioStream;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *recordingWillStartGroup;
@property (nonatomic) BOOL isAPHearstFirstPassEnabled;
@property (nonatomic) float keywordThreshold;
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass;
@property (retain, nonatomic) CSOSTransaction *secondPassTransaction;
@property (nonatomic) BOOL isSiriClientListening;
@property (nonatomic) BOOL isSecondPassRunning;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) CSAudioProvider *audioProvider;
@property (retain, nonatomic) NSString *opportuneSpeakAudioProviderUUID;
@property (retain, nonatomic) NSMutableArray *audioStreamHoldings;
@property (retain, nonatomic) CSSiriClientBehaviorMonitor *siriClientBehaviorMonitor;
@property (retain, nonatomic) CSSpeechManager *speechManager;
@property (retain, nonatomic) CSOpportuneSpeakEventMonitor *opportuneSpeakEventMonitor;
@property (retain, nonatomic) id<CSOtherAppRecordingStateMonitorProviding> otherAppRecordingStateMonitor;
@property (retain, nonatomic) CSPolicy *voiceTriggerHearstAPEnabledPolicy;
@property (retain, nonatomic) CSVoiceTriggerSecondChanceContext *secondChanceContext;
@property (nonatomic) unsigned long long heartbeatFactor;
@property (retain, nonatomic) CSRemoteVADSignalExtractor *remoteVADSignalExtractor;
@property (retain, nonatomic) CSVoiceTriggerUserSelectedPhrase *multiPhraseSelectedStatus;
@property (weak, nonatomic) id<CSVoiceTriggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setAsset:(id)a0;
- (void)audioStreamProvider:(id)a0 audioBufferAvailable:(id)a1;
- (void)_reset;
- (void)audioStreamProvider:(id)a0 didStopStreamUnexpectedly:(long long)a1;
- (void)start;
- (void)dealloc;
- (void)opportuneSpeakEventMonitor:(id)a0 didStreamStateChanged:(BOOL)a1;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(BOOL)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (id)init;
- (void)audioStreamProvider:(id)a0 audioChunkForTVAvailable:(id)a1;
- (void)setAsset:(id)a0;
- (void)_cancelLastAudioStreamHold;
- (void)_keywordAnalyzerNDAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (void)_stopListening;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;
- (void)_handleSecondPassResult:(id)a0 deviceId:(id)a1 error:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)_addAudioStreamHold:(id)a0;
- (void).cxx_destruct;
- (void)_createSecondPass;
- (id)_fetchDeviceId;
- (BOOL)_shouldProcessAudio;
- (void)_startListenWithAudioProviderUUID:(id)a0 completion:(id /* block */)a1;
- (void)_teardownSecondPass;
- (void)_transitHearstAPEnable:(BOOL)a0;
- (id)initWithSpeechManager:(id)a0 voiceTriggerEnabledMonitor:(id)a1 siriClientBehaviorMonitor:(id)a2 opportuneSpeakEventMonitor:(id)a3 phoneCallStateMonitor:(id)a4 otherAppRecordingStateMonitor:(id)a5 voiceTriggerHearstAPEnabledPolicy:(id)a6;
- (void)shouldProcessAudio:(id /* block */)a0;

@end
