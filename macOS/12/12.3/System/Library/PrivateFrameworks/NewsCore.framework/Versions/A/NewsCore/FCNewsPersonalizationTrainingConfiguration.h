@class FCNewsPersonalizationFeaturePriorsConfiguration, FCNewsPersonalizationTrainingBiases, FCNewsPersonalizationAggregateModificationConfigurations, FCNewsPersonalizationEventConditionalsConfigurations;

@interface FCNewsPersonalizationTrainingConfiguration : NSObject

@property (retain, nonatomic) FCNewsPersonalizationAggregateModificationConfigurations *aggregateModificationConfigurations;
@property (nonatomic) double decayRate;
@property (retain, nonatomic) FCNewsPersonalizationFeaturePriorsConfiguration *priorsConfiguration;
@property (retain, nonatomic) FCNewsPersonalizationTrainingBiases *biases;
@property (readonly, nonatomic) FCNewsPersonalizationEventConditionalsConfigurations *eventConditionalsConfigurations;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
