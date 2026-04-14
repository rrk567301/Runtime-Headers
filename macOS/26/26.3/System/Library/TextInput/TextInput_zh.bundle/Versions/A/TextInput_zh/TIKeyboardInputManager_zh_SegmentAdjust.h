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

- (BOOL)supportsNumberKeySelection;
- (BOOL)delayedCandidateList;
- (BOOL)usesCandidateSelection;
- (void)clearInput;
- (BOOL)usesLiveConversion;
- (id)handleKeyboardInput:(id)a0;
- (id)keyEventMap;
- (id)wordCharacters;
- (unsigned int)inputIndex;
- (id)keyboardBehaviors;
- (void).cxx_destruct;
- (id)inputString;
- (void)loadDictionaries;
- (BOOL)supportsSetPhraseBoundary;
- (unsigned int)inputCount;
- (id)didAcceptCandidate:(id)a0;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)loadFavoniusTypingModel;
- (id)wordSearch;
- (id)convertString;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 inputManager:(id)a3 wordSearch:(id)a4;

@end
