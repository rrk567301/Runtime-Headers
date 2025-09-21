@class TIWordSearch, NSString, TIMathSymbolPunctuationController, NSOperationQueue, CIMCandidateData;

@interface TIKeyboardInputManagerChinese : TIKeyboardInputManagerMecabra {
    TIWordSearch *_wordSearch;
}

@property (readonly) CIMCandidateData *candidateData;
@property (readonly) NSOperationQueue *operationQueue;
@property (readonly) TIMathSymbolPunctuationController *mathSymbolPunctuationController;
@property char duringDeleteFromInputWithContext;
@property (nonatomic) char isAlphabeticPlane;
@property (copy, nonatomic) NSString *pairedPunctuationOpenQuote;
@property (copy, nonatomic) NSString *pairedPunctuationSelectedText;
@property (readonly, nonatomic) unsigned long long predictionOptions;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *modeName;
@property (nonatomic) char isInCompletionMode;
@property (nonatomic) char shouldLearnAcceptedCandidate;
@property (copy, nonatomic) NSString *currentKeyHint;

+ (Class)wordSearchClass;
+ (id)GB18030CandidateFromString:(id)a0;
+ (id)pairedPunctuationDictionary;
+ (id)punctuationPredictionsForString:(id)a0;
+ (char)shouldEnableHalfWidthPunctuationForDocumentContext:(id)a0 composedText:(id)a1;
+ (id)unicodeCandidateFromString:(id)a0;

- (void).cxx_destruct;
- (void)setInput:(id)a0;
- (void)clearInput;
- (unsigned long long)initialSelectedIndex;
- (id)firstCandidate;
- (id)replacementForDoubleSpace;
- (id)searchStringForMarkedText;
- (id)wordCharacters;
- (id)didAcceptCandidate:(id)a0;
- (id)sortingMethods;
- (id)sortMethodsGroupsForCandidates:(id)a0;
- (char)alwaysShowExtensionCandidatesForSortingMethod:(id)a0;
- (id)candidateResultSetFromCandidates:(id)a0 proactiveTriggers:(id)a1;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)deleteFromInputWithContext:(id)a0;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (void)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1 completion:(id /* block */)a2;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (void)inputLocationChanged;
- (void)loadFavoniusTypingModel;
- (void)setLearnsCorrection:(char)a0;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(char)a2;
- (void)syncToLayoutState:(id)a0;
- (id)titleForSortingMethod:(id)a0;
- (id)wordSearch;
- (char)supportsPairedPunctutationInput;
- (void)acceptFirstCandidateWithContext:(id)a0;
- (id)candidateResultSetUsedForCompletionQuery;
- (id)completionCandidateResultSetForKeyHint:(id)a0;
- (id)generateCompletions;
- (char)handlePairedPunctuationInput:(id)a0 context:(id)a1;
- (char)hasIdeographicCandidates;
- (void *)initImplementationWithMode:(id)a0 andLanguage:(id)a1;
- (char)isFacemarkInput:(id)a0;
- (void *)mecabraCandidateRefFromPointerValue:(id)a0;
- (id)outputByConvertingDecimalPointForInput:(id)a0;
- (void)resetCommitHistory;
- (char)shouldEnableHalfWidthPunctuationForCurrentInputContext;
- (char)shouldSearchCompletionForSubstrings;
- (char)showingFacemarkCandidates;
- (char)updateCompletionCandidatesIfAppropriate;
- (void)willExitCompletionMode;
- (void)wordSearchEngineDidFindPredictionCandidates:(id)a0;

@end
