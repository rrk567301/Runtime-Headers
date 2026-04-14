@class FCExperimentalPaywallConfiguration, NSSet, FCBundleSubscription;
@protocol FCBundleCampaignManagerType, FCEntitlementsOverrideProviderType, FCBundleSubscriptionProviderType, FCPurchaseProviderType;

@interface NewsCore.DropboxBundleSubscriptionManager : NSObject <FCBundleSubscriptionManagerType, FCPaidAccessCheckerType, FCBundleSubscriptionProviderType, FCPurchaseProviderType> {
    void /* unknown type, empty encoding */ todayDropbox;
    void /* unknown type, empty encoding */ lazyDropboxData;
}

@property (nonatomic, readonly) id<FCBundleCampaignManagerType> bundleCampaignManager;
@property (nonatomic, readonly) FCBundleSubscription *cachedSubscription;
@property (nonatomic, readonly) FCBundleSubscription *bundleSubscription;
@property (nonatomic, readonly) FCBundleSubscription *validatedCachedSubscription;
@property (nonatomic, retain) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
@property (nonatomic, readonly) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;
@property (nonatomic, readonly) id<FCPurchaseProviderType> purchaseProvider;
@property (nonatomic, readonly) FCExperimentalPaywallConfiguration *experimentalPaywallConfig;
@property (nonatomic, readonly) NSSet *notificationOpenedArticleIDs;
@property (nonatomic, readonly) NSSet *purchasedTagIDs;

- (void)renewalNoticeShownWithPurchaseID:(id)a0;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)prepareForUseWithCompletion:(id /* block */)a0;
- (void)silentExpireBundleSubscription;
- (BOOL)isPreparedForUse;
- (BOOL)canGetSubscriptionToChannel:(id)a0;
- (BOOL)canGetBundleSubscriptionToChannelID:(id)a0;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 hideBundleDetectionUI:(BOOL)a1 completion:(id /* block */)a2;
- (void)prewarmBundleTagIDsWithPurchaseID:(id)a0;
- (void).cxx_destruct;
- (void)clearBundleSubscription;
- (void)addObserver:(id)a0;
- (BOOL)canGetAccessToItemWithIdentifier:(id)a0 paid:(BOOL)a1 bundlePaid:(BOOL)a2 channel:(id)a3;
- (void)recordNotificationOpenedWithArticleID:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (id)bundleSubscriptionLookupEntry;
- (BOOL)canGetBundleSubscriptionToChannel:(id)a0;

@end
