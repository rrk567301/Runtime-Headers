@class TIWordSearch, NSString, TIKeyboardCandidate, TILiveConversionSegments, NSArray;

@interface TIKeyboardInputManager_ja_SegmentPicker : TIKeyboardInputManagerMecabra {
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

- (BOOL)delayedCandidateList;
- (BOOL)usesCandidateSelection;
- (id)searchStringForMarkedText;
- (id)wordCharacters;
- (id)handleKeyboardInput:(id)a0;
- (id)markedText;
- (BOOL)usesLiveConversion;
- (BOOL)syncToKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)commitsAcceptedCandidate;
- (id)keyboardBehaviors;
- (id)keyEventMap;
- (unsigned int)inputIndex;
- (unsigned int)inputCount;
- (void)loadDictionaries;
- (unsigned long long)phraseBoundary;
- (id)inputString;
- (void).cxx_destruct;
- (id)candidateResultSet;
- (id)didAcceptCandidate:(id)a0;
- (void)selectCandidate:(id)a0;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (BOOL)closeCandidateGenerationContextWithResults:(id)a0;
- (void)loadFavoniusTypingModel;
- (void)openCandidateGenerationContextWithCandidateHandler:(id)a0;
- (id)rawInputString;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (id)wordSearch;
- (void)_selectPartialCandidate:(id)a0 forOperation:(id)a1;
- (void)finishSyncToKeyboardState;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 at:(unsigned long long)a3 wordSearch:(id)a4;

@end
