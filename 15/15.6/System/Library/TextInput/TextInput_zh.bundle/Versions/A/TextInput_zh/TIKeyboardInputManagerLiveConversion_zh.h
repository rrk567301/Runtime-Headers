@class NSString, TIKeyboardCandidate, TIZhuyinInputManager;

@interface TIKeyboardInputManagerLiveConversion_zh : TIKeyboardInputManagerChinesePhonetic

@property (copy, nonatomic) TIKeyboardCandidate *topCandidate;
@property (copy, nonatomic) TIKeyboardCandidate *currentCandidate;
@property (copy, nonatomic) NSString *remainingInput;
@property (copy, nonatomic) TIZhuyinInputManager *zhuyinInputManager;
@property (copy, nonatomic) NSString *cachedInputString;
@property (nonatomic) char revertTonlessZhuyin;

- (void).cxx_destruct;
- (id)markedText;
- (unsigned int)inputCount;
- (void)commitComposition;
- (id)inputString;
- (void)clearInput;
- (unsigned long long)initialSelectedIndex;
- (char)commitsAcceptedCandidate;
- (char)delayedCandidateList;
- (unsigned int)inputIndex;
- (id)keyBehaviorsForState:(id)a0;
- (id)keyEventMap;
- (id)keyboardBehaviors;
- (char)supportsNumberKeySelection;
- (char)usesLiveConversion;
- (id)wordCharacters;
- (id)didAcceptCandidate:(id)a0;
- (int)inputMethodType;
- (char)_adjustPhraseBoundaryInForwardDirection:(char)a0 granularity:(int)a1;
- (char)closeCandidateGenerationContextWithResults:(id)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (id)handleKeyboardInput:(id)a0;
- (void *)initImplementation;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)rawInputString;
- (void)restoreGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (void)saveGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (char)shouldClearInputOnMarkedTextOutOfSync;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(char)a2;
- (id)validCharacterSetForAutocorrection;
- (char)_shouldCommitInputDirectly:(id)a0;
- (void)addInputToInternal:(id)a0;
- (id)composedTextForSelectedCandidate:(id)a0 remainingInput:(id)a1;
- (id)internalInputString;
- (id)phoneticSortingMethod;
- (char)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)a0;
- (char)shouldSearchCompletionForSubstrings;
- (char)skipSetMarkedTextDuringInput;
- (char)updateCandidatesByWaitingForResults:(char)a0;
- (void)_notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (void)_addInputToInternal:(id)a0;
- (void)presentSegmentAdjuster;
- (void)presentSegmentPickerIfNeeded;

@end
