@interface _UISTouchAuthenticationTelemetryManager : NSObject

- (id)initWithQueue:(id)a0;
- (void)flushEvents;
- (void)enqueueRecordForAnalytics:(id)a0;

@end
