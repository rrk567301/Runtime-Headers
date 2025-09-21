@class NSString, CKDBackingAccount, NSPersonNameComponents, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface CKDAccount : NSObject

@property (readonly, nonatomic) CKDBackingAccount *backingAccount;
@property (nonatomic) char haveWarnedAboutServerPreferredPushEnvironment;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *authTokenQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *authTokenCallbackQueue;
@property (copy, nonatomic) NSString *lastFailediCloudAuthToken;
@property (readonly) NSPersonNameComponents *fullName;
@property (readonly) NSString *primaryEmail;
@property (readonly) NSString *username;
@property (readonly) NSString *formattedUsername;
@property (readonly) NSString *personaIdentifier;
@property (readonly) NSString *dsid;
@property (readonly, nonatomic) char isWarmingUp;
@property (readonly) NSString *altDSID;
@property (readonly) char isPrimaryAccount;
@property (readonly) NSString *sharingURLHostname;
@property (readonly) NSString *displayedHostname;
@property (readonly) long long accountType;
@property (readonly) NSString *accountID;
@property (readonly) char isCarryAccount;
@property (readonly) char isPrimaryEmailVerified;
@property (readonly) NSURL *privateCloudDBURL;
@property (readonly) NSURL *privateShareServiceURL;
@property (readonly) NSURL *privateDeviceServiceURL;
@property (readonly) NSURL *privateCodeServiceURL;
@property (readonly) NSURL *privateMetricsServiceURL;
@property (readonly, nonatomic) NSString *serverPreferredPushEnvironment;
@property (readonly, nonatomic) char isValidTestAccount;

+ (id)globalAuthTokenQueue;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAltDSID:(id)a0;
- (id)initInternal;
- (id)initWithAccountID:(id)a0;
- (long long)lastKnownDeviceCount;
- (id)_lockedCloudKitAuthTokenWithContainer:(id)a0 error:(id *)a1;
- (void)_lockedRenewTokenWithReason:(id)a0 shouldForce:(char)a1 container:(id)a2 tokenFetchBlock:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)_lockediCloudAuthTokenWithContainer:(id)a0 error:(id *)a1;
- (char)_userCloudDBURLisInCarryPartition;
- (void)cloudKitAuthTokenWithContainer:(id)a0 completionHandler:(id /* block */)a1;
- (id)cloudKitAuthTokenWithContainer:(id)a0 error:(id *)a1;
- (void)iCloudAuthTokenWithContainer:(id)a0 completionHandler:(id /* block */)a1;
- (id)iCloudAuthTokenWithContainer:(id)a0 error:(id *)a1;
- (id)initAnonymousAccount;
- (id)initExplicitCredentialsAccountWithAccountOverrideInfo:(id)a0;
- (id)initMockAccountWithTestAccount:(id)a0 testDevice:(id)a1;
- (id)initPrimaryAccount;
- (char)isDataclassEnabled:(id)a0;
- (char)isDataclassEnabledForCellular:(id)a0;
- (void)renewCloudKitAuthTokenWithReason:(id)a0 shouldForce:(char)a1 container:(id)a2 failedToken:(id)a3 completionHandler:(id /* block */)a4;
- (void)renewiCloudAuthTokenWithReason:(id)a0 shouldForce:(char)a1 container:(id)a2 failedToken:(id)a3 completionHandler:(id /* block */)a4;
- (void)updateAccountPropertiesAndSaveAccountWithCompletionHandler:(id /* block */)a0;
- (void)validateVettingToken:(id)a0 vettingEmail:(id)a1 vettingPhone:(id)a2 container:(id)a3 completionHandler:(id /* block */)a4;

@end
