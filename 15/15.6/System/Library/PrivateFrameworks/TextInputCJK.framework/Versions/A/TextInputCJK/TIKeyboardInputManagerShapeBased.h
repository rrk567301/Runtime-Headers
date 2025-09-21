@class NSString, NSMutableString;

@interface TIKeyboardInputManagerShapeBased : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion> {
    char _keepRemainingInput;
    NSString *_remainingInput;
}

@property (readonly, nonatomic) NSMutableString *searchString;
@property (retain, nonatomic) NSString *remainingInput;
@property (nonatomic) char previousActionWasAutoConfirmation;

- (void).cxx_destruct;
- (unsigned int)inputCount;
- (char)usesCandidateSelection;
- (void)clearInput;
- (unsigned long long)initialSelectedIndex;
- (char)acceptInputString:(id)a0;
- (id)candidateResultSet;
- (char)hasCandidates;
- (unsigned int)inputIndex;
- (id)keyboardBehaviors;
- (id)searchStringForMarkedText;
- (void)setInputIndex:(unsigned int)a0;
- (char)shouldExtendPriorWord;
- (char)suppliesCompletions;
- (char)supportsReversionUI;
- (char)usesAutoDeleteWord;
- (id)didAcceptCandidate:(id)a0;
- (id)sortingMethods;
- (void)acceptInput;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)inputLocationChanged;
- (char)isHardwareKeyboardAutocorrectionEnabled;
- (id)keyboardConfigurationLayoutTag;
- (void)loadDictionaries;
- (id)rawInputString;
- (char)supportsLearning;
- (void)cancelCandidatesThread;
- (id)formattedSearchString;
- (id)markedTextWithAutoconvertedCandidates;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (char)shouldLookForCompletionCandidates;
- (char)updateCandidatesWithTIWordSearch:(id)a0 predictionEnabled:(char)a1;

@end
