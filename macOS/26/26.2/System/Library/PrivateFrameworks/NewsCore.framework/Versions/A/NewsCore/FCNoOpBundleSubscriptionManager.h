@class FCBundleSubscription;
@protocol FCEntitlementsOverrideProviderType;

@interface FCNoOpBundleSubscriptionManager : NSObject <FCBundleSubscriptionManagerType>

@property (readonly, nonatomic) FCBundleSubscription *cachedSubscription;
@property (readonly, nonatomic) FCBundleSubscription *validatedCachedSubscription;
@property (retain, nonatomic) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
@property (readonly, copy, nonatomic) FCBundleSubscription *bundleSubscription;

- (void)removeObserver:(id)a0;
- (void)prewarmBundleTagIDsWithPurchaseID:(id)a0;
- (id)bundleSubscriptionLookupEntry;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)clearBundleSubscription;
- (void)renewalNoticeShownWithPurchaseID:(id)a0;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 hideBundleDetectionUI:(BOOL)a1 completion:(id /* block */)a2;
- (id)init;
- (void)silentExpireBundleSubscription;
- (void)prepareForUseWithCompletion:(id /* block */)a0;

@end
