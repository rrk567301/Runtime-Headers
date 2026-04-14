@interface libfssync.FPFSSQLRestoreEngine : NSObject {
    void /* unknown type, empty encoding */ userURL;
    void /* unknown type, empty encoding */ fpDatabaseURLs;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithUserURL:(id)a0;
- (void)restoreWithCleanupOnSuccess:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
