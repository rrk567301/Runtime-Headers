@class NSString;
@protocol CKDTestDeviceProtocol, CKDTestAccountProtocol;

@interface CKDBackingMockAccount : CKDBackingAccount {
    NSString *_dsid;
}

@property (readonly, nonatomic) id<CKDTestAccountProtocol> testAccount;
@property (readonly, nonatomic) id<CKDTestDeviceProtocol> testDevice;

+ (id)mockAccountWithTestAccount:(id)a0 testDevice:(id)a1;

- (long long)accountType;
- (id)displayedHostname;
- (id)fullName;
- (id)username;
- (id)dsid;
- (BOOL)isDataclassEnabled:(id)a0;
- (id)sharingURLHostname;
- (id)persona;
- (BOOL)isDataclassEnabledForCellular:(id)a0;
- (void).cxx_destruct;
- (id)primaryEmail;
- (BOOL)isWarmingUp;
- (BOOL)isPrimaryEmailVerified;
- (id)serverPreferredPushEnvironment;
- (id)identifier;
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
