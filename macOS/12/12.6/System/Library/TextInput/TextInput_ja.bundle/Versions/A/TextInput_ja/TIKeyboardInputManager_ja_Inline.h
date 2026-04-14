@class TIWordSearch, NSString, TIKeyboardCandidate, NSArray;
@protocol TIMarkedTextBuffer;

@interface TIKeyboardInputManager_ja_Inline : TIKeyboardInputManager_ja_Base {
    TIWordSearch *_wordSearch;
}

@property (retain, nonatomic) id<TIMarkedTextBuffer> markedTextBuffer;
@property (retain, nonatomic) TIKeyboardCandidate *inlineCandidate;
@property (copy, nonatomic) NSString *remainingInput;
@property (retain, nonatomic) NSArray *segments;
@property (nonatomic) BOOL romajiMode;

- (void).cxx_destruct;
- (unsigned int)inputCount;
- (void)commitComposition;
- (id)inputString;
- (void)clearInput;
- (unsigned int)inputIndex;
- (id)candidateResultSet;
- (id)wordCharacters;
- (id)searchStringForMarkedText;
- (void)setMarkedText;
- (unsigned long long)phraseBoundary;
- (id)didAcceptCandidate:(id)a0;
- (void)syncToKeyboardState:(id)a0;
- (id)handleKeyboardInput:(id)a0;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (id)wordSearch;
- (id)rawInputString;
- (id)geometryModelData;
- (void)abortComposition;
- (void)addInput:(id)a0 withContext:(id)a1;
- (id)keyboardConfigurationLayoutTag;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)openCandidateGenerationContextWithCompletionHandler:(id /* block */)a0;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1 wordSearch:(id)a2 romajiMode:(BOOL)a3;
- (void)invokeEditMode;
- (void)generateInlineCandidate;
- (void)deleteLastCharacter:(unsigned long long *)a0;
- (BOOL)shouldSkipCandidateGeneration;
- (void)removeInlineCandidate:(id)a0;
- (id)convertString;
- (unsigned int)rawInputIndex;
- (BOOL)isEditMode;
- (void)syncWithEditMode:(id)a0;

@end
