@class NSString, ICSQLiteConnection;

@interface ICDelegateAccountStoreSQLWriter : NSObject <ICDelegateAccountStoreWriter> {
    ICSQLiteConnection *_connection;
    char _isValid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (char)_removeAccountForIdentityKey:(id)a0;
- (char)_removeTokenForIdentityKey:(id)a0;
- (void)_setToken:(id)a0 forIdentityKey:(id)a1;
- (void)addDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeAllTokensWithCompletionHandler:(id /* block */)a0;
- (void)removeDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeIdentityPropertiesForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeTokenForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeTokensExpiringBeforeDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)setIdentityProperties:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)setToken:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;

@end
