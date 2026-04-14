@class NSString, SVXSessionManager, SVXSpeechSynthesisConfiguration, SVXModule, SVXSpeechSynthesisAnnouncer, SVXSpeechSynthesisContext, NSMutableArray, SVXAudioStreamingAnnouncer, NSMutableSet;
@protocol SVXClientAudioSystemServicing;

@interface SVXSpeechSynthesizer : NSObject <SVXModuleInstance> {
    SVXModule *_module;
    SVXSessionManager *_sessionManager;
    SVXAudioStreamingAnnouncer *_audioStreamingAnnouncer;
    SVXSpeechSynthesisAnnouncer *_announcer;
    SVXSpeechSynthesisConfiguration *_currentConfiguration;
    SVXSpeechSynthesisContext *_currentSpeakingContext;
    id<SVXClientAudioSystemServicing> _clientAudioSystemServicing;
    NSMutableArray *_pendingContexts;
    NSMutableSet *_synthesizingContexts;
    BOOL _needsPrewarm;
    unsigned long long _ttsSignpostInterval;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)prewarm;
- (void)addListener:(id)a0;
- (void)removeListener:(id)a0;
- (void)cancelRequest:(id)a0;
- (void)updateWithConfiguration:(id)a0;
- (void)cancelPendingRequests;
- (id)initWithModule:(id)a0;
- (void)prewarmRequest:(id)a0;
- (void)startWithModuleInstanceProvider:(id)a0 platformDependencies:(id)a1;
- (void)stopWithModuleInstanceProvider:(id)a0;
- (void)outputVoiceChanged:(id)a0;
- (void)languageCodeChanged:(id)a0;
- (void)synthesizeRequest:(id)a0 taskTracker:(id)a1 analyticsContext:(id)a2 completion:(id /* block */)a3;
- (void)enqueueRequest:(id)a0 languageCode:(id)a1 voiceName:(id)a2 gender:(long long)a3 preparation:(id /* block */)a4 finalization:(id /* block */)a5 taskTracker:(id)a6 analyticsContext:(id)a7;
- (void)stopRequest:(id)a0 withInterruptionBehavior:(long long)a1;
- (void)stopCurrentRequestWithInterruptionBehavior:(long long)a0;
- (void)beginUpdateAudioPowerWithCompletion:(id /* block */)a0;
- (void)endUpdateAudioPower;
- (BOOL)_useStreamingAudio;
- (void)_prewarm;
- (void)_prewarmWithContext:(id)a0;
- (void)_configureWithConfiguration:(id)a0;
- (void)_beginUpdateAudioPowerWithCompletion:(id /* block */)a0;
- (void)_endUpdateAudioPower;
- (unsigned long long)_numberOfContexts;
- (void)_enqueueContext:(id)a0;
- (void)_processPendingContexts;
- (void)_startContext:(id)a0;
- (BOOL)_continueContext:(id)a0 error:(id *)a1;
- (BOOL)_startPresynthesizedAudioRequestForContext:(id)a0 error:(id *)a1;
- (BOOL)_startSpeechRequestForContext:(id)a0 error:(id *)a1;
- (void)_cancelPendingContextsAtIndexes:(id)a0;
- (void)_stopCurrentSpeakingContextWithInterruptionBehavior:(long long)a0;
- (void)_cancelPendingSpeakingContextWithRequest:(id)a0;
- (void)_cancelPendingSpeakingContextsWithPriorityBelow:(long long)a0;
- (void)_cancelPendingContextsWithOperationType:(long long)a0;
- (void)_stopCurrentSpeakingContextWithRequest:(id)a0 withInterruptionBehavior:(long long)a1;
- (void)_finalizeContext:(id)a0 withResultType:(long long)a1 utterance:(id)a2 error:(id)a3;

@end
