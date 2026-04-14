@class _TUIKeyboardCandidateGenerationContext, NSArray, NSMutableDictionary, _TUIGeneratorResultAccumulatorPolicy, TIKeyboardState, NSObject, TICandidateRequestToken;
@protocol OS_dispatch_queue;

@interface _TUIGeneratorResultAccumulator : NSObject

@property (readonly, nonatomic) NSArray *expectedGeneratorSourceTypes;
@property (readonly, nonatomic) NSMutableDictionary *generatorResults;
@property (readonly, nonatomic) _TUIGeneratorResultAccumulatorPolicy *policy;
@property (readonly) BOOL completionCalled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionBlockQueue;
@property (readonly, nonatomic) TICandidateRequestToken *token;
@property (readonly, nonatomic) _TUIKeyboardCandidateGenerationContext *context;
@property (readonly, nonatomic) TIKeyboardState *keyboardState;
@property (readonly, nonatomic) id /* block */ accumulatorCompletedBlock;

- (id)debugDescription;
- (BOOL)updateWithContainer:(id)a0;
- (void).cxx_destruct;
- (BOOL)areAllGeneratorsComplete;
- (void)completionBlockJustOnce:(BOOL)a0;
- (id)containerForCandidateSource:(long long)a0;
- (id)initWithRequestContext:(id)a0 enabledCandidateSources:(id)a1 policy:(id)a2 onComplete:(id /* block */)a3;
- (BOOL)kbdCorrectionsAreComplete;

@end
