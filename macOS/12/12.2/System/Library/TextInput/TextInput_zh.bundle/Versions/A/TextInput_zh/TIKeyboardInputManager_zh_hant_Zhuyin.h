@interface TIKeyboardInputManager_zh_hant_Zhuyin : TIKeyboardInputManager_zh_Base

@property (nonatomic, getter=isDynamic) BOOL dynamic;
@property (nonatomic, getter=isAssertDefaultKeyPlane) BOOL assertDefaultKeyPlane;
@property (nonatomic) BOOL liveConversionForceEnabled;
@property (nonatomic) BOOL liveConversionForceDisabled;

- (void)commitComposition;
- (unsigned long long)initialSelectedIndex;
- (BOOL)usesLiveConversion;
- (BOOL)delayedCandidateList;
- (BOOL)liveConversionEnabled;
- (id)didAcceptCandidate:(id)a0;
- (id)validCharacterSetForAutocorrection;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)supportsCandidateGeneration;
- (void)syncToLayoutState:(id)a0;
- (id)keyboardConfigurationLayoutTag;
- (BOOL)keyboardConfigurationAssertDefaultKeyPlane;
- (id)deleteFromInput:(unsigned long long *)a0;
- (BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)a0;
- (id)composedTextForSelectedCandidate:(id)a0 remainingInput:(id)a1;
- (BOOL)shouldInvokeLiveConverison:(id)a0;
- (BOOL)shouldInsertFirstToneMark;

@end
