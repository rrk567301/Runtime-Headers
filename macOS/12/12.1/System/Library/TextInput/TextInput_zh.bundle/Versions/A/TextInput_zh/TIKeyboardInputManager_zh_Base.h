@interface TIKeyboardInputManager_zh_Base : TIKeyboardInputManagerChinesePhonetic

- (id)keyboardBehaviors;
- (id)inputsToReject;
- (BOOL)supportsNumberKeySelection;
- (id)keyEventMap;
- (BOOL)acceptInputString:(id)a0;
- (void *)initImplementation;
- (int)inputMethodType;
- (BOOL)shouldSearchCompletionForSubstrings;
- (BOOL)_shouldCommitInputDirectly:(id)a0;
- (id)phoneticSortingMethod;

@end
