@interface LNApplicationConnection : LNConnection

- (id)initWithBundleIdentifier:(id)a0;
- (id)appBundleIdentifier;
- (id)initWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1 error:(id *)a2;
- (void)handleConnectionActionResponse:(id)a0;

@end
