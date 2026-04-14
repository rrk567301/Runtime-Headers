@interface TIKeyboardInputManager_zh_hans_Pinyin : TIKeyboardInputManagerPinyin

- (id)locale;
- (BOOL)usesContinuousPath;
- (id)keyEventMap;
- (BOOL)usesComposingInput;
- (void *)initImplementation;
- (int)inputMethodType;
- (id)phoneticSortingMethod;

@end
