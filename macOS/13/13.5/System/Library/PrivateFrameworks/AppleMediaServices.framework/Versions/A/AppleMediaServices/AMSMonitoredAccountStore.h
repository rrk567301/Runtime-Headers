@interface AMSMonitoredAccountStore : ACMonitoredAccountStore {
    void /* unknown type, empty encoding */ typeStore;
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ fallback;
}

@property (class, nonatomic, readonly) AMSMonitoredAccountStore *shared;

- (id)init;
- (void).cxx_destruct;
- (id)monitoredAccountWithIdentifier:(id)a0;
- (id)accountTypeWithAccountTypeIdentifier:(id)a0 error:(id *)a1;
- (void)accountTypeWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)accountWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)accountWithIdentifier:(id)a0 error:(id *)a1;
- (void)accountsWithAccountType:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)accountsWithAccountType:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithAccountTypes:(id)a0 delegate:(id)a1;
- (id)initWithAccountTypes:(id)a0 propertiesToPrefetch:(id)a1 delegate:(id)a2;
- (id)initWithEffectiveBundleID:(id)a0;
- (id)initWithRemoteEndpoint:(id)a0;
- (id)initWithRemoteEndpoint:(id)a0 effectiveBundleID:(id)a1;
- (id)initWithWithRemoteEndpoint:(id)a0 effectiveBundleID:(id)a1 accountTypes:(id)a2 propertiesToPrefetch:(id)a3 delegate:(id)a4;

@end
