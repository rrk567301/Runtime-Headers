@interface TIKeyboardInputManager_zh_Pinyin : TIKeyboardInputManagerChinesePhonetic

- (unsigned long long)initialSelectedIndex;
- (BOOL)usesAutoDeleteWord;
- (BOOL)acceptAutocorrectionCommitsInline;
- (id)keyboardBehaviors;
- (BOOL)usesPunctuationKeysForRowNavigation;
- (id)validCharacterSetForAutocorrection;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (BOOL)shouldSearchCompletionForSubstrings;
- (BOOL)supportsPairedPunctutationInput;
- (BOOL)usesGeometryModelData;
- (BOOL)isSpecialInput:(id)a0;
- (id)remapInput:(id)a0 isFacemarkInput:(BOOL *)a1;
- (BOOL)currentShuangpinTypeUsesSemicolon;
- (BOOL)isShuangpinSemicolon:(id)a0;

@end
