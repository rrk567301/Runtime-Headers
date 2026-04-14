@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubi : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion>

@property (retain, nonatomic) TIKeyboardCandidate *autoConfirmationCandidate;

+ (Class)wordSearchClass;

- (void).cxx_destruct;
- (id)inputsToReject;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (BOOL)acceptInputString:(id)a0;
- (void)setInSplitKeyboardMode:(BOOL)a0;
- (int)inputMethodType;
- (BOOL)closeCandidateGenerationContextWithResults:(id)a0;
- (void)addInput:(id)a0 withContext:(id)a1;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)openCandidateGenerationContextWithCompletionHandler:(id /* block */)a0;
- (void)checkAutocorrectionDictionaries;
- (BOOL)supportsPairedPunctutationInput;
- (BOOL)isWubi:(id)a0;
- (BOOL)updateCandidatesWithTIWordSearch:(id)a0 predictionEnabled:(BOOL)a1;
- (id)formattedSearchString;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;

@end
