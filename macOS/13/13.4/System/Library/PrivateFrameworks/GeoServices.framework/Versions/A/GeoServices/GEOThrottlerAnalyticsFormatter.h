@class NSMutableDictionary;

@interface GEOThrottlerAnalyticsFormatter : NSObject {
    NSMutableDictionary *_throttlerAggregatedInfo;
}

@property (class, readonly, nonatomic) GEOThrottlerAnalyticsFormatter *sharedThrottlerFormatter;

- (id)init;
- (void).cxx_destruct;
- (void)addThrottledReqForKeyPath:(id)a0 at:(id)a1;
- (void)captureThrottledReqsForKeyPath:(id)a0 maxReqCount:(id)a1 policyTimeWindow:(double)a2;
- (BOOL)hasInitialInfoForKeyPath:(id)a0;
- (BOOL)hasThrottledInfoForKeyPath:(id)a0;
- (int)networkServiceForRequestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0;
- (void)setRequestInfoForKeyPath:(id)a0 at:(id)a1 kind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a2 appId:(id)a3;
- (int)throttleModeForString:(id)a0;
- (int)throttleTypeForString:(id)a0;

@end
