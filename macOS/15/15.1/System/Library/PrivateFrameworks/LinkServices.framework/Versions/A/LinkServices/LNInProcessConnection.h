@protocol LNConnectionHostInterface;

@interface LNInProcessConnection : LNConnection {
    id<LNConnectionHostInterface> _connectionInterface;
}

- (void).cxx_destruct;
- (id)connectionInterface;
- (void)connectWithOptions:(id)a0;
- (void)acquireAssertionsForConnectionOperation:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 bundleURL:(id)a1 bundleType:(id)a2 appBundleIdentifier:(id)a3 appIntentsEnabledOnly:(BOOL)a4 userIdentity:(id)a5 error:(id *)a6;
- (BOOL)refreshWithOptions:(id)a0;

@end
