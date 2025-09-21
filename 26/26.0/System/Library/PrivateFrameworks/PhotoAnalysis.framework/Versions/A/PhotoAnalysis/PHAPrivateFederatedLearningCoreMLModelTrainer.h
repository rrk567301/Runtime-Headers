@class NSSet, MLProgramTrainer, MLArrayBatchProvider;

@interface PHAPrivateFederatedLearningCoreMLModelTrainer : NSObject

@property (readonly, nonatomic) MLArrayBatchProvider *trainingData;
@property (readonly, nonatomic) MLProgramTrainer *programTrainer;
@property (readonly, nonatomic) NSSet *evaluationMetricNames;

+ (unsigned long long)countForTrainingData:(id)a0;

- (void).cxx_destruct;
- (id)_generateErrorWithErrorCode:(long long)a0 message:(id)a1 underlyingError:(id)a2;
- (id)_unpackEvaluationMetrics:(id)a0 resultDictionary:(id)a1 error:(id *)a2;
- (id)initWithTrainingData:(id)a0 programTrainer:(id)a1 evaluationMetricNames:(id)a2;
- (id)trainForNumberOfEpochs:(unsigned long long)a0 error:(id *)a1;
- (id)unpackResults:(id)a0 error:(id *)a1;

@end
