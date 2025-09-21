@class TIWordSearch, NSString, TIKeyboardCandidate, TICandidateSorter;

@interface TIKeyboardInputManager_ja_Candidates : TIKeyboardInputManagerMecabra {
    TIWordSearch *_wordSearch;
}

@property (copy, nonatomic) TICandidateSorter *candidateSorter;
@property (copy, nonatomic) NSString *inputString;
@property (copy, nonatomic) TIKeyboardCandidate *defaultCandidate;
@property (copy, nonatomic) NSString *autoCommitString;
@property (nonatomic) char showsPartialCandidate;
@property (nonatomic) char autoSelectFirstCandidate;
@property (nonatomic) NSString *autoSelectCandidate;
@property (nonatomic) long long autoSelectTransliterateCandidate;
@property (nonatomic) char hardwareKeyboardMode;

+ (unsigned long long)sortFromSortTitle:(id)a0;
+ (id)sortTitleFromSort:(unsigned long long)a0;

- (void).cxx_destruct;
- (char)delayedCandidateList;
- (id)keyboardConfiguration;
- (char)usesLiveConversion;
- (id)sortingMethods;
- (char)_adjustPhraseBoundaryInForwardDirection:(char)a0 granularity:(int)a1;
- (char)alwaysShowExtensionCandidatesForSortingMethod:(id)a0;
- (id)candidateResultSetFromCandidates:(id)a0;
- (id)candidateResultSetFromCandidates:(id)a0 proactiveTriggers:(id)a1;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (id)handleKeyboardInput:(id)a0;
- (id)indexTitlesForGroupTitles:(id)a0 sortingMethod:(id)a1;
- (void)loadDictionaries;
- (void)loadFavoniusTypingModel;
- (char)supportsCandidateGeneration;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(char)a2;
- (id)titleForSortingMethod:(id)a0;
- (id)wordSearch;
- (void)_notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (long long)indexFromTransliterationType:(long long)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 wordSearch:(id)a2;
- (char)makeCandidatesWithInputString:(id)a0 autoCommitString:(id)a1 contextString:(id)a2 predictionEnabled:(char)a3 reanalysisMode:(char)a4 singlePhrase:(char)a5 geometoryModelData:(id)a6;
- (id)transliterationCandidates;
- (long long)transliterationCandidatesCount;

@end
