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
- (BOOL)usesCandidateSelection;
- (BOOL)shouldFixupIncompleteRomaji;
- (void)setInputIndex:(unsigned int)a0;
- (id)wordCharacters;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)handleKeyboardInput:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })analysisStringRange;
- (id)validCharacterSetForAutocorrection;
- (void)loadDictionaries;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)inputLocationChanged;
- (id)remainingInput;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)checkAutocorrectionDictionaries;
- (id)liveConversionTextInputManager;
- (id)transliterate:(id)a0;
- (id)_convertStringWithBoundary:(unsigned long long)a0;
- (unsigned long long)actualInternalInputIndex;
- (unsigned long long)remainingInputLengthOfCandidate:(id)a0;

@end
