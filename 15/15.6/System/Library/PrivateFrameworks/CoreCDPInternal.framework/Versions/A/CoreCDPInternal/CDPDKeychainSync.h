@protocol CDPDCircleProxy, CDPDKeychainSyncPolicyProvider;

@interface CDPDKeychainSync : NSObject <CDPInitUnavailable>

@property (readonly, nonatomic) id<CDPDCircleProxy> circleProxy;
@property (readonly, nonatomic) id<CDPDCircleProxy> sosCircleProxy;
@property (readonly, nonatomic) id<CDPDKeychainSyncPolicyProvider> syncPolicy;
@property (readonly, nonatomic) char isUserVisibleKeychainSyncEnabled;
@property (readonly, nonatomic) char isUserVisibleKeychainSyncAvailable;

+ (id)_defaultUserVisibleViewSet;
+ (id)keyChainSync;
+ (id)keyChainSyncWithProxy:(id)a0 sosCircleProxy:(id)a1 context:(id)a2;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setUserVisibleKeychainSyncEnabled:(char)a0 withCompletion:(id /* block */)a1;
- (void)_processAuthFailure:(id)a0 completion:(id /* block */)a1;
- (char)_isThisDeviceInCircle;
- (char)_keychainSyncAvailableViaOctacon;
- (char)_keychainSyncAvailableViaSOS;
- (void)_preflightCircleStatusWithCompletion:(id /* block */)a0;
- (char)_setKeychainSyncState:(char)a0 error:(id *)a1;
- (void)_setUserVisibleKeychainSyncEnabled:(char)a0 withCompletion:(id /* block */)a1;
- (void)buddyFinished;
- (id)initWithCircleProxy:(id)a0 sosCircleProxy:(id)a1 context:(id)a2;
- (id)initWithCircleProxy:(id)a0 sosCircleProxy:(id)a1 policyProvider:(id)a2;
- (void)removeNonViewAwarePeersFromCircleWithCompletion:(id /* block */)a0;
- (void)updateKeychainSyncStateIfNeededWithCompletion:(id /* block */)a0;

@end
