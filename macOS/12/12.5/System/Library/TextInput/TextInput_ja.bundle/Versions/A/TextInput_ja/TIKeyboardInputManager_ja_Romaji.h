@class NSString, NSMutableArray, TIMathSymbolPunctuationController;

@interface TIKeyboardInputManager_ja_Romaji : TIKeyboardInputManager_ja {
    NSMutableArray *_externalIndexToInternalIndexMappingArray;
    unsigned long long _externalInputIndex;
    NSString *_externalString;
    TIMathSymbolPunctuationController *_mathSymbolPunctuationController;
}

+ (Class)wordSearchClass;

- (void)dealloc;
- (void).cxx_destruct;
- (void)updateState;
- (unsigned int)inputCount;
- (id)inputString;
- (void)clearInput;
- (unsigned int)inputIndex;
- (id)wordCharacters;
- (BOOL)usesCandidateSelection;
- (BOOL)shouldFixupIncompleteRomaji;
- (void)setInputIndex:(unsigned int)a0;
- (id)handleKeyboardInput:(id)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })analysisStringRange;
- (id)validCharacterSetForAutocorrection;
- (void)loadDictionaries;
- (void)inputLocationChanged;
- (void)addInput:(id)a0 withContext:(id)a1;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)remainingInput;
- (void)checkAutocorrectionDictionaries;
- (id)liveConversionTextInputManager;
- (id)transliterate:(id)a0;
- (unsigned long long)actualInternalInputIndex;
- (id)_convertStringWithBoundary:(unsigned long long)a0;
- (unsigned long long)remainingInputLengthOfCandidate:(id)a0;

@end
