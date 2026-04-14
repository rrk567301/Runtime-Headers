@class NSString, CKTestAccount, CKTestDevice;

@interface CKDBackingMockAccount : CKDBackingAccount {
    NSString *_dsid;
}

@property (retain, nonatomic) CKTestAccount *testAccount;
@property (retain, nonatomic) CKTestDevice *testDevice;

+ (id)mockAccountWithTestAccount:(id)a0 testDevice:(id)a1;

- (void).cxx_destruct;
- (id)identifier;
- (id)dsid;
- (id)fullName;
- (id)username;
- (long long)accountType;
- (id)personaIdentifier;
- (void)deviceCountWithCompletionHandler:(id /* block */)a0;
- (id)displayedHostname;
- (id)primaryEmail;
- (id)serverPreferredPushEnvironment;
- (BOOL)isPrimaryEmailVerified;
- (BOOL)isDataclassEnabled:(id)a0;
- (BOOL)isDataclassEnabledForCellular:(id)a0;
- (id)sharingURLHostname;
- (id)cloudKitAuthTokenWithError:(id *)a0;
- (id)iCloudAuthTokenWithError:(id *)a0;
- (id)_initMockAccountWithTestAccount:(id)a0 testDevice:(id)a1;
- (void)renewAuthTokenInStore:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)a0 completionHandler:(id /* block */)a1;
- (void)validateVettingToken:(id)a0 vettingEmail:(id)a1 vettingPhone:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)canRenew;
- (id)accountPropertiesForDataclass:(id)a0;

@end
