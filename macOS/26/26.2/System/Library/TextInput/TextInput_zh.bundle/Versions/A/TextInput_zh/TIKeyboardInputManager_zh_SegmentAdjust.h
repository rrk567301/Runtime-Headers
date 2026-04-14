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

- (BOOL)usesCandidateSelection;
- (void)clearInput;
- (BOOL)supportsNumberKeySelection;
- (unsigned int)inputIndex;
- (BOOL)usesLiveConversion;
- (void).cxx_destruct;
- (BOOL)delayedCandidateList;
- (id)wordCharacters;
- (void)loadDictionaries;
- (id)keyEventMap;
- (id)handleKeyboardInput:(id)a0;
- (id)inputString;
- (BOOL)supportsSetPhraseBoundary;
- (unsigned int)inputCount;
- (id)keyboardBehaviors;
- (id)didAcceptCandidate:(id)a0;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)loadFavoniusTypingModel;
- (id)wordSearch;
- (id)convertString;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 inputManager:(id)a3 wordSearch:(id)a4;

@end
