@interface TIKeyboardInputManager_zh_Base : TIKeyboardInputManagerChinesePhonetic

- (BOOL)supportsNumberKeySelection;
- (BOOL)acceptInputString:(id)a0;
- (id)keyboardBehaviors;
- (id)keyEventMap;
- (id)inputsToReject;
- (void *)initImplementation;
- (int)inputMethodType;
- (BOOL)shouldSearchCompletionForSubstrings;
- (BOOL)_shouldCommitInputDirectly:(id)a0;
- (id)phoneticSortingMethod;

@end
