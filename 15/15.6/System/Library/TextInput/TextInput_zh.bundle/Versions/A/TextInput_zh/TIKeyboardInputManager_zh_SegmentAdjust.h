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

- (void).cxx_destruct;
- (unsigned int)inputCount;
- (id)inputString;
- (char)supportsSetPhraseBoundary;
- (char)usesCandidateSelection;
- (void)clearInput;
- (char)delayedCandidateList;
- (unsigned int)inputIndex;
- (id)keyEventMap;
- (id)keyboardBehaviors;
- (char)supportsNumberKeySelection;
- (char)usesLiveConversion;
- (id)wordCharacters;
- (id)didAcceptCandidate:(id)a0;
- (char)_adjustPhraseBoundaryInForwardDirection:(char)a0 granularity:(int)a1;
- (id)handleKeyboardInput:(id)a0;
- (void)loadDictionaries;
- (void)loadFavoniusTypingModel;
- (id)wordSearch;
- (id)convertString;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 inputManager:(id)a3 wordSearch:(id)a4;

@end
