@class AMSURLSession, NSString, AMSMediaTokenServiceStore, AMSBagKeySet, ACAccount, AMSMediaTokenServiceThrottler, AMSMediaToken, NSObject, AMSProcessInfo;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSMediaTokenService : NSObject <AMSBagConsumer, AMSMediaTokenServiceProtocol>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) AMSMediaToken *cachedMediaToken;
@property (readonly) AMSMediaTokenServiceThrottler *throttler;
@property (readonly) NSObject<OS_dispatch_queue> *tokenFetchQueue;
@property (readonly) AMSMediaTokenServiceStore *tokenStore;
@property (getter=isEnabled) BOOL enabled;
@property double refreshPercentage;
@property double refreshTime;
@property BOOL URLKnownToBeTrusted;
@property (retain) ACAccount *account;
@property (retain) id<AMSBagProtocol> bag;
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

- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0 bag:(id)a1;
- (void)invalidateMediaToken;
- (id)fetchMediaToken;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1 bag:(id)a2;
- (id)_fetchBagProperties;
- (BOOL)_shouldReturnMediaToken:(id)a0;
- (void)_refreshMediaTokenIfNeeded:(id)a0;
- (id)_fetchToken;
- (id)_tokenRequestWithError:(id *)a0;
- (BOOL)_shouldRefreshMediaToken:(id)a0;
- (id)initWithClientIdentifier:(id)a0 clientVersion:(id)a1 bag:(id)a2;

@end
