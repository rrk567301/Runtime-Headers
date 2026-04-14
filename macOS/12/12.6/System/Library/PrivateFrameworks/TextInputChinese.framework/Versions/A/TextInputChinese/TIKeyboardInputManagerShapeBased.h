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
- (BOOL)acceptInputString:(id)a0;
- (void)setInputIndex:(unsigned int)a0;
- (id)keyboardBehaviors;
- (id)searchStringForMarkedText;
- (id)sortingMethods;
- (id)didAcceptCandidate:(id)a0;
- (BOOL)isHardwareKeyboardAutocorrectionEnabled;
- (id)rawInputString;
- (void)loadDictionaries;
- (BOOL)supportsLearning;
- (void)inputLocationChanged;
- (id)keyboardConfigurationLayoutTag;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)acceptInput;
- (BOOL)shouldLookForCompletionCandidates;
- (void)cancelCandidatesThread;
- (id)markedTextWithAutoconvertedCandidates;
- (BOOL)updateCandidatesWithTIWordSearch:(id)a0 predictionEnabled:(BOOL)a1;
- (id)formattedSearchString;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;

@end
