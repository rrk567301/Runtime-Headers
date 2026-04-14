@class _MLTJSONReader, NSString, MLModel, _MLTPerfTracer, _MLTLogger, NSError;
@protocol _MLTInputProvider;

@interface _MLTInferenceTester : NSObject

@property BOOL tested;
@property (retain) MLModel *model;
@property (retain) NSString *modelPath;
@property (retain) id<_MLTInputProvider> testDataProvider;
@property (retain) _MLTJSONReader *testDataReader;
@property (readonly, copy) NSString *inputNameKey;
@property (readonly, copy) NSString *outputNameKey;
@property (readonly, copy) NSString *testCaseNameKey;
@property long long computeUnit;
@property (retain) NSString *errorString;
@property BOOL testDataFromFile;
@property (retain) _MLTPerfTracer *perfTracer;
@property (retain) _MLTLogger *logger;
@property BOOL enableBatchPrediction;
@property BOOL measurePredictionPerformance;
@property BOOL measurePredictionCPUCycles;
@property BOOL measurePredictionCPUMemory;
@property BOOL measurePredictionGPUMemory;
@property BOOL measurePredictionANEMemory;
@property (retain) NSError *testError;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)nextDataSet:(id *)a0;
- (id)modelInputFromDataSet:(id)a0 error:(id *)a1;
- (id)expectedOutputFromDataSet:(id)a0;
- (id)testNameFromDataSet:(id)a0;
- (BOOL)testFinished;
- (BOOL)testModel:(id)a0 withDataSet:(id)a1 error:(id *)a2;
- (BOOL)testModel:(id *)a0;
- (id)meanPredictionTime:(id *)a0;
- (id)meanValidationTime:(id *)a0;
- (id)peakPredictionMemoryForComputeUnit:(long long)a0 error:(id *)a1;
- (id)peakModelLoadMemory:(id *)a0;
- (id)meanCPUCyclesPerPrediction:(id *)a0;

@end
