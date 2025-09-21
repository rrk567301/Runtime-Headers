@interface FCNewsPersonalizationTrainingLegacyBridgeConfiguration : NSObject

@property (nonatomic) char priorStatelessAggregatesWithLegacyAggregates;
@property (nonatomic) char avoidDoubleCountingWhenPrioringWithLegacyAggregates;
@property (nonatomic) char allowAllLegacyAggregatesToActAsPriors;
@property (nonatomic) double legacyMultiplier;
@property (nonatomic) double legacyDecayRate;
@property (nonatomic) char createStatelessAggregatesWhichOnlyExistInLegacy;
@property (nonatomic) long long legacyMaxLinearImpressionCount;
@property (nonatomic) long long statelessMaxLinearImpressionCount;
@property (nonatomic) char disablePrioringBaseline;

- (id)description;
- (id)initWithDictionary:(id)a0;

@end
