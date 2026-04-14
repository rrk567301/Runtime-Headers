@class ASCABLELoginChoice, ASCAuthorizationPresentationContext;

@interface ASCredentialRequestCABLEClientViewController : ASCredentialRequestPaneViewController {
    ASCAuthorizationPresentationContext *_presentationContext;
    ASCABLELoginChoice *_loginChoice;
}

- (void).cxx_destruct;
- (id)_iconImage;
- (void)viewDidLoad;
- (void)_setUpTitleView;
- (id)_titleText;
- (void)_setUpIconView;
- (void)_setUpQRCodeView;
- (struct CGSize { double x0; double x1; })_qrCodeSize;
- (id)_qrCodeASImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)_qrCodeCIImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithPresentationContext:(id)a0 loginChoice:(id)a1;

@end
