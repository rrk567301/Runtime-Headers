@class NSUUID, NSError, SiriAnalyticsTagShim;

@interface SiriAnalyticsMetastore : NSObject {
    void /* unknown type, empty encoding */ underlying;
}

- (void)checkpoint;
- (void)createClock:(id)a0 rootClockIdentifier:(id)a1 startedOn:(unsigned long long)a2;
- (void)pruneWithCompletionHandler:(void (^)(void))a0;
- (id)initWithQueue:(id)a0 dbStorage:(id)a1;
- (void)bootstrapAndPruneWithCompletionHandler:(void (^)(void))a0;
- (void).cxx_destruct;
- (id)init;
- (void)cleanupAbandonedClocksWithActiveClockIdentifier:(NSUUID *)a0 completionHandler:(void (^)(void))a1;
- (void)endClock:(id)a0 endedOn:(unsigned long long)a1 endedReason:(unsigned long long)a2;
- (void)pulseClock:(id)a0 lastEventOn:(unsigned long long)a1;
- (void)createTagWithShim:(SiriAnalyticsTagShim *)a0 onClock:(NSUUID *)a1 completionHandler:(void (^)(NSUUID *, NSError *))a2;

@end
