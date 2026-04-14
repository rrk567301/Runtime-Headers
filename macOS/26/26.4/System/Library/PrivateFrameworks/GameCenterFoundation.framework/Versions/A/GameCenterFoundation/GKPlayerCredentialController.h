@class GKCredentialRenewalInfo, NSString, GKDispatchGroup, AKAccountManager, ACAccountStore, GKThreadsafeDictionary, GKSignInVisibilityManager;

@interface GKPlayerCredentialController : NSObject

@property (retain, nonatomic) ACAccountStore *store;
@property (retain, nonatomic) GKThreadsafeDictionary *primaryCredentialCache;
@property (retain) NSString *gameBundleId;
@property (retain, nonatomic) GKThreadsafeDictionary *allCredentialsCache;
@property (retain, nonatomic) GKSignInVisibilityManager *signInVisibilityManager;
@property (nonatomic) BOOL lastSaveFailed;
@property (retain, nonatomic) GKCredentialRenewalInfo *lastRenewalAttemptInfo;
@property (retain, nonatomic) GKDispatchGroup *activeRenewalGroup;
@property (retain, nonatomic) AKAccountManager *accountManager;

+ (id)accessQueue;
+ (void)migrateOldAccountInformation;
+ (id)sharedController;

- (void)setContactAssociationID:(id)a0 contactIntegrationConsent:(int)a1 serviceLastUpdateTimestamp:(id)a2 forEnvironment:(long long)a3 forcefully:(BOOL)a4 completionHandler:(id /* block */)a5;
- (id)primaryCredentialForEnvironment:(long long)a0 accountStore:(id)a1;
- (id)credentialForPlayer:(id)a0 environment:(long long)a1;
- (void)accountStoreDidChange:(id)a0;
- (id)accessQueue;
- (void)accountStoreEmailDidChange:(id)a0;
- (void)setCredential:(id)a0 completionHandler:(id /* block */)a1;
- (id)credentialForUsername:(id)a0 environment:(long long)a1;
- (id)primaryCredentialForEnvironment:(long long)a0;
- (void)renewCredentialForUsername:(id)a0 ttl:(double)a1 completionHandler:(id /* block */)a2;
- (id)pushCredentialForEnvironment:(long long)a0;
- (void)removeAllCredentialsForEnvironment:(long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithStore:(id)a0 notificationCenter:(id)a1;
- (id)suggestedUsername;
- (id)_transactAndWait:(id /* block */)a0;
- (void)setPrimaryCredential:(id)a0 completionHandler:(id /* block */)a1;
- (id)credentialForPlayerID:(id)a0 environment:(long long)a1;
- (void).cxx_destruct;
- (id)allCredentialsForEnvironment:(long long)a0;
- (void)removeCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)_transact:(id /* block */)a0 complete:(id /* block */)a1;
- (id)init;
- (void)replaceCredential:(id)a0 withCredential:(id)a1 completionHandler:(id /* block */)a2;
- (void)invalidateCredentialCaches;
- (void)recoverDSIDForCredential:(id)a0 completionHandler:(id /* block */)a1;

@end
