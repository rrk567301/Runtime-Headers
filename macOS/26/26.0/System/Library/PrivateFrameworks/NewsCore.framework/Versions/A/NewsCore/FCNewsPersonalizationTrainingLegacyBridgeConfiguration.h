@interface FCNewsPersonalizationTrainingLegacyBridgeConfiguration : NSObject

@property (nonatomic) BOOL priorStatelessAggregatesWithLegacyAggregates;
@property (nonatomic) BOOL avoidDoubleCountingWhenPrioringWithLegacyAggregates;
@property (nonatomic) BOOL allowAllLegacyAggregatesToActAsPriors;
@property (nonatomic) double legacyMultiplier;
@property (nonatomic) double legacyDecayRate;
@property (nonatomic) BOOL createStatelessAggregatesWhichOnlyExistInLegacy;
@property (nonatomic) long long legacyMaxLinearImpressionCount;
@property (nonatomic) long long statelessMaxLinearImpressionCount;
@property (nonatomic) BOOL disablePrioringBaseline;

- (id)initWithDictionary:(id)a0;
- (id)description;

@end
