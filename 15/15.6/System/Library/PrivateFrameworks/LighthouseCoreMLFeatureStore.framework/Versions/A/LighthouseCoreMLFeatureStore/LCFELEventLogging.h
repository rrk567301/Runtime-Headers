@interface LCFELEventLogging : NSObject

+ (char)emitChangePointDetectionEvent:(id)a0;
+ (char)emitFeatureImportanceEvent:(id)a0;
+ (char)emitModelTrainingEvent:(id)a0;
+ (char)emitShadowEvaluationEvent:(id)a0;

@end
