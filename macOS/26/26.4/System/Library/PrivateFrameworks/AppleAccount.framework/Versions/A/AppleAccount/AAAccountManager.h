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
- (void)removeAccount:(id)a0;
- (id)_accountStore;
- (void)saveAllAccounts;
- (void)updateAccount:(id)a0;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (id)accountWithIdentifier:(id)a0;
- (id)accountsEnabledForDataclass:(id)a0;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (void)reloadAccounts;
- (void).cxx_destruct;
- (id)accountWithPersonID:(id)a0;
- (void)dealloc;
- (id)accountWithUsername:(id)a0;
- (id)primaryAccount;

@end
