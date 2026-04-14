@class AMSURLSession, NSString, AMSPromiseSerialQueue, AMSBagKeySet, ACAccount, AMSMediaTokenServiceThrottler, AMSMediaToken, NSObject, AMSProcessInfo;
@protocol OS_dispatch_queue, AMSMediaTokenServiceStoreProtocol, AMSBagProtocol;

@interface AMSMediaTokenService : NSObject <AMSMediaTokenServicePrivateAccessTokenProtocol, AMSBagConsumer, AMSMediaTokenServiceProtocol>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) AMSMediaTokenServiceThrottler *throttler;
@property (readonly) AMSPromiseSerialQueue *tokenFetchPromiseSerialQueue;
@property (readonly) id<AMSMediaTokenServiceStoreProtocol> tokenStore;
@property (readonly) id<AMSMediaTokenServiceStoreProtocol> patBasedtokenStore;
@property (retain) NSString *privateAcessTokenChallenge;
@property (readonly) Class privateAccessTokenFetcherClass;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessLock;
@property (readonly) NSObject<OS_dispatch_queue> *patTokenFetchQueue;
@property BOOL URLKnownToBeTrusted;
@property (retain) ACAccount *account;
@property (retain) id<AMSBagProtocol> bag;
@property (readonly) AMSMediaToken *cachedMediaToken;
@property long long clientType;
@property (readonly) NSString *clientIdentifier;
@property (retain) AMSProcessInfo *clientInfo;
@property (retain) NSString *keychainAccessGroup;
@property (weak) AMSURLSession *session;
@property (readonly) NSString *clientVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)_overrideOrClientIdentifier:(id)a0;

- (void)setCachedMediaToken:(id)a0 patBasedToken:(BOOL)a1;
- (BOOL)_shouldRefreshMediaToken:(id)a0 bagProperties:(id)a1;
- (id)_fetchToken:(id)a0 forceRefresh:(BOOL)a1;
- (id)_tokenRequestPromiseWithPrivateAccessToken:(id)a0;
- (void)invalidateMediaToken;
- (id)_fetchTokenPromise:(id)a0 store:(id)a1;
- (id)getCachedMediaToken:(BOOL)a0;
- (void)setCachedMediaToken:(id)a0 store:(id)a1;
- (void)_refreshMediaTokenIfNeeded:(id)a0 store:(id)a1 bagProperties:(id)a2;
- (void)invalidatePATMediaToken;
- (void)setPrivateAccessTokenChallenge:(id)a0;
- (id)initWithClientIdentifier:(id)a0 tokenStore:(id)a1 patBasedTokenStore:(id)a2 bag:(id)a3 fetcherClass:(Class)a4;
- (void)invalidateMediaToken:(id)a0;
- (id)getPrivateAccessTokenChallenge;
- (id)fetchMediaToken;
- (id)fetchMediaToken:(BOOL)a0;
- (id)_fetchBagProperties;
- (id)cachedMediaToken:(id)a0;
- (BOOL)usePATBasedToken:(id)a0;
- (id)initWithClientIdentifier:(id)a0 clientVersion:(id)a1 bag:(id)a2;
- (id)initWithClientIdentifier:(id)a0 bag:(id)a1;
- (id)getPrivateAccessToken:(id)a0;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1 bag:(id)a2;
- (void)_fetchPatBasedToken:(id)a0 cachedMediaToken:(id)a1 finishBlock:(id /* block */)a2;
- (BOOL)_shouldReturnMediaToken:(id)a0;
- (void).cxx_destruct;

@end
