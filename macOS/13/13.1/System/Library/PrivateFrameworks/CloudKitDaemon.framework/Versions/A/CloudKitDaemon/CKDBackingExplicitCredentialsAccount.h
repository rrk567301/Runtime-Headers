@class ACAccount;

@interface CKDBackingExplicitCredentialsAccount : CKDBackingAccount

@property (retain, nonatomic) ACAccount *fakeCKAccount;

+ (void)_setUpExplicitCredentialsAccountShenanigans;
+ (id)explicitCredentialsAccountWithEmail:(id)a0 password:(id)a1 propertyOverrides:(id)a2 overridesByDataclass:(id)a3;

- (void).cxx_destruct;
- (id)identifier;
- (id)password;
- (long long)accountType;
- (void)deviceCountWithCompletionHandler:(id /* block */)a0;
- (BOOL)isDataclassEnabled:(id)a0;
- (void)_checkAndLogIfAccountError;
- (id)_initExplicitCredentialsAccountWithEmail:(id)a0 password:(id)a1 propertyOverrides:(id)a2 overridesByDataclass:(id)a3;
- (id)_initExplicitCredentialsAccountWithEmail:(id)a0 password:(id)a1;
- (void)renewAuthTokenWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateAccountPropertiesAndSaveAccount:(id /* block */)a0;
- (void)_setOverridesOnVettingContext:(id)a0;
- (id)ckAccount;
- (id)cloudKitAuthTokenWithError:(id *)a0;
- (id)iCloudAuthTokenWithError:(id *)a0;

@end
