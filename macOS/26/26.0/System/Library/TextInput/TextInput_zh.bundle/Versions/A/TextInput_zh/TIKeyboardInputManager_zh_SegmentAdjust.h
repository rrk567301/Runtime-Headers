@class TIMecabraIMLogger, NSString, TIKeyboardCandidate, NSArray, TIWordSearch, TIZhuyinInputManager;

@interface TIKeyboardInputManager_zh_SegmentAdjust : TIKeyboardInputManagerMecabra {
    TIWordSearch *_wordSearch;
}

@property (copy, nonatomic) TIZhuyinInputManager *inputManager;
@property (readonly, copy, nonatomic) TIMecabraIMLogger *logger;
@property (copy, nonatomic) TIKeyboardCandidate *currentCandidate;
@property (copy, nonatomic) NSString *remainingInput;
@property long long segmentIndex;
@property (copy, nonatomic) NSArray *segments;

- (BOOL)delayedCandidateList;
- (BOOL)supportsNumberKeySelection;
- (BOOL)usesCandidateSelection;
- (void)clearInput;
- (id)wordCharacters;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)usesLiveConversion;
- (id)keyboardBehaviors;
- (id)keyEventMap;
- (unsigned int)inputIndex;
- (unsigned int)inputCount;
- (void)loadDictionaries;
- (id)inputString;
- (BOOL)supportsSetPhraseBoundary;
- (void).cxx_destruct;
- (id)didAcceptCandidate:(id)a0;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)loadFavoniusTypingModel;
- (id)wordSearch;
- (id)convertString;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 inputManager:(id)a3 wordSearch:(id)a4;

@end
