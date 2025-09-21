@class TIKeyboardState, NSArray, NSMutableDictionary, _TUIGeneratorResultAccumulatorPolicy, NSObject, TICandidateRequestToken;
@protocol OS_dispatch_queue;

@interface _TUIGeneratorResultAccumulator : NSObject

@property (readonly, nonatomic) NSArray *expectedGeneratorSourceTypes;
@property (readonly, nonatomic) NSMutableDictionary *generatorResults;
@property (readonly, nonatomic) _TUIGeneratorResultAccumulatorPolicy *policy;
@property (readonly) char completionCalled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionBlockQueue;
@property (readonly, nonatomic) TICandidateRequestToken *token;
@property (readonly, nonatomic) TIKeyboardState *keyboardState;
@property (readonly, nonatomic) id /* block */ accumulatorCompletedBlock;

- (id)debugDescription;
- (void).cxx_destruct;
- (char)updateWithContainer:(id)a0;
- (char)areAllGeneratorsComplete;
- (void)completionBlockJustOnce:(char)a0;
- (id)containerForCandidateSource:(long long)a0;
- (id)initWithRequestToken:(id)a0 keyboardState:(id)a1 enabledCandidateSources:(id)a2 policy:(id)a3 onComplete:(id /* block */)a4;
- (char)kbdCorrectionsAreComplete;

@end
