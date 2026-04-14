@class TIWordSearch, NSString, NSArray, NSMutableArray;

@interface TIKeyboardInputManager_zh_SegmentPicker : TIKeyboardInputManager_zh_ja {
    NSMutableArray *_segments;
}

@property (copy, nonatomic) TIWordSearch *kbws;
@property (copy, nonatomic) NSString *rawInputString;
@property (copy, nonatomic) NSString *inputString;
@property (copy, nonatomic) NSString *autoCommitString;
@property (nonatomic) unsigned int inputIndex;
@property (copy, nonatomic) NSString *remainingInput;
@property (copy, nonatomic) NSArray *originalSegments;
@property (retain, nonatomic) NSString *alternateDisplayString;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) NSArray *segments;

- (void).cxx_destruct;
- (id)markedText;
- (id)candidateResultSet;
- (BOOL)supportsNumberKeySelection;
- (BOOL)supportsSetPhraseBoundary;
- (BOOL)usesCandidateSelection;
- (BOOL)usesLiveConversion;
- (BOOL)delayedCandidateList;
- (id)keyboardBehaviors;
- (id)keyEventMap;
- (id)searchStringForMarkedText;
- (unsigned long long)phraseBoundary;
- (id)didAcceptCandidate:(id)a0;
- (id)handleKeyboardInput:(id)a0;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)loadFavoniusTypingModel;
- (void)loadDictionaries;
- (BOOL)closeCandidateGenerationContextWithResults:(id)a0;
- (void)openCandidateGenerationContextWithCompletionHandler:(id /* block */)a0;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (void)updateMarkedText;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 at:(unsigned long long)a3 wordSearch:(id)a4;
- (id)convertString;

@end
