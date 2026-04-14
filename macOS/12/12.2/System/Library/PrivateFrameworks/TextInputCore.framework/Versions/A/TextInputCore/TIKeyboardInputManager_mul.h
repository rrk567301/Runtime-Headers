@interface TIKeyboardInputManager_mul : TIKeyboardInputManager {
    BOOL _isSuspended;
}

- (void)resume;
- (void)suspend;
- (id)keyboardConfiguration;
- (BOOL)updateLanguageModelForKeyboardState;
- (void)enumerateInputModesWithBlock:(id /* block */)a0;
- (unsigned int)lexiconIDForInputMode:(id)a0;
- (float)weightForInputMode:(id)a0;
- (struct { struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x0; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x1; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x2; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x3; struct String { unsigned short x0; unsigned short x1; unsigned short x2; unsigned char x3; char *x4; char x5[16]; } x4; unsigned int x5; float x6; })lexiconInfoForInputMode:(id)a0;
- (struct vector<KB::LexiconInfo, std::allocator<KB::LexiconInfo>> { struct *x0; struct *x1; struct __compressed_pair<KB::LexiconInfo *, std::allocator<KB::LexiconInfo>> { struct *x0; } x2; })lexiconInformationVector;
- (void *)languageModelContainer;
- (BOOL)shouldUpdateDictionary;
- (void)loadDictionaries;
- (void)didUpdateInputModes:(id)a0;
- (void)didUpdateInputModeProbabilities:(id)a0;
- (void)updateLanguagePriors;
- (id)resourceInputModes;

@end
