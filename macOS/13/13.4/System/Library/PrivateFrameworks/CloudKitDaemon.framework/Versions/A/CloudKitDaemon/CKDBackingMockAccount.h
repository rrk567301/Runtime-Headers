@class NSString;
@protocol CKDTestDevice, CKDTestAccount;

@interface CKDBackingMockAccount : CKDBackingAccount {
    NSString *_dsid;
}

@property (readonly, nonatomic) id<CKDTestAccount> testAccount;
@property (readonly, nonatomic) id<CKDTestDevice> testDevice;

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
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)a0 completionHandler:(id /* block */)a1;
- (id)_initMockAccountWithTestAccount:(id)a0 testDevice:(id)a1;
- (id)accountPropertiesForDataclass:(id)a0;
- (BOOL)canRenew;
- (id)cloudKitAuthTokenWithError:(id *)a0;
- (id)iCloudAuthTokenWithError:(id *)a0;
- (BOOL)isDataclassEnabled:(id)a0;
- (BOOL)isDataclassEnabledForCellular:(id)a0;
- (BOOL)isPrimaryEmailVerified;
- (void)renewAuthTokenInStore:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)serverPreferredPushEnvironment;
- (id)sharingURLHostname;
- (void)validateVettingToken:(id)a0 vettingEmail:(id)a1 vettingPhone:(id)a2 completionHandler:(id /* block */)a3;

@end
