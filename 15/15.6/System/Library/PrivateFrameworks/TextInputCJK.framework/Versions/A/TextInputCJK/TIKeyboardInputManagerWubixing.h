@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubixing : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion>

@property (retain, nonatomic) TIKeyboardCandidate *autoConfirmationCandidate;

+ (Class)wordSearchClass;

- (void).cxx_destruct;
- (unsigned long long)initialSelectedIndex;
- (char)acceptAutocorrectionCommitsInline;
- (unsigned int)inputIndex;
- (id)keyboardBehaviors;
- (char)supportsNumberKeySelection;
- (char)usesPunctuationKeysForRowNavigation;
- (id)sortingMethods;
- (int)inputMethodType;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)updateMarkedText;
- (char)isValidWubiInput:(id)a0;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;

@end
