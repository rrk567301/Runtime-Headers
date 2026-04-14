@class MLModel, NSString, _MLTLogger;
@protocol _MLTInputProvider;

@interface _MLTInferenceTesterConfiguration : NSObject

@property (retain) MLModel *model;
@property (retain) NSString *modelPath;
@property BOOL allowHardwareFallback;
@property (retain) id<_MLTInputProvider> testDataProvider;
@property (retain) NSString *testDataPath;
@property long long computeUnit;
@property (retain) _MLTLogger *logger;
@property BOOL enableBatchPrediction;
@property unsigned long long batchSize;
@property BOOL measurePredictionPerformance;
@property BOOL measurePredictionCPUCycles;
@property BOOL measurePredictionCPUMemory;
@property BOOL measurePredictionGPUMemory;
@property BOOL measurePredictionANEMemory;

- (id)init;
- (void).cxx_destruct;

@end
