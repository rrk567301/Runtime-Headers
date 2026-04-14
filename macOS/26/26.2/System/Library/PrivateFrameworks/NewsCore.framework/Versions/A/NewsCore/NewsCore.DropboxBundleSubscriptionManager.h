@class NSSet, FCBundleSubscription;
@protocol FCPurchaseProviderType, FCEntitlementsOverrideProviderType, FCBundleSubscriptionProviderType;

@interface NewsCore.DropboxBundleSubscriptionManager : NSObject <FCBundleSubscriptionManagerType, FCPaidAccessCheckerType, FCBundleSubscriptionProviderType, FCPurchaseProviderType> {
    void /* unknown type, empty encoding */ todayDropbox;
    void /* unknown type, empty encoding */ lazyDropboxData;
}

@property (nonatomic, readonly) FCBundleSubscription *cachedSubscription;
@property (nonatomic, readonly) FCBundleSubscription *bundleSubscription;
@property (nonatomic, readonly) FCBundleSubscription *validatedCachedSubscription;
@property (nonatomic, retain) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
@property (nonatomic, readonly) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;
@property (nonatomic, readonly) id<FCPurchaseProviderType> purchaseProvider;
@property (nonatomic, readonly) NSSet *purchasedTagIDs;

- (void)removeObserver:(id)a0;
- (void)prewarmBundleTagIDsWithPurchaseID:(id)a0;
- (id)bundleSubscriptionLookupEntry;
- (BOOL)canGetSubscriptionToChannel:(id)a0;
- (BOOL)canGetAccessToItemPaid:(BOOL)a0 bundlePaid:(BOOL)a1 channel:(id)a2;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)isPreparedForUse;
- (void)clearBundleSubscription;
- (void)renewalNoticeShownWithPurchaseID:(id)a0;
- (BOOL)canGetBundleSubscriptionToChannel:(id)a0;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 hideBundleDetectionUI:(BOOL)a1 completion:(id /* block */)a2;
- (id)init;
- (void)silentExpireBundleSubscription;
- (void)prepareForUseWithCompletion:(id /* block */)a0;

@end
