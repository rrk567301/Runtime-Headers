@interface BiometricPromptCellView : ColorInvertingTableCellView

@property (nonatomic) long long biometricPolicy;

- (void)performBiometricDrawOnAnimation;
- (id)_biometricPromptImage;
- (void)_performBiometricDrawOnAnimationOnImageView:(id)a0;
- (void)_performBiometricPromptShakeAnimationOnView:(id)a0;
- (BOOL)_shouldUseSFSymbolForBiometricImage;
- (void)_updateBiometricPrompt;
- (id)makeBiometricPromptImageView;
- (void)performBiometricPromptShakeAnimation;

@end
