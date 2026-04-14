@class NSString, AutoFillLocalAuthenticationManager, _ASPasswordCredentialAuthenticationViewController, _ASCredentialListViewController;

@interface FormCredentialsCompletionControllerObjCAdapter : FormAutoFillCompletionControllerObjCAdapter <SFCredentialProviderExtensionManagerObserver, _ASCredentialListViewControllerDelegate, _ASPasswordCredentialAuthenticationViewControllerDelegate> {
    AutoFillLocalAuthenticationManager *_autoFillLocalAuthenticationManager;
    _ASCredentialListViewController *_credentialListViewController;
    _ASPasswordCredentialAuthenticationViewController *_externalCredentialViewController;
    id /* block */ _externalCredentialCompletionHandler;
    BOOL _didPresentExternalCredentialViewController;
    BOOL _hasCredentialProviderExtension;
}

@property (readonly, nonatomic) BOOL abortCompletionBlocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (id)_url;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)a0;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)a0;
- (void)passwordCredentialAuthenticationViewController:(id)a0 didFinishWithCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)credentialListViewControllerDidPrepareInterface:(id)a0;
- (void)credentialListViewController:(id)a0 didFinishWithCredential:(id)a1 completion:(id /* block */)a2;
- (id)initWithCompletionController:(void *)a0;
- (void)didRefreshCompletionListItems:(const void *)a0;
- (double)widthOfCellForItem:(void *)a0;
- (id)_itemNameForAutoFillAuthorizationSheetWithItem:(const void *)a0;
- (void)showCredentialListForExtension:(id)a0 completionHandler:(id /* block */)a1;
- (void)resolveCredentialIdentityMatch:(id)a0 completionHandler:(id /* block */)a1;
- (void)_registerCredentialAutoFillTableViewCellClasses;
- (void *)_formCredentialsCompletionController;
- (id)_firstExistingCellViewPassingTest:(id /* block */)a0;

@end
