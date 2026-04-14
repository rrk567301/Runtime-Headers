@class TIKeyboardState, NSArray, NSMutableDictionary, NSMutableSet, _TUIKeyboardCorrectionListAccumulatorPolicy, NSObject, TICandidateRequestToken;
@protocol OS_dispatch_queue;

@interface _TUIKeyboardCorrectionListAccumulator : NSObject

@property (readonly, nonatomic) NSArray *expectedGeneratorSourceTypes;
@property (readonly, nonatomic) NSMutableDictionary *generatorResults;
@property (readonly, nonatomic) NSMutableSet *nilResults;
@property (readonly, nonatomic) _TUIKeyboardCorrectionListAccumulatorPolicy *policy;
@property (readonly) BOOL completionCalled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionBlockQueue;
@property (readonly, nonatomic) TICandidateRequestToken *token;
@property (readonly, nonatomic) TIKeyboardState *keyboardState;
@property (readonly, nonatomic) id /* block */ accumulatorCompletedBlock;

- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)areAllGeneratorsComplete;
- (void)completionBlockJustOnce:(BOOL)a0;
- (id)correctionsForCandidateSource:(long long)a0;
- (BOOL)hasCorrectionsForCandidateSource:(long long)a0;
- (id)initWithRequestToken:(id)a0 keyboardState:(id)a1 enabledCandidateSources:(id)a2 policy:(id)a3 onComplete:(id /* block */)a4;
- (BOOL)kbdCorrectionsAreComplete;
- (BOOL)updateWithCorrections:(id)a0 forType:(long long)a1;

@end
