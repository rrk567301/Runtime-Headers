@class NSString;
@protocol CKDTestDeviceProtocol, CKDTestAccountProtocol;

@interface CKDBackingMockAccount : CKDBackingAccount {
    NSString *_dsid;
}

@property (readonly, nonatomic) id<CKDTestAccountProtocol> testAccount;
@property (readonly, nonatomic) id<CKDTestDeviceProtocol> testDevice;

+ (id)mockAccountWithTestAccount:(id)a0 testDevice:(id)a1;

- (id)fullName;
- (id)primaryEmail;
- (id)displayedHostname;
- (id)sharingURLHostname;
- (id)persona;
- (id)identifier;
- (BOOL)isPrimaryEmailVerified;
- (id)dsid;
- (BOOL)isDataclassEnabledForCellular:(id)a0;
- (BOOL)isWarmingUp;
- (id)serverPreferredPushEnvironment;
- (id)username;
- (BOOL)isDataclassEnabled:(id)a0;
- (long long)accountType;
- (void).cxx_destruct;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)a0 completionHandler:(id /* block */)a1;
- (id)_initMockAccountWithTestAccount:(id)a0 testDevice:(id)a1;
- (id)accountPropertiesForDataclass:(id)a0;
- (id)cloudKitAuthTokenWithError:(id *)a0;
- (id)iCloudAuthTokenWithError:(id *)a0;
- (BOOL)isAccountSuspended;
- (void)renewAuthTokenWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)suspendedAccountIdentifier;
- (void)validateVettingToken:(id)a0 vettingEmail:(id)a1 vettingPhone:(id)a2 completionHandler:(id /* block */)a3;

@end
