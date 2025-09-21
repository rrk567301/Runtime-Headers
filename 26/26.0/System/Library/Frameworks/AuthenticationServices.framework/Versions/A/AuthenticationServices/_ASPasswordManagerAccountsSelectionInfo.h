@interface _ASPasswordManagerAccountsSelectionInfo : NSObject

@property (readonly, nonatomic) unsigned long long numberOfPasswords;
@property (readonly, nonatomic) unsigned long long numberOfPasskeys;
@property (readonly, nonatomic) unsigned long long numberOfSignInWithAppleAccounts;
@property (readonly, nonatomic) BOOL hasOnlySignInWithAppleAccounts;
@property (readonly, nonatomic) BOOL isSelectedAccountSingleSignInWithApple;
@property (readonly, nonatomic) unsigned long long numberOfFileVaultRecoveryKeys;
@property (readonly, nonatomic) BOOL hasOnlyFileVaultRecoveryKeys;
@property (readonly, nonatomic) BOOL isSelectedAccountSingleFileVaultRecoveryKey;
@property (readonly, nonatomic) BOOL hasOnlyFileVaultRecoveryKeysAndSignInWithAppleAccounts;
@property (readonly, nonatomic) BOOL hasAccountsWithVerificationCodes;
@property (readonly, nonatomic) BOOL hasSharedAccounts;
@property (readonly, nonatomic) BOOL hasOnlySharedAccounts;
@property (readonly, nonatomic) long long selectedCredentialTypes;

- (id)initWithSavedAccounts:(id)a0;

@end
