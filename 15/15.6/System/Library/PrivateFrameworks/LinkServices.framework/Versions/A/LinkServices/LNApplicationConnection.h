@interface LNApplicationConnection : LNConnection

- (id)initWithBundleIdentifier:(id)a0;
- (id)appBundleIdentifier;
- (void)handleConnectionActionResponse:(id)a0;
- (id)initWithEffectiveBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1 processInstanceIdentifier:(id)a2 appIntentsEnabledOnly:(char)a3 userIdentity:(id)a4 error:(id *)a5;
- (char)shouldRefreshWithOptions:(id)a0;

@end
