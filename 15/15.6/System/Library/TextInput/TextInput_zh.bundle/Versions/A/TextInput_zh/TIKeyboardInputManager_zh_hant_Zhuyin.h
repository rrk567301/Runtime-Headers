@interface TIKeyboardInputManager_zh_hant_Zhuyin : TIKeyboardInputManager_zh_Base

@property (nonatomic, getter=isDynamic) char dynamic;
@property (nonatomic, getter=isAssertDefaultKeyPlane) char assertDefaultKeyPlane;
@property (nonatomic) char liveConversionForceEnabled;
@property (nonatomic) char liveConversionForceDisabled;

- (void)commitComposition;
- (unsigned long long)initialSelectedIndex;
- (char)delayedCandidateList;
- (char)usesLiveConversion;
- (char)liveConversionEnabled;
- (id)didAcceptCandidate:(id)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (id)handleKeyboardInput:(id)a0;
- (char)keyboardConfigurationAssertDefaultKeyPlane;
- (id)keyboardConfigurationLayoutTag;
- (unsigned short)mapKeyboardLayoutKey:(unsigned short)a0;
- (char)shouldResample;
- (char)supportsCandidateGeneration;
- (id)syllableSeparator;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(char)a2;
- (void)syncToLayoutState:(id)a0;
- (char)usesComposingInput;
- (id)validCharacterSetForAutocorrection;
- (char)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)a0;
- (char)shouldInsertFirstToneMark;
- (char)shouldInvokeLiveConverison:(id)a0;

@end
