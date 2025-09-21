@interface TIKeyboardInputManager_zh_Base : TIKeyboardInputManagerChinesePhonetic

- (char)acceptInputString:(id)a0;
- (id)inputsToReject;
- (id)keyEventMap;
- (id)keyboardBehaviors;
- (char)supportsNumberKeySelection;
- (int)inputMethodType;
- (void *)initImplementation;
- (id)validCharacterSetForSegmentation;
- (char)_shouldCommitInputDirectly:(id)a0;
- (id)phoneticSortingMethod;
- (char)shouldSearchCompletionForSubstrings;

@end
