@class NSString, ASCSecurityKeyPublicKeyCredentialLoginChoice, ASCABLELoginChoice, NSObject;
@protocol OS_os_activity;

@interface ASCredentialRequestCABLEClientViewController : ASCredentialRequestPaneViewController {
    long long _mode;
    NSString *_serviceName;
    unsigned long long _serviceType;
    NSString *_destinationSiteForCrossSiteAssertion;
    long long _cableAuthenticatorRequirement;
    ASCABLELoginChoice *_loginChoice;
    ASCSecurityKeyPublicKeyCredentialLoginChoice *_securityKeyLoginChoice;
    NSObject<OS_os_activity> *_authorizationActivity;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_setUpTitleView;
- (double)_marginBelowQRCode;
- (double)_marginBelowSecurityKeyButton;
- (id)_qrCodeMessage;
- (void)_setUpQRCodeView;
- (void)_setUpSecurityKeyButtonViewIfNeeded;
- (id)_subtitleText;
- (id)_titleText;
- (void)_useSecurityKeyButtonTapped;
- (id)initWithMode:(long long)a0 serviceName:(id)a1 serviceType:(unsigned long long)a2 destinationSiteForCrossSiteAssertion:(id)a3 cableAuthenticatorRequirement:(long long)a4 loginChoice:(id)a5 securityKeyLoginChoice:(id)a6;
- (id)initWithMode:(long long)a0 serviceName:(id)a1 serviceType:(unsigned long long)a2 destinationSiteForCrossSiteAssertion:(id)a3 cableAuthenticatorRequirement:(long long)a4 loginChoice:(id)a5 securityKeyLoginChoice:(id)a6 activity:(id)a7;
- (id)initWithPresentationContext:(id)a0 loginChoice:(id)a1 activity:(id)a2;

@end
