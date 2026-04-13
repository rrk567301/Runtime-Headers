@interface BiometricPromptCellView : ColorInvertingTableCellView

@property (nonatomic) BOOL showsBiometricPrompt;

+ (id)biometricPromptImage;

- (void)_updateBiometricPrompt;
- (void)_performBiometricPromptShakeAnimationOnView:(id)a0;
- (void)performBiometricPromptShakeAnimation;

@end
