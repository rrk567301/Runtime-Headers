@class _MLTJSONReader, NSString, MLModel, _MLTLogger, NSURL, NSDictionary;
@protocol _MLTInputProvider;

@interface _MLTInferenceTesterConfiguration : NSObject

@property (retain) MLModel *model;
@property (retain) NSString *modelPath;
@property char allowHardwareFallback;
@property (retain) _MLTJSONReader *testDataReader;
@property (retain) id<_MLTInputProvider> testDataProvider;
@property (retain) NSString *testDataPath;
@property long long computeUnit;
@property (retain) _MLTLogger *logger;
@property long long iterations;
@property char dumpOutputs;
@property (retain, nonatomic) NSURL *outputDumpLogFileURL;
@property (retain, nonatomic) NSURL *outputMetricsLogFileURL;
@property (nonatomic) unsigned long long asyncPredictionMode;
@property long long experimentalMLE5EngineUsage;
@property long long experimentalMLE5BNNSGraphBackendUsage;
@property long long experimentalMLE5BNNSGraphBackendUsageMultiSegment;
@property (retain, nonatomic) NSDictionary *e5rtMutableMILWeightURLs;
@property (retain, nonatomic) NSDictionary *e5rtDynamicCallableFunctions;
@property char enableBatchPrediction;
@property unsigned long long batchSize;
@property char measurePredictionPerformance;
@property char measurePredictionCPUCycles;
@property char measurePredictionCPUMemory;
@property char measurePredictionGPUMemory;
@property char measurePredictionANEMemory;

- (id)init;
- (void).cxx_destruct;

@end
