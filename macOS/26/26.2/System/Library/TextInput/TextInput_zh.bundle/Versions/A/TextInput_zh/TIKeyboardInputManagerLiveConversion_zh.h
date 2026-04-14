@class NSString, TIKeyboardCandidate, TIZhuyinInputManager;

@interface TIKeyboardInputManagerLiveConversion_zh : TIKeyboardInputManagerChinesePhonetic

@property (copy, nonatomic) TIKeyboardCandidate *topCandidate;
@property (copy, nonatomic) TIKeyboardCandidate *currentCandidate;
@property (copy, nonatomic) NSString *remainingInput;
@property (copy, nonatomic) TIZhuyinInputManager *zhuyinInputManager;
@property (copy, nonatomic) NSString *cachedInputString;
@property (nonatomic) BOOL revertTonlessZhuyin;

- (void)clearInput;
- (BOOL)supportsNumberKeySelection;
- (id)markedText;
- (unsigned int)inputIndex;
- (BOOL)commitsAcceptedCandidate;
- (BOOL)usesLiveConversion;
- (void).cxx_destruct;
- (BOOL)delayedCandidateList;
- (id)wordCharacters;
- (id)keyEventMap;
- (id)handleKeyboardInput:(id)a0;
- (id)inputString;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (unsigned int)inputCount;
- (id)keyboardBehaviors;
- (void)commitComposition;
- (unsigned long long)initialSelectedIndex;
- (id)keyBehaviorsForState:(id)a0;
- (id)didAcceptCandidate:(id)a0;
- (int)inputMethodType;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (BOOL)closeCandidateGenerationContextWithResults:(id)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (void *)initImplementation;
- (id)internalInputString;
- (id)rawInputString;
- (void)restoreGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (void)saveGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)shouldClearInputOnMarkedTextOutOfSync;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (id)validCharacterSetForAutocorrection;
- (BOOL)_shouldCommitInputDirectly:(id)a0;
- (void)addInputToInternal:(id)a0;
- (id)composedTextForSelectedCandidate:(id)a0 remainingInput:(id)a1;
- (id)phoneticSortingMethod;
- (BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)a0;
- (BOOL)shouldSearchCompletionForSubstrings;
- (BOOL)skipSetMarkedTextDuringInput;
- (BOOL)updateCandidatesByWaitingForResults:(BOOL)a0;
- (void)_notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (void)_addInputToInternal:(id)a0;
- (void)presentSegmentAdjuster;
- (void)presentSegmentPickerIfNeeded;

@end
