@interface SRUIFMarkerCapableSpeechSynthesizer : NSObject <SRUIFSpeechSynthesizing, SRUIFSpeechSynthesizerDelegate, SRUIFSpeechSynthesizerClientStateManagerDelegate> {
    void /* unknown type, empty encoding */ pendingTasks;
    void /* unknown type, empty encoding */ supertaskLookup;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ synthesizer;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ clientStateManagerDelegate;
@property (nonatomic) unsigned int audioSessionID;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)cancel;
- (id)initWithSpeechSynthesizer:(id)a0;
- (void)prewarmIfNeeded;
- (void)duckTTSVolumeTo:(float)a0 rampTime:(double)a1 completion:(id /* block */)a2;
- (void)enqueuePhaticWithCompletion:(id /* block */)a0;
- (void)enqueueSpeechSynthesisRequest:(id)a0;
- (void)isSynthesisQueueEmpty:(id /* block */)a0;
- (void)notifyClientStateManagerSpeakingBegan:(id)a0;
- (void)notifyClientStateManagerSpeakingEnded:(id)a0;
- (void)notifyClientStateManagerTransactionBegan:(id)a0;
- (void)notifyClientStateManagerTransactionEnded:(id)a0;
- (void)skipCurrentSynthesis;
- (void)speechSynthesisDidFinish:(id)a0;
- (void)speechSynthesisDidFinish:(id)a0 withIdentifier:(id)a1;
- (void)speechSynthesisDidStartSpeakingWithIdentifier:(id)a0;
- (void)speechSynthesisDidStopSpeakingWithIdentifier:(id)a0 queueIsEmpty:(BOOL)a1;
- (void)speechSynthesisDidUpdatePowerLevelTo:(float)a0;
- (void)speechSynthesisGetPreparedTextForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)cancelProvisionalTasks;
- (void)enqueueAudioData:(id)a0 identifier:(id)a1 sessionId:(id)a2 provisionally:(BOOL)a3 eligibleAfterDuration:(double)a4 completion:(id /* block */)a5;
- (void)enqueueText:(id)a0 identifier:(id)a1 sessionId:(id)a2 preferredVoice:(id)a3 language:(id)a4 gender:(id)a5 isPhonetic:(BOOL)a6 provisionally:(BOOL)a7 eligibleAfterDuration:(double)a8 delayed:(BOOL)a9 canUseServerTTS:(BOOL)a10 preparationIdentifier:(id)a11 completion:(id /* block */)a12 analyticsContext:(id)a13 speakableContextInfo:(id)a14;
- (void)processDelayedItem:(id)a0;

@end
