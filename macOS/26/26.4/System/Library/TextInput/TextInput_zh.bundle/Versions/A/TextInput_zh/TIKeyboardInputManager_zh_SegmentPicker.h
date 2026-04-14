@class TIWordSearch, NSString, NSArray, NSMutableArray;

@interface TIKeyboardInputManager_zh_SegmentPicker : TIKeyboardInputManagerMecabra {
    NSMutableArray *_segments;
}

@property (copy, nonatomic) TIWordSearch *kbws;
@property (copy, nonatomic) NSString *rawInputString;
@property (copy, nonatomic) NSString *inputString;
@property (copy, nonatomic) NSString *autoCommitString;
@property (nonatomic) unsigned int inputIndex;
@property (copy, nonatomic) NSString *remainingInput;
@property (copy, nonatomic) NSMutableArray *originalSegments;
@property (retain, nonatomic) NSString *alternateDisplayString;
@property (nonatomic) BOOL shouldShowCandidateWindow;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) NSArray *segments;

- (BOOL)supportsNumberKeySelection;
- (BOOL)usesCandidateSelection;
- (void)loadDictionaries;
- (id)searchStringForMarkedText;
- (unsigned long long)phraseBoundary;
- (BOOL)delayedCandidateList;
- (id)markedText;
- (BOOL)supportsSetPhraseBoundary;
- (id)wordCharacters;
- (BOOL)commitsAcceptedCandidate;
- (id)handleKeyboardInput:(id)a0;
- (void).cxx_destruct;
- (id)keyboardBehaviors;
- (BOOL)usesLiveConversion;
- (id)keyEventMap;
- (id)candidateResultSet;
- (id)didAcceptCandidate:(id)a0;
- (void)selectCandidate:(id)a0;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (BOOL)closeCandidateGenerationContextWithResults:(id)a0;
- (void)loadFavoniusTypingModel;
- (void)openCandidateGenerationContextWithCandidateHandler:(id)a0;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (void)updateMarkedText;
- (id)convertString;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 at:(unsigned long long)a3 wordSearch:(id)a4;

@end
