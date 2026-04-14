@interface CKDBackingPlatformAccount : CKDBackingAccount

- (long long)accountType;
- (void)updateAccountPropertiesAndSaveAccount:(id /* block */)a0;
- (id)ckAccount;
- (id)_initWithParentAccount:(id)a0;

@end
