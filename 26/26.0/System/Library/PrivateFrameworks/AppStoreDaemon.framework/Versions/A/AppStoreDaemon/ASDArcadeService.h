@class ASDAppStoreService;

@interface ASDArcadeService : NSObject {
    ASDAppStoreService *_appstoreService;
}

+ (id)defaultService;

- (void)allHardwareOfferMetricsWithReplyHandler:(id /* block */)a0;
- (void)hardwareOfferCountWithReplyHandler:(id /* block */)a0;
- (void)recordAppLaunchForBundleID:(id)a0 additionalMetrics:(id)a1 replyHandler:(id /* block */)a2;
- (void)removeHardwareOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (id)init;
- (void)removeHardwareOfferMetricsForOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)removeAllBadgeIDsWithReplyHandler:(id /* block */)a0;
- (void)removeBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)addBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)allBadgeIDsWithReplyHandler:(id /* block */)a0;
- (void)badgeCountWithReplyHandler:(id /* block */)a0;
- (void)removeMetricsForBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)allHardwareOffersIDsWithReplyHandler:(id /* block */)a0;
- (void)allBadgeMetricsWithReplyHandler:(id /* block */)a0;
- (void)removeAllHardwareOfferIDsWithReplyHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addHardwareOfferIDs:(id)a0 replyHandler:(id /* block */)a1;

@end
