@interface _UISTouchAuthenticationTelemetryManager : NSObject

- (void)flushEvents;
- (id)initWithQueue:(id)a0;
- (void)enqueueRecordForAnalytics:(id)a0;

@end
