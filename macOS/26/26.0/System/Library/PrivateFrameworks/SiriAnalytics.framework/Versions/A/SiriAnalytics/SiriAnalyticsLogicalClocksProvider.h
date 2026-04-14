@class NSUUID;

@interface SiriAnalyticsLogicalClocksProvider : NSObject {
    void /* unknown type, empty encoding */ provider;
}

- (void)checkpoint;
- (id)init;
- (void).cxx_destruct;
- (void)cleanupAbandonedClocksWithActiveClockIdentifier:(NSUUID *)a0 completionHandler:(void (^)(void))a1;
- (void)createClock:(id)a0 rootClockIdentifier:(id)a1 startedOn:(unsigned long long)a2;
- (void)endClock:(id)a0 endedOn:(unsigned long long)a1 endedReason:(unsigned long long)a2;
- (void)pulseClock:(id)a0 lastEventOn:(unsigned long long)a1;

@end
