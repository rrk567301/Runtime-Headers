@interface AWDAgent : NSObject

+ (id)defaultInstance;

- (void)dealloc;
- (id)init;
- (void)_handleQuery:(unsigned int)a0;
- (void)postMetricForSignificantEvent:(int)a0 errorContext:(int)a1 error:(id)a2 status:(int)a3;
- (void)postMetricForSignificantEventWithName:(id)a0 errorContext:(int)a1 error:(id)a2 status:(int)a3;
- (void)bulkPostMetrics:(id)a0 withIdentifier:(unsigned int)a1;
- (void)_postMetricForSignificantEvent:(int)a0 orEventName:(id)a1 errorContext:(int)a2 error:(id)a3 status:(int)a4;
- (BOOL)overridePostMetricConfig;
- (void)postMetric:(id)a0 withIdentifier:(unsigned int)a1;
- (char)shouldSendMetric:(unsigned int)a0;

@end
