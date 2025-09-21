@interface TIKeyboardInputManagerPinyin : TIKeyboardInputManagerChinesePhonetic

- (unsigned long long)initialSelectedIndex;
- (char)acceptAutocorrectionCommitsInline;
- (id)keyboardBehaviors;
- (char)usesAutoDeleteWord;
- (char)usesPunctuationKeysForRowNavigation;
- (void)adjustPhraseBoundaryInForwardDirection:(char)a0 granularity:(int)a1;
- (char)shouldResample;
- (char)shouldRescaleTouchPoints;
- (id)validCharacterSetForAutocorrection;
- (char)supportsPairedPunctutationInput;
- (char)isSpecialInput:(id)a0;
- (char)currentShuangpinTypeUsesSemicolon;
- (char)isShuangpinSemicolon:(id)a0;
- (id)remapInput:(id)a0 isFacemarkInput:(char *)a1;
- (char)shouldSearchCompletionForSubstrings;
- (char)usesGeometryModelData;

@end
