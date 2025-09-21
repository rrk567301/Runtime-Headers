@interface PasswordManagerUI._PMPasswordAutoFillPocketViewController : NSViewController {
    void /* unknown type, empty encoding */ persona;
    void /* unknown type, empty encoding */ bypassLockoutPolicy;
    void /* unknown type, empty encoding */ savedAccountStore;
    void /* unknown type, empty encoding */ autoFillQuirksManager;
    void /* unknown type, empty encoding */ didSelectAccountHandler;
    void /* unknown type, empty encoding */ didSelectTextToInsertHandler;
    void /* unknown type, empty encoding */ appState;
    void /* unknown type, empty encoding */ pickerModel;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ savedAccountForHistorySection;
    void /* unknown type, empty encoding */ didSelectHistoryItem;
    void /* unknown type, empty encoding */ _pickerConfiguration;
}

- (void)setSearchQuery:(id)a0;
- (id)searchQuery;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)authenticatedContext;
- (void)setAuthenticatedContext:(id)a0;
- (void)updateHintStringsWithServiceNameHintStrings:(id)a0 domainNameHintStrings:(id)a1 suggestedDomainForNewAccount:(id)a2;
- (id)initWithPersona:(long long)a0 appID:(id)a1 credentialTypes:(long long)a2 promptString:(id)a3 promptStringWhenPasskeysAreAvailable:(id)a4 serviceNameHintStrings:(id)a5 domainNameHintStrings:(id)a6 savedAccountStore:(id)a7 suggestedDomainForNewAccount:(id)a8 localizedHostAppNameForNewAccount:(id)a9 bundleIDForFallbackIconForNewAccount:(id)a10 autoFillQuirksManager:(id)a11 shouldShowAutoFillPasskeys:(BOOL)a12 currentWebFrameIdentifierForAutoFillPasskeys:(id)a13 connectedAppAuditToken:(struct { unsigned int x0[8]; })a14 isConnectedAppAWebBrowser:(BOOL)a15 initialSearchQuery:(id)a16 savedAccountToInitiallyShowDetailsFor:(id)a17 shouldAllowAddingNewPasswords:(BOOL)a18 bypassLockoutPolicy:(BOOL)a19 authenticatedContext:(id)a20 savedAccountContext:(id)a21 didSelectAccountHandler:(id /* block */)a22 didSelectTextToInsertHandler:(id /* block */)a23;
- (id)initWithPersona:(long long)a0 appID:(id)a1 credentialTypes:(long long)a2 promptString:(id)a3 promptStringWhenPasskeysAreAvailable:(id)a4 serviceNameHintStrings:(id)a5 domainNameHintStrings:(id)a6 savedAccountStore:(id)a7 suggestedDomainForNewAccount:(id)a8 localizedHostAppNameForNewAccount:(id)a9 bundleIDForFallbackIconForNewAccount:(id)a10 autoFillQuirksManager:(id)a11 shouldShowAutoFillPasskeys:(BOOL)a12 currentWebFrameIdentifierForAutoFillPasskeys:(id)a13 connectedAppAuditToken:(struct { unsigned int x0[8]; })a14 isConnectedAppAWebBrowser:(BOOL)a15 initialSearchQuery:(id)a16 savedAccountToInitiallyShowDetailsFor:(id)a17 shouldAllowAddingNewPasswords:(BOOL)a18 bypassLockoutPolicy:(BOOL)a19 authenticatedContext:(id)a20 savedAccountContext:(id)a21 savedAccountForHistorySection:(id)a22 didSelectHistoryItem:(id /* block */)a23 didSelectAccountHandler:(id /* block */)a24 didSelectTextToInsertHandler:(id /* block */)a25;

@end
