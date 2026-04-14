@protocol MLBatchProvider;

@interface MLProgramEvaluationResult : NSObject

@property double loss;
@property (retain) id<MLBatchProvider> evaluationMetrics;

- (void).cxx_destruct;
- (id)init;

@end
