@interface BiometricPromptCellView : ColorInvertingTableCellView

@property (nonatomic) BOOL showsBiometricPrompt;

+ (id)biometricPromptImage;

- (void)_performBiometricPromptShakeAnimationOnView:(id)a0;
- (void)_updateBiometricPrompt;
- (void)performBiometricPromptShakeAnimation;

@end
