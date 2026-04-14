@class NSString, NSMutableString;

@interface TIKeyboardInputManagerShapeBased : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion> {
    BOOL _keepRemainingInput;
    NSString *_remainingInput;
}

@property (readonly, nonatomic) NSMutableString *searchString;
@property (retain, nonatomic) NSString *remainingInput;
@property (nonatomic) BOOL previousActionWasAutoConfirmation;

- (BOOL)usesCandidateSelection;
- (BOOL)acceptInputString:(id)a0;
- (id)searchStringForMarkedText;
- (void)clearInput;
- (BOOL)suppliesCompletions;
- (BOOL)shouldExtendPriorWord;
- (unsigned int)inputIndex;
- (unsigned int)inputCount;
- (BOOL)supportsReversionUI;
- (id)keyboardBehaviors;
- (void)setInputIndex:(unsigned int)a0;
- (BOOL)hasCandidates;
- (void).cxx_destruct;
- (void)loadDictionaries;
- (BOOL)usesAutoDeleteWord;
- (unsigned long long)initialSelectedIndex;
- (id)candidateResultSet;
- (id)didAcceptCandidate:(id)a0;
- (id)sortingMethods;
- (void)acceptInput;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)inputLocationChanged;
- (BOOL)isHardwareKeyboardAutocorrectionEnabled;
- (id)keyboardConfigurationLayoutTag;
- (id)rawInputString;
- (BOOL)supportsLearning;
- (void)cancelCandidatesThread;
- (id)formattedSearchString;
- (id)markedTextWithAutoconvertedCandidates;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (BOOL)shouldLookForCompletionCandidates;
- (BOOL)updateCandidatesWithTIWordSearch:(id)a0 predictionEnabled:(BOOL)a1;

@end
