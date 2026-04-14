@class AFVoiceInfo, NSString, NSMutableDictionary, NSObject, NSMutableArray, AFWatchdogTimer, SiriTTSDaemonSession, AFQueue;
@protocol SRUIFSpeechSynthesizerClientStateManagerDelegate, SRUIFSpeechSynthesizerDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface SRUIFSpeechSynthesizer : NSObject <AFQueueDelegate, SRUIFSpeechSynthesisTaskDelegate, SRUIFSpeechSynthesizing> {
    AFVoiceInfo *_outputVoice;
    NSMutableDictionary *_availableVoicesForLanguage;
    NSObject<OS_dispatch_queue> *_processingTasksQueue;
    NSObject<OS_dispatch_queue> *_pendingTasksQueue;
    NSObject<OS_dispatch_group> *_pendingTasksGroup;
    AFWatchdogTimer *_pendingTaskTimer;
}

@property (readonly, nonatomic, getter=_taskQueue) AFQueue *taskQueue;
@property (readonly, nonatomic, getter=_activeTasks) NSMutableArray *activeTasks;
@property (readonly, nonatomic, getter=_delayedTasks) NSMutableDictionary *delayedTasks;
@property (retain, nonatomic) SiriTTSDaemonSession *ttsSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SRUIFSpeechSynthesizerClientStateManagerDelegate> clientStateManagerDelegate;
@property (weak, nonatomic) id<SRUIFSpeechSynthesizerDelegate> delegate;
@property (nonatomic) unsigned int audioSessionID;

- (void)cancel;
- (void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setOutputVoice:(id)a0;
- (id)init;
- (BOOL)isSpeaking;
- (void)queue:(id)a0 didEnqueueObjects:(id)a1;
- (void)prewarmIfNeeded;
- (void)duckTTSVolumeTo:(float)a0 rampTime:(double)a1 completion:(id /* block */)a2;
- (void)enqueuePhaticWithCompletion:(id /* block */)a0;
- (void)enqueueSpeechSynthesisRequest:(id)a0;
- (void)isSynthesisQueueEmpty:(id /* block */)a0;
- (void)skipCurrentSynthesis;
- (id)_activeTaskWithTTSRequest:(id)a0;
- (void)_cancelByCancellingActiveTasksOnly:(BOOL)a0 matching:(id /* block */)a1;
- (void)_duckTTSVolumeTo:(float)a0 rampTime:(double)a1 completion:(id /* block */)a2;
- (void)_enqueueText:(id)a0 audioData:(id)a1 identifier:(id)a2 sessionId:(id)a3 preferredVoice:(id)a4 language:(id)a5 gender:(id)a6 promptStyle:(id)a7 isPhonetic:(BOOL)a8 provisionally:(BOOL)a9 eligibleAfterDuration:(double)a10 delayed:(BOOL)a11 canUseServerTTS:(BOOL)a12 preparationIdentifier:(id)a13 shouldCache:(BOOL)a14 completion:(id /* block */)a15 analyticsContext:(id)a16 speakableContextInfo:(id)a17;
- (id)_filterVoices:(id)a0 gender:(id)a1;
- (void)_findVoiceForLanguage:(id)a0 gender:(id)a1 completion:(id /* block */)a2;
- (long long)_genderForString:(id)a0;
- (void)_handleAudioData:(id)a0 completion:(id /* block */)a1;
- (void)_handleText:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isSynthesisQueueEmpty;
- (void)_prepareAudioSessionIfNeededWithCompletion:(id /* block */)a0;
- (void)_processProvisionalTasks;
- (void)_processTaskQueue;
- (long long)_speechFootPrintForVoice:(id)a0;
- (void)cancelProvisionalTasks;
- (void)cancelSynthesisForIdentifier:(id)a0;
- (void)didFinishAudioTask:(id)a0 withError:(id)a1;
- (void)didFinishSpeakTask:(id)a0 withError:(id)a1;
- (void)didStartAudioTask:(id)a0;
- (void)didStartSpeakTask:(id)a0;
- (void)enqueueAudioData:(id)a0 identifier:(id)a1 sessionId:(id)a2 provisionally:(BOOL)a3 eligibleAfterDuration:(double)a4 completion:(id /* block */)a5;
- (void)enqueueText:(id)a0 identifier:(id)a1 sessionId:(id)a2 completion:(id /* block */)a3;
- (void)enqueueText:(id)a0 identifier:(id)a1 sessionId:(id)a2 language:(id)a3 gender:(id)a4 isPhonetic:(BOOL)a5 provisionally:(BOOL)a6 eligibleAfterDuration:(double)a7 delayed:(BOOL)a8 canUseServerTTS:(BOOL)a9 preparationIdentifier:(id)a10 completion:(id /* block */)a11 analyticsContext:(id)a12 speakableContextInfo:(id)a13;
- (void)enqueueText:(id)a0 identifier:(id)a1 sessionId:(id)a2 preferredVoice:(id)a3 language:(id)a4 gender:(id)a5 promptStyle:(id)a6 isPhonetic:(BOOL)a7 provisionally:(BOOL)a8 eligibleAfterDuration:(double)a9 delayed:(BOOL)a10 canUseServerTTS:(BOOL)a11 preparationIdentifier:(id)a12 completion:(id /* block */)a13 analyticsContext:(id)a14 speakableContextInfo:(id)a15;
- (void)invalidateOnMainThread;
- (void)prewarmIfNeededKeepActive:(BOOL)a0;
- (void)processDelayedItem:(id)a0;
- (void)reloadSynthesisVoice;
- (void)speakTask:(id)a0 didGenerateMetrics:(id)a1;
- (void)speakTask:(id)a0 didGenerateWordTimingInfo:(id)a1;
- (void)taskEligibilityDidChange:(id)a0;

@end
