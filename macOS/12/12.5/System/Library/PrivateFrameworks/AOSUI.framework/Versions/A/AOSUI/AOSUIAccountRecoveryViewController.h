@class AOSUIContactsProvider, AOSUIAccountContactsRecoveryKeyViewController, AOSUIAccountContactSetupFlowController, AAAccountRecoveryManagementViewModel, AOSUIAccountRecoveryContext, AOSUIAccountContactsTopContentViewController, AOSUIAccountContactsTableViewController;

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
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)_appleAccount;
- (void)_configureStackView;
- (id)initWithAccountManager:(id)a0 context:(id)a1;
- (void)_startObservingChanges;
- (void)_fetchAllCustodianContacts;
- (void)_syncTrustedContactsFromCloudKit;
- (void)_stopObservingChanges;
- (void)_setUpRecoveryKeyNotificationObserved;
- (void)_addRecoveryContactNotificationObserved;
- (void)_openSetupFlowController:(id)a0;
- (id)_recoveryKeyState;
- (void)_setupTopContentView;
- (void)_setupCustodianTableView;
- (BOOL)_isEligibleForRecoveryKey;
- (void)_setupRecoveryKeyView;
- (void)_setupCustodianshipTableView;
- (void)addCustodianButtonPressed:(id)a0;

@end
