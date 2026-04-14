@interface LNApplicationConnection : LNConnection

- (id)initWithBundleIdentifier:(id)a0;
- (id)appBundleIdentifier;
- (void)handleConnectionActionResponse:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1 error:(id *)a2;

@end
