@interface TIKeyboardInputManager_zh_hans_Pinyin : TIKeyboardInputManager_zh_Pinyin

- (id)locale;
- (BOOL)usesContinuousPath;
- (id)keyEventMap;
- (BOOL)usesComposingInput;
- (void *)initImplementation;
- (int)inputMethodType;
- (id)phoneticSortingMethod;

@end
