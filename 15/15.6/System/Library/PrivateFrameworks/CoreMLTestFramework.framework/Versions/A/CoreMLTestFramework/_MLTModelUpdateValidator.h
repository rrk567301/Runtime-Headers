@class NSMutableDictionary, NSString, _MLTLogger, NSDictionary;
@protocol MLBatchProvider;

@interface _MLTModelUpdateValidator : NSObject

@property (retain, nonatomic) NSMutableDictionary *metricsDict;
@property (retain, nonatomic) _MLTLogger *logger;
@property (retain, nonatomic) NSString *recipePath;
@property (retain, nonatomic) id<MLBatchProvider> dataProvider;
@property (retain, nonatomic) NSMutableDictionary *validationAccuracyDict;
@property (retain, nonatomic) NSDictionary *validationParams;
@property char tested;
@property char useBatchPrediction;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (char)addFailingCountForOutput:(id)a0 forMetric:(id)a1;
- (char)addPassingCountForOutput:(id)a0 forMetric:(id)a1;
- (char)checkIfResultsWithinParams:(char)a0 error:(id *)a1;
- (void)populateMetricsDictFromParams:(id)a0;
- (char)validateModel:(id)a0 withParams:(id)a1 verbose:(char)a2 error:(id *)a3;
- (char)validateModelWithoutAutorelease:(id)a0 withParams:(id)a1 verbose:(char)a2 error:(id *)a3;
- (id)validationAccuracyForOutput:(id)a0 error:(id *)a1;

@end
