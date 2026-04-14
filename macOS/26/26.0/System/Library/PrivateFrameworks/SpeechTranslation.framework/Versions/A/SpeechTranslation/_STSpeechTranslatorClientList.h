@class _STSpeechTranslatorClientContext, NSUUID, NSString, NSMutableDictionary, AVAudioFormat, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, STSpeechTranslating, _STSpeechTranslatorClientConforming;

@interface _STSpeechTranslatorClientList : NSObject <STSpeechTranslatorDelegate, _STSpeechTranslatorService> {
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSMutableArray *_enqueuedPauseReasons;
    NSString *_latestPauseReason;
    id<STSpeechTranslating> _translator;
    _STSpeechTranslatorClientContext *_primaryClient;
    NSMutableDictionary *_secondaryClients;
    id /* block */ _startReply;
    AVAudioFormat *_preferredFormat;
    NSMutableArray *_replyHandlers;
}

@property (readonly, nonatomic) BOOL _running;
@property (readonly, nonatomic) BOOL _invalidated;
@property (retain, nonatomic) NSUUID *identifier;
@property (weak, nonatomic) id<_STSpeechTranslatorClientConforming> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_keyForConnection:(id)a0;

- (void)invalidate;
- (id)_descriptionForState:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setProduceAudio:(BOOL)a0;
- (const char *)_stringForState:(unsigned long long)a0;
- (void)stopTranslation;
- (void)setProduceTranscripts:(BOOL)a0;
- (void)setProduceTranslatedText:(BOOL)a0;
- (void)_startTranslatorWhileDispatched;
- (id)_contextForKeyWhileDispatched:(id)a0;
- (void)_handleTranslatorStartCallbackWhileDispatchedWithError:(id)a0;
- (void)_handleTranslatorStopCallbackWhileDispatchedWithError:(id)a0;
- (void)_notifyClientsOfTranslationDidPauseWhileDispatched;
- (void)_notifyClientsOfTranslationDidResumeWhileDispatched;
- (void)_notifyClientsOfTranslationDidStopWhileDispatchedWithError:(id)a0;
- (void)_notifyClientsOfTranslatorStartWhileDispatchedWithError:(id)a0;
- (void)_prefetchPreferredAudioFormatWithSourceLocale:(id)a0 fromClass:(Class)a1;
- (void)_prepareXPCConnection:(id)a0;
- (void)_removeSecondaryClientPeerWithConnectionKey:(id)a0;
- (void)_resetPauseReasons;
- (void)_stopTranslatorWhileDispatchedWithError:(id)a0;
- (void)_transitionToInvalidatedWhileDispatchedAndStopTranslator:(BOOL)a0 withError:(id)a1;
- (id)_whileDispatchedTransitionFromIdleToState:(unsigned long long *)a0 withError:(id)a1;
- (id)_whileDispatchedTransitionFromInvalidatedToState:(unsigned long long *)a0;
- (id)_whileDispatchedTransitionFromResumingToState:(unsigned long long *)a0 withError:(id)a1;
- (id)_whileDispatchedTransitionFromRunningToState:(unsigned long long *)a0 withError:(id)a1;
- (id)_whileDispatchedTransitionFromStartingToState:(unsigned long long *)a0 withError:(id)a1;
- (id)_whileDispatchedTransitionFromStoppingToState:(unsigned long long *)a0 withError:(id)a1;
- (id)_whileDispatchedTransitionToState:(unsigned long long)a0;
- (id)_whileDispatchedTransitionToState:(unsigned long long)a0 withError:(id)a1;
- (void)addSecondaryClientPeer:(id)a0 withXPCConnection:(id)a1;
- (id)initWithConfiguration:(id)a0 clientPeer:(id)a1;
- (id)initWithConfiguration:(id)a0 clientPeer:(id)a1 translator:(id)a2;
- (void)obtainCachedPreferredSourceAudioFormat:(BOOL)a0 inReply:(id /* block */)a1;
- (void)obtainIdentifierInReply:(id /* block */)a0;
- (void)pauseTranslationWithReason:(id)a0;
- (void)resumeTranslation;
- (void)setPreferredTranslatedAudioFormat:(id)a0;
- (void)startTranslationWithReply:(id /* block */)a0;
- (void)translateAudioBuffer:(id)a0;
- (void)translator:(id)a0 didFinishWithError:(id)a1;
- (void)translator:(id)a0 didGenerateTranslatedAudio:(id)a1;
- (void)translator:(id)a0 producedSpeechResult:(id)a1;
- (void)translator:(id)a0 producedTranslationResult:(id)a1;
- (void)translator:(id)a0 willStartTranslatedAudioWithMetadata:(id)a1;
- (void)translatorDidFinishTranslatedAudio:(id)a0;

@end
