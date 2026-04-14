@class ASDAppStoreService;

@interface ASDArcadeService : NSObject {
    ASDAppStoreService *_appstoreService;
}

+ (id)defaultService;

- (void)removeBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)allHardwareOffersIDsWithReplyHandler:(id /* block */)a0;
- (void)removeHardwareOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)removeAllHardwareOfferIDsWithReplyHandler:(id /* block */)a0;
- (void)badgeCountWithReplyHandler:(id /* block */)a0;
- (void)addHardwareOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)removeMetricsForBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)addBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)allHardwareOfferMetricsWithReplyHandler:(id /* block */)a0;
- (void)allBadgeIDsWithReplyHandler:(id /* block */)a0;
- (void)hardwareOfferCountWithReplyHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)allBadgeMetricsWithReplyHandler:(id /* block */)a0;
- (void)removeAllBadgeIDsWithReplyHandler:(id /* block */)a0;
- (void)removeHardwareOfferMetricsForOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)recordAppLaunchForBundleID:(id)a0 additionalMetrics:(id)a1 replyHandler:(id /* block */)a2;
- (id)init;

@end
