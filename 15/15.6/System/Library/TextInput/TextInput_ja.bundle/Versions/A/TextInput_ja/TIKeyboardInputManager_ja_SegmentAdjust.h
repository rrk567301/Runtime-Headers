@class NSString, NSArray, TIWordSearch;

@interface TIKeyboardInputManager_ja_SegmentAdjust : TIKeyboardInputManagerMecabra {
    TIWordSearch *_wordSearch;
}

@property (nonatomic) unsigned long long breaktAt;
@property (readonly, nonatomic) NSString *inputString;
@property (readonly, nonatomic) NSString *composingInputString;
@property (readonly, nonatomic) NSString *contextString;
@property (copy, nonatomic) NSArray *contextSegments;
@property (nonatomic) unsigned long long segmentLength;
@property (nonatomic) char romajiEnabled;
@property (copy, nonatomic) NSArray *segments;
@property (nonatomic) unsigned long long index;

- (void).cxx_destruct;
- (id)markedText;
- (void)commitComposition;
- (char)supportsSetPhraseBoundary;
- (char)usesCandidateSelection;
- (id)candidateResultSet;
- (char)commitsAcceptedCandidate;
- (char)delayedCandidateList;
- (unsigned int)inputIndex;
- (id)keyboardBehaviors;
- (char)usesLiveConversion;
- (void)composeTextWith:(id)a0;
- (char)_adjustPhraseBoundaryInForwardDirection:(char)a0 granularity:(int)a1;
- (char)closeCandidateGenerationContextWithResults:(id)a0;
- (id)handleKeyboardInput:(id)a0;
- (void)loadDictionaries;
- (void)loadFavoniusTypingModel;
- (void)openCandidateGenerationContextWithCandidateHandler:(id)a0;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(char)a2;
- (id)wordSearch;
- (void)_notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (void)generateNewSegments:(unsigned long long)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 at:(unsigned long long)a3 romajiEnabled:(char)a4 wordSearch:(id)a5;
- (void)updateInputString;

@end
