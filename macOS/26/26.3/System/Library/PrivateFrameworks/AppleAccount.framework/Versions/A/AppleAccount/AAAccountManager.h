@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {
    ACAccountStore *_accountStore;
    NSMutableArray *_accounts;
    NSMutableArray *_originalAccounts;
    id _accountStoreDidChangeObserver;
}

@property (class, readonly) AAAccountManager *sharedManager;

- (void)removeAccount:(id)a0;
- (id)accounts;
- (void)addAccount:(id)a0;
- (id)accountsEnabledForDataclass:(id)a0;
- (id)_accountStore;
- (id)accountWithUsername:(id)a0;
- (void)updateAccount:(id)a0;
- (id)primaryAccount;
- (void)saveAllAccounts;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (void)reloadAccounts;
- (void).cxx_destruct;
- (void)dealloc;
- (id)accountWithPersonID:(id)a0;
- (id)accountWithIdentifier:(id)a0;
- (void)_beginObservingAccountStoreDidChangeNotification;

@end
