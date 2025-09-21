@class NSString, NSMutableString;

@interface TIKeyboardInputManagerShapeBased : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion> {
    BOOL _keepRemainingInput;
    NSString *_remainingInput;
}

@property (readonly, nonatomic) NSMutableString *searchString;
@property (retain, nonatomic) NSString *remainingInput;
@property (nonatomic) BOOL previousActionWasAutoConfirmation;

- (BOOL)suppliesCompletions;
- (BOOL)usesCandidateSelection;
- (void)clearInput;
- (id)searchStringForMarkedText;
- (BOOL)acceptInputString:(id)a0;
- (BOOL)hasCandidates;
- (void)setInputIndex:(unsigned int)a0;
- (id)keyboardBehaviors;
- (unsigned int)inputIndex;
- (unsigned int)inputCount;
- (void)loadDictionaries;
- (BOOL)usesAutoDeleteWord;
- (BOOL)shouldExtendPriorWord;
- (void).cxx_destruct;
- (BOOL)supportsReversionUI;
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
