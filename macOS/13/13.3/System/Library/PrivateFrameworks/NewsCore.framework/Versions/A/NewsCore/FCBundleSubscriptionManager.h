@class FCBundleSubscriptionLookUpEntryManager, NSString, FCBundleSubscription, NSHashTable, NFMutexLock, FCPurchaseLookupRecordSource, FCKeyValueStore;
@protocol FCBundleEntitlementsProviderType, FCBundleChannelProviderType, FCEntitlementsOverrideProviderType, FCCoreConfigurationManager;

@interface FCBundleSubscriptionManager : NSObject <FCAppActivityObserving, FCBundleChannelProviderDelegate, FCBundleSubscriptionManagerType> {
    BOOL _hasRunEntitlementOnce;
    id<FCBundleEntitlementsProviderType> _bundleEntitlementsProvider;
    FCPurchaseLookupRecordSource *_purchaseLookupRecordSource;
    FCKeyValueStore *_localStore;
    FCBundleSubscriptionLookUpEntryManager *_bundleSubscriptionLookupEntryManager;
    NSHashTable *_observers;
    NFMutexLock *_accessLock;
    id<FCBundleChannelProviderType> _bundleChannelProvider;
    id<FCCoreConfigurationManager> _configurationManager;
}

@property (retain, nonatomic) FCBundleSubscription *cachedSubscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) FCBundleSubscription *validatedCachedSubscription;
@property (retain, nonatomic) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
@property (readonly, copy, nonatomic) FCBundleSubscription *bundleSubscription;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)activityObservingApplicationDidEnterBackground;
- (void)bundleChannelProvider:(id)a0 bundleChannelIDsDidChangeWithChannelIDs:(id)a1 version:(id)a2;
- (id)bundleSubscriptionLookupEntry;
- (void)clearBundleSubscription;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (id)initWithPrivateDataDirectory:(id)a0 configurationManager:(id)a1 purchaseLookupRecordSource:(id)a2 appActivityMonitor:(id)a3 entitlementsProvider:(id)a4;
- (void)prepareForUseWithCompletion:(id /* block */)a0;
- (void)prewarmBundleTagIDsWithPurchaseID:(id)a0;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 hideBundleDetectionUI:(BOOL)a1 completion:(id /* block */)a2;
- (void)renewalNoticeShownWithPurchaseID:(id)a0;
- (void)setEntitlementsOverrideProvider:(id)a0;
- (void)silentExpireBundleSubscription;

@end
