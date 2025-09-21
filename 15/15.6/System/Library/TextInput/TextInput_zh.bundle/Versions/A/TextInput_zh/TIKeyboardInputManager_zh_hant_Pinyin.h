@interface TIKeyboardInputManager_zh_hant_Pinyin : TIKeyboardInputManagerPinyin

- (id)locale;
- (id)keyEventMap;
- (int)inputMethodType;
- (void *)initImplementation;
- (char)usesComposingInput;
- (id)phoneticSortingMethod;

@end
