@class NSString;

@interface ATXCandidateRelevanceModelPBModelMetrics : PBCodable <NSCopying> {
    struct { unsigned char avgNumberOfModelWeights : 1; unsigned char avgNumberOfNonZeroModelWeights : 1; unsigned char learningRate : 1; unsigned char logisticRegressionRegularizationL1Ratio : 1; unsigned char logisticRegressionRegularizationRate : 1; unsigned char minIterations : 1; unsigned char modelAgeInDays : 1; unsigned char numberOfCandidateModels : 1; unsigned char stoppingThreshold : 1; unsigned char trainDataNumberOfCandidates : 1; unsigned char trainDataNumberOfDaysWithPositiveSamples : 1; unsigned char trainDataNumberOfPositiveSamples : 1; unsigned char trainDataNumberOfSamples : 1; unsigned char hasDefaultHyperParams : 1; unsigned char hasTrainedModel : 1; unsigned char pipelineEnabled : 1; } _has;
}

@property (readonly, nonatomic) char hasBlendingABGroup;
@property (retain, nonatomic) NSString *blendingABGroup;
@property (readonly, nonatomic) char hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) char hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (nonatomic) char hasPipelineEnabled;
@property (nonatomic) char pipelineEnabled;
@property (nonatomic) char hasHasTrainedModel;
@property (nonatomic) char hasTrainedModel;
@property (nonatomic) char hasHasDefaultHyperParams;
@property (nonatomic) char hasDefaultHyperParams;
@property (readonly, nonatomic) char hasModelType;
@property (retain, nonatomic) NSString *modelType;
@property (nonatomic) char hasAvgNumberOfModelWeights;
@property (nonatomic) unsigned int avgNumberOfModelWeights;
@property (nonatomic) char hasAvgNumberOfNonZeroModelWeights;
@property (nonatomic) unsigned int avgNumberOfNonZeroModelWeights;
@property (nonatomic) char hasNumberOfCandidateModels;
@property (nonatomic) unsigned int numberOfCandidateModels;
@property (readonly, nonatomic) char hasLogisticRegressionRegularizationStrategy;
@property (retain, nonatomic) NSString *logisticRegressionRegularizationStrategy;
@property (nonatomic) char hasLogisticRegressionRegularizationRate;
@property (nonatomic) float logisticRegressionRegularizationRate;
@property (nonatomic) char hasLogisticRegressionRegularizationL1Ratio;
@property (nonatomic) float logisticRegressionRegularizationL1Ratio;
@property (nonatomic) char hasLearningRate;
@property (nonatomic) float learningRate;
@property (nonatomic) char hasMinIterations;
@property (nonatomic) unsigned int minIterations;
@property (nonatomic) char hasStoppingThreshold;
@property (nonatomic) float stoppingThreshold;
@property (nonatomic) char hasTrainDataNumberOfPositiveSamples;
@property (nonatomic) unsigned int trainDataNumberOfPositiveSamples;
@property (nonatomic) char hasTrainDataNumberOfSamples;
@property (nonatomic) unsigned int trainDataNumberOfSamples;
@property (nonatomic) char hasTrainDataNumberOfDaysWithPositiveSamples;
@property (nonatomic) unsigned int trainDataNumberOfDaysWithPositiveSamples;
@property (nonatomic) char hasTrainDataNumberOfCandidates;
@property (nonatomic) unsigned int trainDataNumberOfCandidates;
@property (readonly, nonatomic) char hasExecutableType;
@property (retain, nonatomic) NSString *executableType;
@property (nonatomic) char hasModelAgeInDays;
@property (nonatomic) unsigned int modelAgeInDays;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
