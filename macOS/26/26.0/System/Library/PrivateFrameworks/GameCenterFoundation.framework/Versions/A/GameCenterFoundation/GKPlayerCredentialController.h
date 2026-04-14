@class NSDate, NSString, ACAccountStore, GKThreadsafeDictionary, GKSignInVisibilityManager;

@interface GKPlayerCredentialController : NSObject

@property (retain, nonatomic) ACAccountStore *store;
@property (retain, nonatomic) GKThreadsafeDictionary *primaryCredentialCache;
@property (retain) NSString *gameBundleId;
@property (retain, nonatomic) GKThreadsafeDictionary *allCredentialsCache;
@property (retain, nonatomic) GKSignInVisibilityManager *signInVisibilityManager;
@property (nonatomic) BOOL lastSaveFailed;
@property (retain, nonatomic) NSDate *lastRenewalAttempt;

+ (id)accessQueue;
+ (id)sharedController;
+ (void)migrateOldAccountInformation;

- (id)accessQueue;
- (id)credentialForPlayer:(id)a0 environment:(long long)a1;
- (void)accountStoreEmailDidChange:(id)a0;
- (id)suggestedUsername;
- (void)removeCredential:(id)a0 completionHandler:(id /* block */)a1;
- (id)primaryCredentialForEnvironment:(long long)a0;
- (id)initWithStore:(id)a0 notificationCenter:(id)a1;
- (void)setPrimaryCredential:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)invalidateCredentialCaches;
- (id)allCredentialsForEnvironment:(long long)a0;
- (void)_transact:(id /* block */)a0 complete:(id /* block */)a1;
- (void)accountStoreDidChange:(id)a0;
- (id)credentialForUsername:(id)a0 environment:(long long)a1;
- (void)setContactAssociationID:(id)a0 contactIntegrationConsent:(int)a1 serviceLastUpdateTimestamp:(id)a2 forEnvironment:(long long)a3 forcefully:(BOOL)a4 completionHandler:(id /* block */)a5;
- (id)_transactAndWait:(id /* block */)a0;
- (id)credentialForPlayerID:(id)a0 environment:(long long)a1;
- (void)renewCredentialForUsername:(id)a0 ttl:(double)a1 completionHandler:(id /* block */)a2;
- (id)primaryCredentialForEnvironment:(long long)a0 accountStore:(id)a1;
- (id)pushCredentialForEnvironment:(long long)a0;
- (void)replaceCredential:(id)a0 withCredential:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)setCredential:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllCredentialsForEnvironment:(long long)a0 completionHandler:(id /* block */)a1;

@end
