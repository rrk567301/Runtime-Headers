@class NSString, LAContext, _TtC17PasswordManagerUI39_PMPasswordAutoFillPocketViewController;

@interface PMPasswordAutoFillPocketViewController : NSViewController {
    _TtC17PasswordManagerUI39_PMPasswordAutoFillPocketViewController *_controller;
}

@property (retain, nonatomic) LAContext *authenticatedContext;
@property (retain, nonatomic) NSString *searchQuery;

- (void)loadView;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPersona:(long long)a0 appID:(id)a1 credentialTypes:(long long)a2 promptString:(id)a3 promptStringWhenPasskeysAreAvailable:(id)a4 serviceNameHintStrings:(id)a5 domainNameHintStrings:(id)a6 bypassLockoutPolicy:(BOOL)a7 savedAccountStore:(id)a8 autoFillQuirksManager:(id)a9 shouldShowAutoFillPasskeys:(BOOL)a10 currentWebFrameIdentifierForAutoFillPasskeys:(id)a11 connectedAppAuditToken:(struct { unsigned int x0[8]; })a12 isConnectedAppAWebBrowser:(BOOL)a13 initialSearchQuery:(id)a14 savedAccountToInitiallyShowDetailsFor:(id)a15 shouldAllowAddingNewPasswords:(BOOL)a16 suggestedDomainForNewAccount:(id)a17 localizedHostAppNameForNewAccount:(id)a18 bundleIDForFallbackIconForNewAccount:(id)a19 authenticatedContext:(id)a20 savedAccountContext:(id)a21 savedAccountForHistorySection:(id)a22 didSelectHistoryItem:(id /* block */)a23 didSelectAccountHandler:(id /* block */)a24 didSelectTextToInsertHandler:(id /* block */)a25;
- (void)updateHintStringsWithServiceNameHintStrings:(id)a0 domainNameHintStrings:(id)a1 suggestedDomainForNewAccount:(id)a2;

@end
