@class NSTextField, NSImageView, NSLayoutConstraint, NSStackView, WBSCreditCardData;

@interface CreditCardAutoFillCellView : BiometricPromptCellView {
    NSImageView *_biometricPromptView;
}

@property (weak, nonatomic) NSTextField *cardNameLabel;
@property (weak, nonatomic) NSTextField *cardDescriptionLabel;
@property (weak, nonatomic) NSStackView *horizontalStackView;
@property (weak, nonatomic) NSLayoutConstraint *stackViewTrailingConstraint;
@property (retain, nonatomic) WBSCreditCardData *cardData;

+ (id)cardDescription:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeForCreditCardData:(id)a0 showsBiometricPrompt:(BOOL)a1;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)_updateViews;
- (void)_setUpBiometricPrompt;
- (void)_updateBiometricPrompt;
- (void)performBiometricPromptShakeAnimation;

@end
