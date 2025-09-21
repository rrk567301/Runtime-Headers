@class NSString;

@interface AMSURLMetricsLoadURLHandler : NSObject <AMSURLProtocolDelegate>

@property (readonly) Class metricsClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportMetricsForContext:(id)a0;
- (id)init;
- (id)initWithMetrics:(Class)a0;
- (void).cxx_destruct;
- (void)_enqueueLoadURLEvent:(id)a0 forContext:(id)a1;
- (id)_reportMetricsForContext:(id)a0;

@end
