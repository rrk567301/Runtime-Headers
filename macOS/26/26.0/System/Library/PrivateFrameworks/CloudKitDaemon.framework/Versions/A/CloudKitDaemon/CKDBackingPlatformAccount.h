@interface CKDBackingPlatformAccount : CKDBackingAccount

- (id)initWithAppleAccount:(id)a0;
- (id)ckAccount;
- (void)updateAccountPropertiesAndSaveAccount:(id /* block */)a0;
- (long long)accountType;

@end
