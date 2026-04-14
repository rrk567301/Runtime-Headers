@interface TIKeyboardInputManager_zh_Pinyin : TIKeyboardInputManagerChinesePhonetic

- (unsigned long long)initialSelectedIndex;
- (BOOL)usesPunctuationKeysForRowNavigation;
- (BOOL)usesAutoDeleteWord;
- (BOOL)acceptAutocorrectionCommitsInline;
- (id)keyboardBehaviors;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (id)validCharacterSetForAutocorrection;
- (BOOL)shouldSearchCompletionForSubstrings;
- (BOOL)supportsPairedPunctutationInput;
- (BOOL)isSpecialInput:(id)a0;
- (id)remapInput:(id)a0 isFacemarkInput:(BOOL *)a1;
- (BOOL)usesGeometryModelData;
- (BOOL)currentShuangpinTypeUsesSemicolon;
- (BOOL)isShuangpinSemicolon:(id)a0;

@end
