@interface TIKeyboardInputManager_zh_Base : TIKeyboardInputManagerChinesePhonetic

- (BOOL)supportsNumberKeySelection;
- (BOOL)acceptInputString:(id)a0;
- (id)inputsToReject;
- (id)keyboardBehaviors;
- (id)keyEventMap;
- (int)inputMethodType;
- (void *)initImplementation;
- (id)validCharacterSetForSegmentation;
- (BOOL)_shouldCommitInputDirectly:(id)a0;
- (id)phoneticSortingMethod;
- (BOOL)shouldSearchCompletionForSubstrings;

@end
