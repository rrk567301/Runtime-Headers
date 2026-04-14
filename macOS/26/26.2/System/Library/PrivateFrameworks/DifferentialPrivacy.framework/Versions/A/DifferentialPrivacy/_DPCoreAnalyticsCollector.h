@interface _DPCoreAnalyticsCollector : NSObject <_DPMetricsCollector>

+ (id)sharedInstance;
+ (id)telemetryTaskIdFromKey:(id)a0;
+ (void)reportCoreAnalyticsExecutionStage:(unsigned long long)a0 error:(id)a1 key:(id)a2 count:(unsigned long long)a3 isTelemetryAllowed:(BOOL)a4;
+ (void)reportCoreAnalyticsExecutionStageWithCollector:(id)a0 executionStage:(unsigned long long)a1 error:(id)a2 key:(id)a3 count:(unsigned long long)a4 isTelemetryAllowed:(BOOL)a5;

- (void)reportMetricsForEvent:(id)a0 withMetrics:(id)a1;

@end
