@class _TtC17PasswordManagerUI31_PMSafariAutoFillViewController;

@interface PMSafariAutoFillViewController : NSViewController {
    _TtC17PasswordManagerUI31_PMSafariAutoFillViewController *_controller;
}

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithPersona:(long long)a0 credentialTypes:(long long)a1 serviceNameHintStrings:(id)a2 domainNameHintStrings:(id)a3 suggestedDomainForNewAccount:(id)a4 bypassLockoutPolicy:(BOOL)a5 savedAccountStore:(id)a6 autoFillQuirksManager:(id)a7 didSelectAccountHandler:(id /* block */)a8;
- (void)updateHintStringsWithServiceNameHintStrings:(id)a0 domainNameHintStrings:(id)a1 suggestedDomainForNewAccount:(id)a2;

@end
