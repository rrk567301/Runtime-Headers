@interface CKDBackingPlatformAccount : CKDBackingAccount

- (long long)accountType;
- (id)ckAccount;
- (id)initWithAppleAccount:(id)a0;
- (void)updateAccountPropertiesAndSaveAccount:(id /* block */)a0;

@end
