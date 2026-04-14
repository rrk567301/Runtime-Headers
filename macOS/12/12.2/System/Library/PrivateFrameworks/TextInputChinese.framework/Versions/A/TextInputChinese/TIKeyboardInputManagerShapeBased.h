@class NSString, NSMutableString;

@interface TIKeyboardInputManagerShapeBased : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion> {
    BOOL _keepRemainingInput;
}

@property (readonly, nonatomic) NSMutableString *searchString;
@property (retain, nonatomic) NSString *remainingInput;
@property (nonatomic) BOOL previousActionWasAutoConfirmation;

- (void).cxx_destruct;
- (unsigned int)inputCount;
- (void)clearInput;
- (unsigned long long)initialSelectedIndex;
- (unsigned int)inputIndex;
- (BOOL)hasCandidates;
- (id)candidateResultSet;
- (BOOL)shouldExtendPriorWord;
- (BOOL)suppliesCompletions;
- (BOOL)usesAutoDeleteWord;
- (BOOL)usesCandidateSelection;
- (id)keyboardBehaviors;
- (id)searchStringForMarkedText;
- (BOOL)acceptInputString:(id)a0;
- (void)setInputIndex:(unsigned int)a0;
- (id)sortingMethods;
- (id)didAcceptCandidate:(id)a0;
- (void)loadDictionaries;
- (BOOL)supportsLearning;
- (id)keyboardConfigurationLayoutTag;
- (id)rawInputString;
- (void)inputLocationChanged;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)acceptInput;
- (BOOL)isHardwareKeyboardAutocorrectionEnabled;
- (BOOL)shouldLookForCompletionCandidates;
- (id)formattedSearchString;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (BOOL)updateCandidatesWithTIWordSearch:(id)a0 predictionEnabled:(BOOL)a1;
- (void)cancelCandidatesThread;
- (id)markedTextWithAutoconvertedCandidates;

@end
