@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {
    ACAccountStore *_accountStore;
    NSMutableArray *_accounts;
    NSMutableArray *_originalAccounts;
    id _accountStoreDidChangeObserver;
}

@property (class, readonly) AAAccountManager *sharedManager;

- (void)addAccount:(id)a0;
- (id)accounts;
- (id)_accountStore;
- (void)removeAccount:(id)a0;
- (void)reloadAccounts;
- (void)dealloc;
- (id)accountWithUsername:(id)a0;
- (id)primaryAccount;
- (id)accountWithPersonID:(id)a0;
- (id)accountWithIdentifier:(id)a0;
- (void)updateAccount:(id)a0;
- (id)accountsEnabledForDataclass:(id)a0;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (void)saveAllAccounts;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (void).cxx_destruct;

@end
