@class _MLTJSONReader, NSString, MLModel, _MLTPerfTracer, _MLTLogger, NSError, NSURL;
@protocol _MLTInputProvider;

@interface _MLTInferenceTester : NSObject

@property char tested;
@property (retain) MLModel *model;
@property (retain) id<_MLTInputProvider> testDataProvider;
@property (readonly, copy) NSString *inputNameKey;
@property (readonly, copy) NSString *outputNameKey;
@property (readonly, copy) NSString *testCaseNameKey;
@property long long computeUnit;
@property (retain) NSString *errorString;
@property char testDataFromFile;
@property (retain) _MLTPerfTracer *perfTracer;
@property (retain) _MLTLogger *logger;
@property char dumpOutputs;
@property long long iterations;
@property char enableBatchPrediction;
@property char measurePredictionPerformance;
@property char measurePredictionCPUCycles;
@property char measurePredictionCPUMemory;
@property char measurePredictionGPUMemory;
@property char measurePredictionANEMemory;
@property (readonly, nonatomic) unsigned long long asyncPredictionMode;
@property (retain) _MLTJSONReader *testDataReader;
@property (retain) NSError *testError;
@property (retain) NSString *modelPath;
@property (retain) NSURL *outputDumpLogFileURL;
@property (retain) NSURL *outputMetricsLogFileURL;

+ (id)_runConcurrentAsyncPredictionsAsSyncFor:(id)a0 input:(id)a1 iterations:(long long)a2 error:(id *)a3;
+ (id)_runSerialAsyncPredictionAsSyncFor:(id)a0 input:(id)a1 usingState:(id)a2 error:(id *)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)checkAndUpdateNumber:(id)a0;
- (id)expectedOutputFromDataSet:(id)a0;
- (char)logPrediction:(id)a0 error:(id *)a1;
- (id)meanCPUCyclesPerPrediction:(id *)a0;
- (id)meanPredictionTime:(id *)a0;
- (id)meanValidationTime:(id *)a0;
- (id)modelInputFromDataSet:(id)a0 error:(id *)a1;
- (id)newOrEmptyStateForModel:(id)a0;
- (id)nextDataSet:(id *)a0;
- (id)peakModelLoadMemory:(id *)a0;
- (id)peakPredictionMemoryForComputeUnit:(long long)a0 error:(id *)a1;
- (void)recurseAndUpdateNanInfInDictionary:(id)a0;
- (char)testFinished;
- (char)testModel:(id *)a0;
- (char)testModel:(id)a0 withDataSet:(id)a1 error:(id *)a2;
- (id)testNameFromDataSet:(id)a0;

@end
