@class PMLLogisticRegressionModel;

@interface ATXCandidateRelevanceLogisticRegressionModel : ATXCandidateRelevanceModel

@property (readonly, nonatomic) PMLLogisticRegressionModel *model;

+ (char)supportsSecureCoding;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)modelType;
- (id)initWithModel:(id)a0;
- (id)featureContributionsDuringInferenceDescriptionForContext:(id)a0 candidate:(id)a1 featurizationManager:(id)a2;
- (id)featureContributionsDuringInferenceForContext:(id)a0 candidate:(id)a1 featurizationManager:(id)a2;
- (id)featureImportanceDescriptionForFeaturizationManager:(id)a0;
- (id)featureImportancesForFeaturizationManager:(id)a0;
- (char)isEqualToATXCandidateRelevanceLogisticRegressionModel:(id)a0;
- (unsigned long long)numberOfModelWeights;
- (unsigned long long)numberOfNonZeroModelWeights;
- (float)predictForContext:(id)a0 candidate:(id)a1 featurizationManager:(id)a2;

@end
