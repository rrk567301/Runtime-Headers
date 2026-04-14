@class TICandidateRequestToken, NSArray, NSMutableDictionary, _TtC11TextInputUI28TUITextComposerClientWrapper, NSString, _TUIGeneratorResultAccumulatorCache, NSObject;
@protocol OS_dispatch_queue, TUIKeyboardCandidateReceiver;

@interface TUIKeyboardCandidateMultiplexer : NSObject <TUICandidateInterceptor>

@property (retain, nonatomic) NSMutableDictionary *generators;
@property (retain, nonatomic) NSArray *peekingGenerators;
@property (retain, nonatomic) _TUIGeneratorResultAccumulatorCache *pendingRequests;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *receiverQueue;
@property (retain, nonatomic) TICandidateRequestToken *mostRecentRequest;
@property (retain, nonatomic) _TtC11TextInputUI28TUITextComposerClientWrapper *internalSharedClientWrapper;
@property (weak) id<TUIKeyboardCandidateReceiver> candidateReceiver;
@property BOOL enableKbdSource;
@property (nonatomic) unsigned long long keyboardSuggestionOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addGenerator:(id)a0;
- (void)generateCandidatesWithKeyboardContext:(id)a0;
- (void)syncToKeyboardState:(id)a0;
- (void)_didReceiveCandidateResults:(id)a0 forAccumulator:(id)a1;
- (id)_queueOnly_cachedResultAccumulatorForRequestToken:(id)a0 type:(int)a1;
- (void)_queueOnly_candidateAccepted:(id)a0 keyboardState:(id)a1 candidateRequestToken:(id)a2;
- (id)_queueOnly_enabledGenerators;
- (id)_queueOnly_enabledGeneratorsForAccumulatorType:(int)a0 context:(id)a1;
- (id)_queueOnly_enabledSourceTypesWithGenerators:(id)a0 accumulatorType:(int)a1 context:(id)a2;
- (void)_queueOnly_generateCandidatesForContext:(id)a0 delayed:(BOOL)a1;
- (void)_queueOnly_generateCandidatesForKeyboardState:(id)a0 requestToken:(id)a1 usesCandidateSelection:(BOOL)a2;
- (id)_queueOnly_mergeKBDCorrections:(id)a0 withTextEffectsCorrections:(id)a1;
- (void)_queueOnly_performUpdatesToCandidateReceiverForRequest:(id)a0 type:(int)a1 didTimeout:(BOOL)a2;
- (id)_queueOnly_resultAccumulatorForContext:(id)a0 type:(int)a1 enabledCandidateSources:(id)a2;
- (BOOL)_queueOnly_willHandleDeliveryForCandidates:(id)a0 requestToken:(id)a1;
- (void)_sendSmartResponsesTelemetryForCandidates:(id)a0 forKeyboardState:(id)a1;
- (void)candidateAccepted:(id)a0 generationContext:(id)a1;
- (void)candidateAccepted:(id)a0 keyboardState:(id)a1 candidateRequestToken:(id)a2;
- (void)generateCandidatesForKeyboardState:(id)a0 requestToken:(id)a1;
- (void)installGeneratorForSource:(long long)a0;
- (void)installGeneratorsForSources:(id)a0;
- (void)receiveExternalAutocorrectionUpdate:(id)a0 requestToken:(id)a1;
- (void)receiveExternalCandidateResultSet:(id)a0 requestToken:(id)a1;
- (BOOL)willHandleDeliveryForCandidates:(id)a0 requestToken:(id)a1;

@end
