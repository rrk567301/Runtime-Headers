@class TIMecabraCandidate;

@interface TIKeyboardInputManager_zh_Toneless : TIKeyboardInputManager_zh_Base

@property (copy, nonatomic) TIMecabraCandidate *inlineCandidate;
@property (nonatomic) char dynamic;
@property (nonatomic) char assertDefaultKeyPlane;

- (void).cxx_destruct;
- (void)commitComposition;
- (id)inputString;
- (void)clearInput;
- (id)defaultCandidate;
- (id)didAcceptCandidate:(id)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)generateCandidatesWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 candidateHandler:(id)a2;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (id)handleKeyboardInput:(id)a0;
- (char)keyboardConfigurationAssertDefaultKeyPlane;
- (id)keyboardConfigurationLayoutTag;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (char)supportsCandidateGeneration;
- (void)updateComposedText;
- (id)validCharacterSetForAutocorrection;
- (id)composedTextForSelectedCandidate:(id)a0 remainingInput:(id)a1;
- (char)shouldSearchCompletionForSubstrings;
- (void)activateRetroCorrection;
- (id)initWithInputMode:(id)a0 keyboardState:(id)a1 dynamic:(char)a2;

@end
