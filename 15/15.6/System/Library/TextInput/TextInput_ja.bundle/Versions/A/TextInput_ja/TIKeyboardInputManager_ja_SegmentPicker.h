@class TIWordSearch, NSString, TIKeyboardCandidate, TILiveConversionSegments, NSArray;

@interface TIKeyboardInputManager_ja_SegmentPicker : TIKeyboardInputManagerMecabra {
    TIWordSearch *_wordSearch;
}

@property (copy, nonatomic) NSString *remainingInput;
@property (copy, nonatomic) id /* block */ syncKeyboardStateHandler;
@property (retain, nonatomic) TILiveConversionSegments *liveConversionSegments;
@property (copy, nonatomic) TIKeyboardCandidate *currentCandidate;
@property (nonatomic) char supportsSetPhraseBoundary;
@property (nonatomic) char shouldShowCandidateWindow;
@property (nonatomic) long long transliterationType;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) NSArray *segments;

- (void).cxx_destruct;
- (id)markedText;
- (unsigned int)inputCount;
- (id)inputString;
- (char)usesCandidateSelection;
- (id)candidateResultSet;
- (char)commitsAcceptedCandidate;
- (char)delayedCandidateList;
- (unsigned int)inputIndex;
- (id)keyEventMap;
- (id)keyboardBehaviors;
- (id)searchStringForMarkedText;
- (char)syncToKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (char)usesLiveConversion;
- (id)wordCharacters;
- (unsigned long long)phraseBoundary;
- (id)didAcceptCandidate:(id)a0;
- (void)selectCandidate:(id)a0;
- (char)_adjustPhraseBoundaryInForwardDirection:(char)a0 granularity:(int)a1;
- (char)closeCandidateGenerationContextWithResults:(id)a0;
- (id)handleKeyboardInput:(id)a0;
- (void)loadDictionaries;
- (void)loadFavoniusTypingModel;
- (void)openCandidateGenerationContextWithCandidateHandler:(id)a0;
- (id)rawInputString;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(char)a2;
- (id)wordSearch;
- (void)_selectPartialCandidate:(id)a0 forOperation:(id)a1;
- (void)finishSyncToKeyboardState;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 at:(unsigned long long)a3 wordSearch:(id)a4;

@end
