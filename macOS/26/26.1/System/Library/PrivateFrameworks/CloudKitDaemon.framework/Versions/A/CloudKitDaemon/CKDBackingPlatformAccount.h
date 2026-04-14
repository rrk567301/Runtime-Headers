@interface CKDBackingPlatformAccount : CKDBackingAccount

- (id)initWithAppleAccount:(id)a0;
- (long long)accountType;
- (void)updateAccountPropertiesAndSaveAccount:(id /* block */)a0;
- (id)ckAccount;

@end
