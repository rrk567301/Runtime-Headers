@class AOSUIAccountContactSetupFlowController, AOSUIAccountRecoveryContext, AOSUIAccountContactsTableViewController, AOSUIAccountContactsTopContentViewController, ACAccount, AAAccountRecoveryManagementViewModel, AOSUIContactsProvider, AOSUIAccountContactsRecoveryKeyViewController;

@interface AOSUIAccountRecoveryViewController : AOSUIAccountContactsViewController {
    AOSUIAccountRecoveryContext *_context;
    AAAccountRecoveryManagementViewModel *_viewModel;
    AOSUIAccountContactsTopContentViewController *_topContentViewController;
    AOSUIAccountContactsTableViewController *_custodianTableViewController;
    AOSUIAccountContactsTableViewController *_custodianshipTableViewController;
    AOSUIAccountContactsRecoveryKeyViewController *_recoveryKeyViewController;
    AOSUIContactsProvider *_contactProvider;
    AOSUIAccountContactSetupFlowController *setupFlowController;
    BOOL _recoveryKeyStateIsEnabled;
    ACAccount *_idmsAccount;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (BOOL)_canHaveCustodian;
- (BOOL)_canBeCustodian;
- (id)_appleAccount;
- (void)_configureStackView;
- (id)initWithAccountManager:(id)a0 context:(id)a1;
- (void)_fetchAllCustodianContacts;
- (void)_setUpRecoveryKeyNotificationObserved;
- (void)_addRecoveryContactNotificationObserved;
- (void)_startObservingChanges;
- (void)_stopObservingChanges;
- (void)_syncTrustedContactsFromCloudKit;
- (void)_setupTopContentView;
- (void)_setupCustodianTableView;
- (void)_setupRecoveryKeyView;
- (void)_setupCustodianshipTableView;
- (void)addCustodianButtonPressed:(id)a0;
- (void)_openSetupFlowController:(id)a0;
- (id)_recoveryKeyState;
- (BOOL)_isEligibleForRecoveryKey;
- (id)_idmsAccount;

@end
