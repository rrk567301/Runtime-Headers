@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubixing : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion>

@property (retain, nonatomic) TIKeyboardCandidate *autoConfirmationCandidate;

+ (Class)wordSearchClass;

- (void).cxx_destruct;
- (unsigned long long)initialSelectedIndex;
- (unsigned int)inputIndex;
- (BOOL)acceptAutocorrectionCommitsInline;
- (id)keyboardBehaviors;
- (BOOL)supportsNumberKeySelection;
- (BOOL)usesPunctuationKeysForRowNavigation;
- (id)sortingMethods;
- (void)addInput:(id)a0 withContext:(id)a1;
- (int)inputMethodType;
- (void)updateMarkedText;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (BOOL)isValidWubiInput:(id)a0;

@end
