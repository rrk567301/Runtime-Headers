@class NSString, CKPersona, CKDBackingAccount, NSPersonNameComponents, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface CKDAccount : NSObject

@property (readonly, nonatomic) CKDBackingAccount *backingAccount;
@property (nonatomic) BOOL haveWarnedAboutServerPreferredPushEnvironment;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *authTokenQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *authTokenCallbackQueue;
@property (copy, nonatomic) NSString *lastFailediCloudAuthToken;
@property (readonly) NSPersonNameComponents *fullName;
@property (readonly) NSString *primaryEmail;
@property (readonly) NSString *username;
@property (readonly) NSString *formattedUsername;
@property (readonly, copy) CKPersona *persona;
@property (readonly) NSString *dsid;
@property (readonly, nonatomic) BOOL isWarmingUp;
@property (readonly) NSString *altDSID;
@property (readonly) NSString *identifier;
@property (readonly) BOOL isPrimaryAccount;
@property (readonly, nonatomic) BOOL isRenewingAuthToken;
@property (readonly, nonatomic) BOOL hasCredentials;
@property (readonly, nonatomic) BOOL needsToVerifyTerms;
@property (readonly) NSString *sharingURLHostname;
@property (readonly) NSString *displayedHostname;
@property (readonly) long long accountType;
@property (readonly) NSString *accountID;
@property (readonly) BOOL isCarryAccount;
@property (readonly) BOOL isPrimaryEmailVerified;
@property (readonly) NSURL *privateCloudDBURL;
@property (readonly) NSURL *privateShareServiceURL;
@property (readonly) NSURL *privateDeviceServiceURL;
@property (readonly) NSURL *privateCodeServiceURL;
@property (readonly) NSURL *privateMetricsServiceURL;
@property (readonly, nonatomic) NSString *serverPreferredPushEnvironment;
@property (readonly, nonatomic) BOOL isValidTestAccount;

+ (BOOL)isAuthTokenRenewalInProgressForAccountID:(id)a0;
+ (void)beginAuthTokenRenewalForAccountID:(id)a0;
+ (id)globalAuthTokenQueue;
+ (void)endAuthTokenRenewalForAccountID:(id)a0;
+ (id)authTokenRenewalsInProgress;

- (id)initPrimaryAccount;
- (BOOL)isDataclassEnabledForCellular:(id)a0;
- (id)initAnonymousAccount;
- (id)initMockAccountWithTestAccount:(id)a0 testDevice:(id)a1;
- (void)_lockedRenewTokenWithReason:(id)a0 shouldForce:(BOOL)a1 container:(id)a2 tokenFetchBlock:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)validateVettingToken:(id)a0 vettingEmail:(id)a1 vettingPhone:(id)a2 container:(id)a3 completionHandler:(id /* block */)a4;
- (id)initInternal;
- (id)initExplicitCredentialsAccountWithAccountOverrideInfo:(id)a0;
- (id)description;
- (id)_lockediCloudAuthTokenWithError:(id *)a0;
- (id)initWithAccountID:(id)a0;
- (id)_lockedCloudKitAuthTokenWithContainer:(id)a0 error:(id *)a1;
- (void)renewCloudKitAuthTokenWithReason:(id)a0 shouldForce:(BOOL)a1 container:(id)a2 failedToken:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithAltDSID:(id)a0;
- (id)cloudKitAuthTokenWithContainer:(id)a0 error:(id *)a1;
- (BOOL)isDataclassEnabled:(id)a0;
- (void)cloudKitAuthTokenWithContainer:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_userCloudDBURLisInCarryPartition;
- (unsigned long long)hash;
- (id)iCloudAuthTokenWithContainer:(id)a0 error:(id *)a1;
- (void)renewiCloudAuthTokenWithReason:(id)a0 shouldForce:(BOOL)a1 container:(id)a2 failedToken:(id)a3 completionHandler:(id /* block */)a4;
- (void)iCloudAuthTokenWithContainer:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (void)iCloudAuthTokenWithCompletionHandler:(id /* block */)a0;
- (id)_lockediCloudAuthTokenWithContainer:(id)a0 error:(id *)a1;
- (void)updateAccountPropertiesAndSaveAccountWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
