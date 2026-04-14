@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {
    ACAccountStore *_accountStore;
    NSMutableArray *_accounts;
    NSMutableArray *_originalAccounts;
    id _accountStoreDidChangeObserver;
}

@property (class, readonly) AAAccountManager *sharedManager;

- (id)accounts;
- (id)accountsEnabledForDataclass:(id)a0;
- (void)saveAllAccounts;
- (void)removeAccount:(id)a0;
- (void)reloadAccounts;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (id)primaryAccount;
- (id)accountWithIdentifier:(id)a0;
- (id)_accountStore;
- (id)accountWithUsername:(id)a0;
- (void)dealloc;
- (void)updateAccount:(id)a0;
- (id)accountWithPersonID:(id)a0;
- (void).cxx_destruct;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (void)addAccount:(id)a0;

@end
