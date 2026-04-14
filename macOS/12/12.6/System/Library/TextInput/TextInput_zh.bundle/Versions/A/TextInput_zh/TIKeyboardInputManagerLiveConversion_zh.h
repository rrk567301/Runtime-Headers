@class NSArray, TIKeyboardCandidate, NSString, TIZhuyinInputManager;

@interface TIKeyboardInputManagerLiveConversion_zh : TIKeyboardInputManagerChinesePhonetic

@property (copy, nonatomic) TIKeyboardCandidate *topCandidate;
@property (copy, nonatomic) TIKeyboardCandidate *currentCandidate;
@property (copy, nonatomic) NSArray *segments;
@property (copy, nonatomic) NSString *remainingInput;
@property (copy, nonatomic) TIZhuyinInputManager *zhuyinInputManager;
@property (copy, nonatomic) NSString *cachedInputString;
@property (nonatomic) BOOL revertTonlessZhuyin;

- (void).cxx_destruct;
- (id)markedText;
- (unsigned int)inputCount;
- (void)commitComposition;
- (id)inputString;
- (void)clearInput;
- (unsigned long long)initialSelectedIndex;
- (unsigned int)inputIndex;
- (id)keyBehaviorsForState:(id)a0;
- (id)wordCharacters;
- (BOOL)commitsAcceptedCandidate;
- (BOOL)supportsNumberKeySelection;
- (BOOL)usesLiveConversion;
- (BOOL)delayedCandidateList;
- (id)keyboardBehaviors;
- (id)keyEventMap;
- (id)didAcceptCandidate:(id)a0;
- (id)handleKeyboardInput:(id)a0;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)rawInputString;
- (void)restoreGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (id)validCharacterSetForAutocorrection;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (BOOL)shouldClearInputOnMarkedTextOutOfSync;
- (void)saveGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (int)inputMethodType;
- (void *)initImplementation;
- (BOOL)closeCandidateGenerationContextWithResults:(id)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (BOOL)shouldSearchCompletionForSubstrings;
- (id)internalInputString;
- (id)composedTextForSelectedCandidate:(id)a0 remainingInput:(id)a1;
- (BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)a0;
- (void)addInputToInternal:(id)a0;
- (BOOL)skipSetMarkedTextDuringInput;
- (BOOL)_shouldCommitInputDirectly:(id)a0;
- (BOOL)updateCandidatesByWaitingForResults:(BOOL)a0;
- (id)phoneticSortingMethod;
- (void)_notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (void)presetSegmentPickerForLastSegment;
- (void)presentSegmentAdjuster;
- (void)_addInputToInternal:(id)a0;

@end
