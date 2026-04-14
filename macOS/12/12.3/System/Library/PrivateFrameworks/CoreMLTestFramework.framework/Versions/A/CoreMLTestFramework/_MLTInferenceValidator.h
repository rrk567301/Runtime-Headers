@class NSString, _MLTLogger;

@interface _MLTInferenceValidator : NSObject

@property (retain) NSString *computeUnit;
@property (retain) NSString *errorString;
@property (retain) _MLTLogger *logger;
@property long long numCorrect;
@property long long numFailed;

- (void).cxx_destruct;
- (id)initWithComputeUnit:(long long)a0 logger:(id)a1;
- (id)initWithComputeUnit:(long long)a0;
- (BOOL)validateBatchPrediction:(id)a0 withDataSet:(id)a1 outputName:(id)a2 testCaseName:(id)a3 error:(id *)a4;
- (BOOL)validatePrediction:(id)a0 withExpectedValue:(id)a1 testCaseName:(id)a2 error:(id *)a3;
- (id)initWithComputeUnit:(long long)a0 andLogger:(id)a1;
- (void)addErrorString:(id)a0 forTestCase:(id)a1 andFeatureName:(id)a2;
- (id)topKDebugString:(id)a0;
- (void)calculateAndVerifyMetric:(id)a0 forFeatureName:(id)a1 betweenPredictedValue:(id)a2 andExpectedValue:(id)a3 withThresholdInformation:(id)a4 andTestCaseName:(id)a5;
- (void)calculateAndVerifyMetric:(id)a0 forFeatureName:(id)a1 withNumericalType:(long long)a2 betweenPredictedValue:(id)a3 andExpectedValue:(id)a4 withThresholdInformation:(id)a5 andTestCaseName:(id)a6;
- (BOOL)validatePredicted:(id)a0 withExpectedValue:(id)a1 featureName:(id)a2 testCaseName:(id)a3 metrics:(id)a4 error:(id *)a5;

@end
