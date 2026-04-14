@interface GenerativePartnerServiceUI.OBKSheetsManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ selection;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ forceShowNotNowButton;
    void /* unknown type, empty encoding */ hideBackButton;
    void /* unknown type, empty encoding */ hasExplicitlyPreselectedProvider;
    void /* unknown type, empty encoding */ controller;
}

- (void)showPrivacyView;
- (void)signIn;
- (void)navigateBack;
- (void)showAccountView;
- (void)dismissedWithCancel;
- (void)dismissedWithEnableWithoutAccount;
- (void)dismissedWithNotNow;
- (void)openTermsURL;

@end
