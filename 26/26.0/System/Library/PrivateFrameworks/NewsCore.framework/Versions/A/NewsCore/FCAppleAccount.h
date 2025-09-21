@class NSString, NSArray, NFPromise, ACAccount, ACAccountStore, NSHashTable;

@interface FCAppleAccount : NSObject <FCAppleAccount> {
    ACAccountStore *_accountStore;
    ACAccount *_primaryAccount;
    ACAccount *_iTunesAccount;
    NSString *_overrideContentStoreFrontID;
    NFPromise *_base64GSTokenPromise;
    NSHashTable *_observers;
}

@property (copy, nonatomic) NSString *DSID;
@property (copy, nonatomic) NSString *userStoreFrontID;
@property (copy, nonatomic) NSString *contentStoreFrontID;
@property (copy, nonatomic) NSString *altDSID;
@property (getter=isRunningPPT) BOOL runningPPT;
@property (readonly, nonatomic) NSString *primaryLanguageCode;
@property (readonly, nonatomic) NSArray *preferredLanguageCodes;
@property (readonly, nonatomic) long long supportedContentLanguage;
@property (readonly, nonatomic) long long dynamicSupportedContentLanguage;
@property (readonly, nonatomic) BOOL isContentStoreFrontSupported;
@property (readonly, nonatomic) BOOL isSignedInStoreFrontSupported;
@property (readonly, nonatomic) NSString *supportedContentStoreFrontID;
@property (readonly, nonatomic, getter=isPrivateDataSyncingEnabled) BOOL privateDataSyncingEnabled;
@property (readonly, nonatomic, getter=isUserSignedInToiCloud) BOOL userSignedInToiCloud;
@property (readonly, nonatomic) NSString *endpointConnectionClientID;
@property (readonly, nonatomic) ACAccount *activeiTunesAccount;
@property (readonly, nonatomic) NSString *primaryEmailAddress;
@property (readonly, nonatomic) NSString *appStoreEmailAddress;
@property (readonly, nonatomic) NSArray *allEmailAddresses;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *formattedUsername;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *middleName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic) NSString *normalizedPersonId;
@property (readonly, nonatomic) long long ageCategory;
@property (readonly, nonatomic) BOOL isSuspended;
@property (readonly, nonatomic) BOOL isiCloudSuspended;
@property (readonly, nonatomic) BOOL isFamilySuspended;
@property (readonly, nonatomic) BOOL isFamilyEligible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedAccount;
+ (void)enableStoreFrontLocking;

- (void)_accountStoreDidChange;
- (id)iTunesAccountDSID;
- (void)fetchMinimumDeviceVersionsActiveSinceInterval:(double)a0 completionHandler:(id /* block */)a1;
- (void)invalidateGSTokenCache;
- (BOOL)isPrimaryAccountEmailAddress;
- (void)removeObserver:(id)a0;
- (id)iCloudAccountDSID;
- (id)init;
- (id)currentStoreFrontID;
- (BOOL)isUserSignedIntoiTunes;
- (void)loadStoreFrontWithCompletionHandler:(id /* block */)a0;
- (void)checkAllDevicesRunningMinimumiOSVersion:(struct { long long x0; long long x1; })a0 macOSVersion:(struct { long long x0; long long x1; })a1 orInactiveForTimeInterval:(double)a2 completionHandler:(id /* block */)a3;
- (void)checkAlliOSDevicesRunningMinimumOSVersion:(struct { long long x0; long long x1; })a0 orInactiveForTimeInterval:(double)a1 completionHandler:(id /* block */)a2;
- (void)t_startOverridingContentStoreFrontID:(id)a0;
- (void)getGSTokenWithCompletionHandler:(id /* block */)a0;
- (id)iTunesAccountName;
- (void)addObserver:(id)a0;
- (void)reloadiTunesAccount;
- (id)getGSToken;
- (void)_reloadAccountsFromAccountStore;
- (void)t_stopOverridingContentStoreFrontID;
- (void).cxx_destruct;

@end
