@interface BiometricPromptCellView : ColorInvertingTableCellView

@property (nonatomic) BOOL showsBiometricPrompt;

+ (id)biometricPromptImage;

- (void)_updateBiometricPrompt;
- (void)performBiometricPromptShakeAnimation;
- (void)_performBiometricPromptShakeAnimationOnView:(id)a0;

@end
