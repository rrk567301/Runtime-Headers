@class HMMLogEventDispatcher, HMMCoreAnalyticsLogEventObserver;

@interface MTRPluginMetricsCollector : NSObject

@property (retain) HMMLogEventDispatcher *metricDispatcher;
@property (retain) HMMCoreAnalyticsLogEventObserver *eventObserver;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)collectMetric:(id)a0;
- (void)collectMetric:(id)a0 error:(id)a1;

@end
