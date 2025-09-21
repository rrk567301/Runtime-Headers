@interface LCFELCoreAnalyticsHandler : NSObject

+ (char)emitChangePointDetectionEvent:(id)a0;
+ (char)emitFeatureImportanceEvent:(id)a0;
+ (char)emitFeatureStatisticEvents:(id)a0 usageType:(long long)a1 batchProviderInfo:(id)a2;
+ (char)emitModelTrainingEvent:(id)a0;
+ (char)emitShadowEvaluationEvent:(id)a0;
+ (void)myAnalyticsSendEvent:(id)a0 eventPayload:(id)a1;

@end
