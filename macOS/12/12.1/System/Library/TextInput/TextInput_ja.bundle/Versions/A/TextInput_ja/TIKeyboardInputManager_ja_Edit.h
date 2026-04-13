@class TIWordSearch, NSString, NSArray, TIKeyboardCandidate, NSMutableArray;
@protocol TIMarkedTextBuffer;

@interface TIKeyboardInputManager_ja_Edit : TIKeyboardInputManager_zh_ja {
    TIWordSearch *_wordSearch;
}

@property (retain, nonatomic) NSMutableArray *mutableSegments;
@property (retain, nonatomic) id<TIMarkedTextBuffer> kanaString;
@property (readonly, nonatomic) NSString *prefixString;
@property (nonatomic) long long escapeKeyPressed;
@property (readonly, nonatomic) NSArray *segments;
@property (readonly, nonatomic) TIKeyboardCandidate *inlineCandidate;
@property (readonly, nonatomic) NSString *rawInputString;
@property (nonatomic) BOOL shouldCancelIfPhraseBoundaryChanged;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned int)inputCount;
- (id)inputString;
- (void)clearInput;
- (unsigned int)inputIndex;
- (BOOL)supportsSetPhraseBoundary;
- (BOOL)usesCandidateSelection;
- (BOOL)usesLiveConversion;
- (BOOL)delayedCandidateList;
- (id)keyboardBehaviors;
- (id)wordCharacters;
- (id)keyEventMap;
- (void)setInputIndex:(unsigned int)a0;
- (unsigned long long)phraseBoundary;
- (id)wordSearch;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)loadDictionaries;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)loadFavoniusTypingModel;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 segments:(id)a2 wordSearch:(id)a3 romajiMode:(BOOL)a4 conversionEnabled:(BOOL)a5;
- (unsigned int)rawInputIndex;
- (id)transliterate:(id)a0;
- (BOOL)handleBackspace:(id)a0;
- (BOOL)handleSpaceKey:(id)a0;
- (BOOL)handleEsc:(id)a0;
- (BOOL)handleCancelEditMode:(id)a0;
- (void)revertLastSegment;
- (void)setRawInputString:(id)a0;

@end
