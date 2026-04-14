@class TIWordSearch, NSString, TIMathSymbolPunctuationController, NSOperationQueue, CIMCandidateData;

@interface TIKeyboardInputManagerChinese : TIKeyboardInputManager_zh_ja {
    TIWordSearch *_wordSearch;
}

@property (readonly) CIMCandidateData *candidateData;
@property (readonly) NSOperationQueue *operationQueue;
@property (readonly) TIMathSymbolPunctuationController *mathSymbolPunctuationController;
@property BOOL duringDeleteFromInputWithContext;
@property (nonatomic) BOOL isAlphabeticPlane;
@property (copy, nonatomic) NSString *pairedPunctuationOpenQuote;
@property (copy, nonatomic) NSString *pairedPunctuationSelectedText;
@property (readonly, nonatomic) unsigned long long predictionOptions;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *modeName;
@property (nonatomic) BOOL isInCompletionMode;
@property (nonatomic) BOOL shouldLearnAcceptedCandidate;
@property (copy, nonatomic) NSString *currentKeyHint;

+ (Class)wordSearchClass;
+ (BOOL)shouldEnableHalfWidthPunctuationForDocumentContext:(id)a0 composedText:(id)a1;
+ (id)punctuationPredictionsForString:(id)a0;
+ (id)pairedPunctuationDictionary;
+ (id)GB18030CandidateFromString:(id)a0;
+ (id)unicodeCandidateFromString:(id)a0;

- (void).cxx_destruct;
- (void)setInput:(id)a0;
- (void)clearInput;
- (unsigned long long)initialSelectedIndex;
- (id)firstCandidate;
- (id)wordCharacters;
- (id)replacementForDoubleSpace;
- (id)searchStringForMarkedText;
- (id)sortingMethods;
- (id)didAcceptCandidate:(id)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)wordSearch;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (void)deleteFromInputWithContext:(id)a0;
- (id)candidateResultSetFromCandidates:(id)a0 proactiveTriggers:(id)a1;
- (void)loadFavoniusTypingModel;
- (void)inputLocationChanged;
- (void)syncToLayoutState:(id)a0;
- (void)setLearnsCorrection:(BOOL)a0;
- (id)titleForSortingMethod:(id)a0;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (BOOL)alwaysShowExtensionCandidatesForSortingMethod:(id)a0;
- (id)sortMethodsGroupsForCandidates:(id)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1 completion:(id /* block */)a2;
- (BOOL)shouldSearchCompletionForSubstrings;
- (void)wordSearchEngineDidFindPredictionCandidates:(id)a0;
- (void)willExitCompletionMode;
- (id)completionCandidateResultSetForKeyHint:(id)a0;
- (id)generateCompletions;
- (BOOL)supportsPairedPunctutationInput;
- (void)acceptFirstCandidateWithContext:(id)a0;
- (void)resetCommitHistory;
- (void *)initImplementationWithMode:(id)a0 andLanguage:(id)a1;
- (BOOL)shouldEnableHalfWidthPunctuationForCurrentInputContext;
- (id)candidateResultSetUsedForCompletionQuery;
- (BOOL)isFacemarkInput:(id)a0;
- (BOOL)showingFacemarkCandidates;
- (BOOL)hasIdeographicCandidates;
- (void *)mecabraCandidateRefFromPointerValue:(id)a0;
- (BOOL)updateCompletionCandidatesIfAppropriate;
- (id)outputByConvertingDecimalPointForInput:(id)a0;
- (BOOL)handlePairedPunctuationInput:(id)a0 context:(id)a1;

@end
