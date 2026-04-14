@class NSString;
@protocol CKDTestDeviceProtocol, CKDTestAccountProtocol;

@interface CKDBackingMockAccount : CKDBackingAccount {
    NSString *_dsid;
}

@property (readonly, nonatomic) id<CKDTestAccountProtocol> testAccount;
@property (readonly, nonatomic) id<CKDTestDeviceProtocol> testDevice;

+ (id)mockAccountWithTestAccount:(id)a0 testDevice:(id)a1;

- (id)persona;
- (id)fullName;
- (BOOL)isDataclassEnabled:(id)a0;
- (id)identifier;
- (id)displayedHostname;
- (id)dsid;
- (BOOL)isWarmingUp;
- (long long)accountType;
- (id)serverPreferredPushEnvironment;
- (id)sharingURLHostname;
- (id)username;
- (void).cxx_destruct;
- (BOOL)isPrimaryEmailVerified;
- (BOOL)isDataclassEnabledForCellular:(id)a0;
- (id)primaryEmail;
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
