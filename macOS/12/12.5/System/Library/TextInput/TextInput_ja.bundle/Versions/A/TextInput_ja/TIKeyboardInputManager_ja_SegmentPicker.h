@class TIWordSearch, NSString, TIKeyboardCandidate, TILiveConversionSegments, NSArray;

@interface TIKeyboardInputManager_ja_SegmentPicker : TIKeyboardInputManager_zh_ja {
    TIWordSearch *_wordSearch;
}

@property (copy, nonatomic) NSString *remainingInput;
@property (copy, nonatomic) id /* block */ syncKeyboardStateHandler;
@property (retain, nonatomic) TILiveConversionSegments *liveConversionSegments;
@property (copy, nonatomic) TIKeyboardCandidate *currentCandidate;
@property (nonatomic) BOOL supportsSetPhraseBoundary;
@property (nonatomic) BOOL shouldShowCandidateWindow;
@property (nonatomic) long long transliterationType;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) NSArray *segments;

- (void).cxx_destruct;
- (id)markedText;
- (unsigned int)inputCount;
- (id)inputString;
- (unsigned int)inputIndex;
- (id)candidateResultSet;
- (BOOL)syncToKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (id)wordCharacters;
- (BOOL)commitsAcceptedCandidate;
- (BOOL)usesCandidateSelection;
- (BOOL)usesLiveConversion;
- (BOOL)delayedCandidateList;
- (id)keyboardBehaviors;
- (id)keyEventMap;
- (id)searchStringForMarkedText;
- (unsigned long long)phraseBoundary;
- (id)didAcceptCandidate:(id)a0;
- (void)selectCandidate:(id)a0;
- (id)handleKeyboardInput:(id)a0;
- (id)wordSearch;
- (id)rawInputString;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)loadFavoniusTypingModel;
- (void)loadDictionaries;
- (BOOL)closeCandidateGenerationContextWithResults:(id)a0;
- (void)openCandidateGenerationContextWithCompletionHandler:(id /* block */)a0;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (void)_selectPartialCandidate:(id)a0 forOperation:(id)a1;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 at:(unsigned long long)a3 wordSearch:(id)a4;

@end
