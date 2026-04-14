@interface TIKeyboardInputManager_zh_Base : TIKeyboardInputManagerChinesePhonetic

- (id)inputsToReject;
- (BOOL)supportsNumberKeySelection;
- (BOOL)acceptInputString:(id)a0;
- (id)keyboardBehaviors;
- (id)keyEventMap;
- (int)inputMethodType;
- (void *)initImplementation;
- (BOOL)shouldSearchCompletionForSubstrings;
- (BOOL)_shouldCommitInputDirectly:(id)a0;
- (id)phoneticSortingMethod;

@end
