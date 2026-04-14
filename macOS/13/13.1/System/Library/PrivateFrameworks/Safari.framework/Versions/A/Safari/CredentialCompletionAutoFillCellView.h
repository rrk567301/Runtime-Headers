@class NSTextField, NSString, NSView, NSImageView, NSLayoutConstraint;

@interface CredentialCompletionAutoFillCellView : BiometricPromptCellView {
    NSImageView *_trailingImageView;
}

@property (weak, nonatomic) NSTextField *userNameDescriptionLabel;
@property (weak, nonatomic) NSTextField *credentialOriginDescriptionLabel;
@property (weak, nonatomic) NSView *trailingView;
@property (weak, nonatomic) NSLayoutConstraint *stackViewLeadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *stackViewTrailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *leadingImageWidthConstraint;
@property (copy, nonatomic) NSString *userNameDescription;
@property (copy, nonatomic) NSString *credentialOriginDescription;

+ (struct CGSize { double x0; double x1; })sizeForOneTimeCode:(id)a0 showsBiometricPrompt:(BOOL)a1;
+ (struct CGSize { double x0; double x1; })sizeWithUserNameDescription:(id)a0 origin:(id)a1 showsBiometricPrompt:(BOOL)a2;
+ (struct CGSize { double x0; double x1; })sizeWithUserNameDescription:(id)a0 origin:(id)a1 showsBiometricPrompt:(BOOL)a2 forPasskey:(BOOL)a3;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)configureWithOneTimeCode:(id)a0 formURL:(id)a1;
- (void)configureForPasskey;
- (void)_updateLabelWithBiometricPrompt;
- (void)_updateBiometricPrompt;
- (void)performBiometricPromptShakeAnimation;
- (void)_setUpBiometricPrompt;

@end
