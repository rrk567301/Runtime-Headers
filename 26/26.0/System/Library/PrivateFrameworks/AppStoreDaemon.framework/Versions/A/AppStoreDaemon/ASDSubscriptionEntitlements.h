@class ASDServiceBroker;

@interface ASDSubscriptionEntitlements : NSObject {
    ASDServiceBroker *_serviceBroker;
    int _newsCacheUpdatedNotificationToken;
    int _appStoreCacheUpdatedNotificationToken;
    int _appStoreArcadeSubscriptionBagUpdatedNotificationToken;
    int _activityCacheUpdatedNotificationToken;
    int _musicCacheUpdatedNotificationToken;
    int _tvCacheUpdatedNotificationToken;
    int _iCloudCacheUpdatedNotificationToken;
    int _podcastCacheUpdatedNotificationToken;
    int _hwBundleCacheUpdatedNotificationToken;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultAndExpiryHandler:(id /* block */)a0;
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)a0 ignoreCaches:(BOOL)a1 withCacheInfoResultHandler:(id /* block */)a2;
- (id)init;
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)a0 ignoreCaches:(BOOL)a1 withResultHandler:(id /* block */)a2;
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)a0 ignoreCaches:(BOOL)a1 isBackground:(BOOL)a2 requestingBundleId:(id)a3 withCacheInfoResultHandler:(id /* block */)a4;
- (void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(id /* block */)a0;
- (void)getCachedSubscriptionEntitlementsForSegment:(unsigned long long)a0 withResultHandler:(id /* block */)a1;
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)a0 ignoreCaches:(BOOL)a1 requestingBundleId:(id)a2 withCacheInfoResultHandler:(id /* block */)a3;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultHandler:(id /* block */)a0;
- (void)setSubscriptionEntitlementsWithDictionary:(id)a0 forAccountID:(id)a1;
- (id)_initWithServiceBroker:(id)a0;
- (void)setSubscriptionEntitlementsWithDictionary:(id)a0 forAccountID:(id)a1 segment:(unsigned long long)a2;
- (void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)a0 forActiveAccountWithResultHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
