@class PPConnectionsMetricsTracker;

@interface PPQuickTypeConnectionsServant : NSObject <PPQuickTypeServantProtocol> {
    PPConnectionsMetricsTracker *_metricsTracker;
}

- (void).cxx_destruct;
- (id)init;
- (id)quickTypeItemsWithQuery:(id)a0 limit:(unsigned long long)a1 explanationSet:(id)a2;

@end
