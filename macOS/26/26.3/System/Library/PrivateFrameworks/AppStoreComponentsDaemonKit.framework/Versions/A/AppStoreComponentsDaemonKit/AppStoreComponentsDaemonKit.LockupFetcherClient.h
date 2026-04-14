@interface AppStoreComponentsDaemonKit.LockupFetcherClient : NSObject <ASCLockupFetcherService> {
    void /* unknown type, empty encoding */ fetcher;
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ appStateController;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ appDistribution;
}

- (id)init;
- (void).cxx_destruct;
- (void)buildLockupFromMediaAPIResponse:(id)a0 withContext:(id)a1 withReplyHandler:(id /* block */)a2;
- (void)getLockupCollectionWithRequest:(id)a0 withReplyHandler:(id /* block */)a1;
- (void)getLockupForBundleID:(id)a0 withContext:(id)a1 enableAppDistribution:(BOOL)a2 withReplyHandler:(id /* block */)a3;
- (void)getLockupWithRequest:(id)a0 withReplyHandler:(id /* block */)a1;
- (void)getLockupsWithRequest:(id)a0 withReplyHandler:(id /* block */)a1;

@end
