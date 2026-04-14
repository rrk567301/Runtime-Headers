@interface LNApplicationConnection : LNConnection

- (id)initWithBundleIdentifier:(id)a0;
- (id)appBundleIdentifier;
- (void)handleConnectionActionResponse:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 bundleURL:(id)a1 bundleType:(id)a2 appBundleIdentifier:(id)a3 appIntentsEnabledOnly:(BOOL)a4 userIdentity:(id)a5 error:(id *)a6;
- (BOOL)shouldRefreshWithOptions:(id)a0;

@end
