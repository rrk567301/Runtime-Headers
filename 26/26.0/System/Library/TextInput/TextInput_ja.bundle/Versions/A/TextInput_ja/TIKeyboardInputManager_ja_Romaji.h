@class NSString, NSMutableArray, TIMathSymbolPunctuationController;

@interface TIKeyboardInputManager_ja_Romaji : TIKeyboardInputManager_ja {
    NSMutableArray *_externalIndexToInternalIndexMappingArray;
    unsigned long long _externalInputIndex;
    NSString *_externalString;
    TIMathSymbolPunctuationController *_mathSymbolPunctuationController;
}

+ (Class)wordSearchClass;
+ (id)_convertToKana:(id)a0;

- (BOOL)usesCandidateSelection;
- (void)clearInput;
- (void)updateState;
- (id)wordCharacters;
- (void)dealloc;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (void)setInputIndex:(unsigned int)a0;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)shouldFixupIncompleteRomaji;
- (unsigned int)inputIndex;
- (unsigned int)inputCount;
- (void)loadDictionaries;
- (id)inputString;
- (void).cxx_destruct;
- (id)uncommittedText;
- (void)checkAutocorrectionDictionaries;
- (void)addInput:(id)a0 withContext:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })analysisStringRange;
- (id)convertInput:(id)a0;
- (id)convertInputsToSyntheticInputUptoCount:(int)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)inputLocationChanged;
- (void)keyLayoutWillChangeTo:(id)a0 from:(id)a1;
- (id)remainingInput;
- (void)updateComposedText;
- (BOOL)usesComposingInput;
- (id)validCharacterSetForAutocorrection;
- (id)_convertStringWithBoundary:(unsigned long long)a0;
- (unsigned long long)actualInternalInputIndex;
- (id)getInputStringFromTopCandidate;
- (id)liveConversionTextInputManager;
- (unsigned long long)remainingInputLengthOfCandidate:(id)a0;
- (id)transliterate:(id)a0;

@end
