@class NSString, AOSUIAccountRecoveryContext, AOSUIAccountContactSetupFlowController, AOSUIAccountContactsTableViewController, AOSUIAccountContactsTopContentViewController, ACAccount, AAAccountRecoveryManagementViewModel, AOSUIContactsProvider, AOSUIAccountContactsRecoveryKeyViewController;

@interface AOSUIAccountRecoveryViewController : AOSUIAccountContactsViewController <AOSUIAccountContactsRecoveryKeyViewControllerDelegate> {
    AOSUIAccountRecoveryContext *_context;
    AAAccountRecoveryManagementViewModel *_viewModel;
    AOSUIAccountContactsTopContentViewController *_topContentViewController;
    AOSUIAccountContactsTableViewController *_custodianTableViewController;
    AOSUIAccountContactsTableViewController *_custodianshipTableViewController;
    AOSUIAccountContactsRecoveryKeyViewController *_recoveryKeyViewController;
    AOSUIContactsProvider *_contactProvider;
    AOSUIAccountContactSetupFlowController *setupFlowController;
    ACAccount *_idmsAccount;
    BOOL _isWalrusEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)_canBeCustodian;
- (BOOL)_canHaveCustodian;
- (id)_appleAccount;
- (id)initWithAccountManager:(id)a0 context:(id)a1;
- (void)_configureStackView;
- (void)_addRecoveryContactNotificationObserved;
- (void)_fetchAllCustodianContacts;
- (void)_fetchWalrusStateWithCompletion:(id /* block */)a0;
- (id)_idmsAccount;
- (BOOL)_isEligibleForRecoveryKey;
- (void)_openSetupFlowController:(id)a0;
- (void)_refreshRecoveryKeyStatus;
- (void)_setUpRecoveryKeyNotificationObserved;
- (void)_setupCustodianTableView;
- (void)_setupCustodianshipTableView;
- (void)_setupRecoveryKeyView;
- (void)_setupTopContentView;
- (void)_startObservingChanges;
- (void)_stopObservingChanges;
- (void)_syncTrustedContactsFromCloudKit;
- (void)_walrusStateDidChange;
- (void)addCustodianButtonPressed:(id)a0;
- (void)webViewDidEndPresentingOnViewController:(id)a0;

@end
