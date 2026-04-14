@interface PasswordManagerUI._PMSafariAutoFillViewController : NSViewController {
    void /* unknown type, empty encoding */ persona;
    void /* unknown type, empty encoding */ credentialTypes;
    void /* unknown type, empty encoding */ bypassLockoutPolicy;
    void /* unknown type, empty encoding */ savedAccountStore;
    void /* unknown type, empty encoding */ autoFillQuirksManager;
    void /* unknown type, empty encoding */ didSelectAccountHandler;
    void /* unknown type, empty encoding */ appState;
    void /* unknown type, empty encoding */ pickerModel;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ serviceNameHintStrings;
    void /* unknown type, empty encoding */ domainNameHintStrings;
    void /* unknown type, empty encoding */ suggestedDomainForNewAccount;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)initWithPersona:(long long)a0 credentialTypes:(long long)a1 serviceNameHintStrings:(id)a2 domainNameHintStrings:(id)a3 suggestedDomainForNewAccount:(id)a4 bypassLockoutPolicy:(BOOL)a5 savedAccountStore:(id)a6 autoFillQuirksManager:(id)a7 didSelectAccountHandler:(id /* block */)a8;
- (void)updateHintStringsWithServiceNameHintStrings:(id)a0 domainNameHintStrings:(id)a1 suggestedDomainForNewAccount:(id)a2;

@end
