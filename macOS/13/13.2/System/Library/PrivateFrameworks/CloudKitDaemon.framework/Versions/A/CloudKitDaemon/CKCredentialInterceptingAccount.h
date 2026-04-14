@class CKDBackingExplicitCredentialsAccount;

@interface CKCredentialInterceptingAccount : ACAccount

@property (weak, nonatomic) CKDBackingExplicitCredentialsAccount *backingExplicitCredentialsAccount;

- (void).cxx_destruct;
- (BOOL)aa_updateTokensWithProvisioningResponse:(id)a0;

@end
