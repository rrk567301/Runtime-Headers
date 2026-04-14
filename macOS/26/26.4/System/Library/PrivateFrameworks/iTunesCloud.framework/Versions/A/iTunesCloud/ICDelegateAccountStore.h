@class NSString, ICDelegateAccountStoreOptions, NSMutableArray, ICDelegateAccountStoreXPCWriter;

@interface ICDelegateAccountStore : NSObject <ICSQLiteConnectionDelegate, ICDelegateAccountStoreWriter> {
    NSMutableArray *_connectionPool;
    BOOL _isOpen;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    ICDelegateAccountStoreOptions *_options;
    ICDelegateAccountStore *_strongSelf;
    ICDelegateAccountStoreXPCWriter *_xpcWriter;
}

@property (readonly, copy, nonatomic) NSString *databasePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openWithOptions:(id)a0 completionHandler:(id /* block */)a1;

- (void)_writeUsingBlock:(id /* block */)a0;
- (void)setIdentityProperties:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (id)initSingleWriterWithOptions:(id)a0 error:(id *)a1;
- (void)_resetCorruptionUsingXPC;
- (id)_popConnection;
- (void)_writeSQLUsingBlock:(id /* block */)a0;
- (void)readUsingBlock:(id /* block */)a0;
- (BOOL)_resetCorruptionUsingSQL;
- (id)_initWithValidatedOptions:(id)a0;
- (void)_writeXPCUsingBlock:(id /* block */)a0;
- (void)removeIdentityPropertiesForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)_openWithXPCWriter:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)removeTokenForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)connectionNeedsResetForCorruption:(id)a0;
- (void)_recycleConnection:(id)a0;
- (void)addDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeAllTokensWithCompletionHandler:(id /* block */)a0;
- (void)_postDidChangeNotification;
- (void)removeTokensExpiringBeforeDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)setToken:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)close;

@end
