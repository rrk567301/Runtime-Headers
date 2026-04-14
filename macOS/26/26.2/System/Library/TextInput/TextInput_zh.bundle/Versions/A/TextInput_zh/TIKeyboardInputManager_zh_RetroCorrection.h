@class TIZhuyinInputManager, TIKeyboardCandidate;

@interface TIKeyboardInputManager_zh_RetroCorrection : TIKeyboardInputManager_zh_Base

@property (copy, nonatomic) TIZhuyinInputManager *zhuyinInputManager;
@property (copy, nonatomic) TIKeyboardCandidate *defaultCandidate;

- (void)clearInput;
- (unsigned int)inputIndex;
- (void).cxx_destruct;
- (id)handleKeyboardInput:(id)a0;
- (id)inputString;
- (BOOL)supportsSetPhraseBoundary;
- (unsigned int)inputCount;
- (id)didAcceptCandidate:(id)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (id)internalInputString;
- (id)keyboardConfigurationLayoutTag;
- (id)rawInputString;
- (void)restoreGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (void)saveGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (BOOL)supportsCandidateGeneration;
- (id)validCharacterSetForAutocorrection;
- (void)addInputToInternal:(id)a0;
- (id)composedTextForSelectedCandidate:(id)a0 remainingInput:(id)a1;
- (void)_addInputToInternal:(id)a0;
- (id)initWithInputMode:(id)a0 keyboardState:(id)a1 inputString:(id)a2;
- (void)updateInlineCandidate;

@end
