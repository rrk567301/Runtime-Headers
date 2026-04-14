@interface CKDBackingPlatformAccount : CKDBackingAccount

- (id)initWithAppleAccount:(id)a0;
- (void)updateAccountPropertiesAndSaveAccount:(id /* block */)a0;
- (long long)accountType;
- (id)ckAccount;

@end
