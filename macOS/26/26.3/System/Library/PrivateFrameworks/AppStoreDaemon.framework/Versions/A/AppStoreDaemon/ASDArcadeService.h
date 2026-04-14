@class ASDAppStoreService;

@interface ASDArcadeService : NSObject {
    ASDAppStoreService *_appstoreService;
}

+ (id)defaultService;

- (void)allBadgeIDsWithReplyHandler:(id /* block */)a0;
- (void)allBadgeMetricsWithReplyHandler:(id /* block */)a0;
- (void)recordAppLaunchForBundleID:(id)a0 additionalMetrics:(id)a1 replyHandler:(id /* block */)a2;
- (void)allHardwareOffersIDsWithReplyHandler:(id /* block */)a0;
- (id)init;
- (void)allHardwareOfferMetricsWithReplyHandler:(id /* block */)a0;
- (void)addHardwareOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)badgeCountWithReplyHandler:(id /* block */)a0;
- (void)removeHardwareOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)removeHardwareOfferMetricsForOfferIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)removeBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)removeAllHardwareOfferIDsWithReplyHandler:(id /* block */)a0;
- (void)removeMetricsForBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)hardwareOfferCountWithReplyHandler:(id /* block */)a0;
- (void)addBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)removeAllBadgeIDsWithReplyHandler:(id /* block */)a0;

@end
