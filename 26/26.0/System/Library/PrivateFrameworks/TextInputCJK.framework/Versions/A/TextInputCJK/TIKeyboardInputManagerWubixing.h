@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubixing : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion>

@property (retain, nonatomic) TIKeyboardCandidate *autoConfirmationCandidate;

+ (Class)wordSearchClass;

- (BOOL)supportsNumberKeySelection;
- (BOOL)acceptAutocorrectionCommitsInline;
- (id)keyboardBehaviors;
- (unsigned int)inputIndex;
- (BOOL)usesPunctuationKeysForRowNavigation;
- (void).cxx_destruct;
- (unsigned long long)initialSelectedIndex;
- (id)sortingMethods;
- (int)inputMethodType;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)updateMarkedText;
- (BOOL)isValidWubiInput:(id)a0;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;

@end
