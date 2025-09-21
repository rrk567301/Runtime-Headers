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
@property (nonatomic) char shouldShowCandidateWindow;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) NSArray *segments;

- (void).cxx_destruct;
- (id)markedText;
- (char)supportsSetPhraseBoundary;
- (char)usesCandidateSelection;
- (id)candidateResultSet;
- (char)commitsAcceptedCandidate;
- (char)delayedCandidateList;
- (id)keyEventMap;
- (id)keyboardBehaviors;
- (id)searchStringForMarkedText;
- (char)supportsNumberKeySelection;
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
- (void)setPhraseBoundary:(unsigned long long)a0;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(char)a2;
- (void)updateMarkedText;
- (id)convertString;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 at:(unsigned long long)a3 wordSearch:(id)a4;

@end
