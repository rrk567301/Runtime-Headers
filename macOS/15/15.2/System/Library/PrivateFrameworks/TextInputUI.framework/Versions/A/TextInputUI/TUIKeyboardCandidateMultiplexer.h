@class NSMutableDictionary, _TUIKeyboardCorrectionListAccumulatorCache, NSString, NSObject;
@protocol OS_dispatch_queue, TUIKeyboardCandidateReceiver;

@interface TUIKeyboardCandidateMultiplexer : NSObject <TUICandidateInterceptor>

@property (retain, nonatomic) NSMutableDictionary *generators;
@property (retain, nonatomic) _TUIKeyboardCorrectionListAccumulatorCache *pendingRequests;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *receiverQueue;
@property (weak) id<TUIKeyboardCandidateReceiver> candidateReceiver;
@property BOOL enableKbdSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addGenerator:(id)a0;
- (void)generateCandidatesForKeyboardState:(id)a0 requestToken:(id)a1;
- (void)generateCandidatesForKeyboardState:(id)a0 requestToken:(id)a1 fromCandidate:(id)a2;
- (void)syncToKeyboardState:(id)a0;
- (void)_queueOnly_candidateAccepted:(id)a0 keyboardState:(id)a1 candidateRequestToken:(id)a2;
- (id)_queueOnly_correctionListAccumulatorFor:(id)a0 keyboardState:(id)a1 type:(int)a2;
- (id)_queueOnly_enabledCandidateSources;
- (id)_queueOnly_enabledGenerators;
- (void)_queueOnly_generateCandidatesForKeyboardState:(id)a0 requestToken:(id)a1;
- (id)_queueOnly_mergeKBDCorrections:(id)a0 withTextEffectsCorrections:(id)a1;
- (void)_queueOnly_performUpdatesToCandidateReceiverForRequest:(id)a0 type:(int)a1;
- (BOOL)_queueOnly_willHandleDeliveryForCandidates:(id)a0 requestToken:(id)a1;
- (void)_sendSmartRepliesTelemetryForCandidates:(id)a0 forKeyboardState:(id)a1;
- (void)candidateAccepted:(id)a0 keyboardState:(id)a1 candidateRequestToken:(id)a2;
- (void)receiveExternalAutocorrectionUpdate:(id)a0 requestToken:(id)a1;
- (BOOL)willHandleDeliveryForCandidates:(id)a0 requestToken:(id)a1;

@end
