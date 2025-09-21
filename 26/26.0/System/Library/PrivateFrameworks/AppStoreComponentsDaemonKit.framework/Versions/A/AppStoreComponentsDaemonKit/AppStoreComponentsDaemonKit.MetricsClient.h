@interface AppStoreComponentsDaemonKit.MetricsClient : NSObject <ASCMetricsService> {
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ metricsPipeline;
    void /* unknown type, empty encoding */ metricsService;
    void /* unknown type, empty encoding */ metricsLogger;
    void /* unknown type, empty encoding */ signpostExtractor;
    void /* unknown type, empty encoding */ collectionQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)logErrorMessage:(id)a0;
- (void)processMetricsData:(id)a0 pageFields:(id)a1 activity:(id)a2 withReplyHandler:(id /* block */)a3;
- (void)processViewRenderWithPredicate:(id)a0 withReplyHandler:(id /* block */)a1;
- (void)recordCampaignToken:(id)a0 providerToken:(id)a1 withLockup:(id)a2 withReplyHandler:(id /* block */)a3;
- (void)recordQToken:(id)a0 campaignToken:(id)a1 advertisementID:(id)a2 withLockup:(id)a3 withReplyHandler:(id /* block */)a4;

@end
