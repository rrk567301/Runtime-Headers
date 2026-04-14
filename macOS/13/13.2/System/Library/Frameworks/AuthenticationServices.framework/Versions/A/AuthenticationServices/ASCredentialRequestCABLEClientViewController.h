@class ASCABLELoginChoice, ASCAuthorizationPresentationContext;

@interface ASCredentialRequestCABLEClientViewController : ASCredentialRequestPaneViewController {
    ASCAuthorizationPresentationContext *_presentationContext;
    ASCABLELoginChoice *_loginChoice;
}

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_setUpTitleView;
- (id)_titleText;
- (void)_useSecurityKeyButtonTapped;
- (id)initWithPresentationContext:(id)a0 loginChoice:(id)a1;
- (void)_setUpIconView;
- (void)_setUpQRCodeView;
- (void)_setUpSecurityKeyButtonViewIfNeeded;
- (double)_marginBelowQRCode;
- (double)_marginBelowSecurityKeyButton;
- (id)_qrCodeMessage;

@end
