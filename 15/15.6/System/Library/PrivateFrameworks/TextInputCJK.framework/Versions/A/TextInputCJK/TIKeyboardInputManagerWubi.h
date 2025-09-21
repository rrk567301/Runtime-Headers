@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubi : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion>

@property (retain, nonatomic) TIKeyboardCandidate *autoConfirmationCandidate;

+ (Class)wordSearchClass;

- (void).cxx_destruct;
- (char)acceptInputString:(id)a0;
- (id)inputsToReject;
- (char)shouldAddModifierSymbolsToWordCharacters;
- (void)setInSplitKeyboardMode:(char)a0;
- (void)checkAutocorrectionDictionaries;
- (int)inputMethodType;
- (void)addInput:(id)a0 withContext:(id)a1;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)openCandidateGenerationContextWithCandidateHandler:(id)a0;
- (void)pushCandidateGenerationContextWithResults:(id)a0;
- (char)supportsPairedPunctutationInput;
- (char)isWubi:(id)a0;
- (id)formattedSearchString;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (char)updateCandidatesWithTIWordSearch:(id)a0 predictionEnabled:(char)a1;

@end
