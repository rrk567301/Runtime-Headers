@class TIAutocorrectionList;

@interface TIKeyboardInputManager_mul : TIKeyboardInputManager {
    BOOL _isSuspended;
}

@property (nonatomic) BOOL compositionDisabled;
@property (readonly, nonatomic) BOOL shouldDynamicallySwitchComposedTextBetweenInternalAndExternal;
@property (retain, nonatomic) TIAutocorrectionList *pregeneratedAutocorrectionList;

- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)clearInput;
- (id)keyboardConfiguration;
- (void)didUpdateInputModeProbabilities:(id)a0;
- (void)didUpdateInputModes:(id)a0;
- (void)enumerateInputModesWithBlock:(id /* block */)a0;
- (unsigned int)externalIndexToInternal:(unsigned int)a0;
- (id)externalStringToInternal:(id)a0;
- (void)generateAutocorrectionsWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 candidateHandler:(id)a2;
- (id)handleKeyboardInput:(id)a0;
- (unsigned int)internalIndexToExternal:(unsigned int)a0;
- (id)internalStringToExternal:(id)a0;
- (BOOL)isUsingMultilingual;
- (void *)languageModelContainer;
- (unsigned int)lexiconIDForInputMode:(id)a0;
- (struct { struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x0; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x1; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x2; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x3; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x4; unsigned int x5; float x6; })lexiconInfoForInputMode:(id)a0;
- (struct vector<KB::LexiconInfo, std::allocator<KB::LexiconInfo>> { struct *x0; struct *x1; struct __compressed_pair<KB::LexiconInfo *, std::allocator<KB::LexiconInfo>> { struct *x0; } x2; })lexiconInformationVector;
- (id)lexiconLocaleOfString:(id)a0 inputMode:(id)a1;
- (void)loadDictionaries;
- (id)resourceInputModes;
- (BOOL)shouldUpdateDictionary;
- (BOOL)updateLanguageModelForKeyboardState;
- (void)updateLanguagePriors;
- (float)weightForInputMode:(id)a0;

@end
