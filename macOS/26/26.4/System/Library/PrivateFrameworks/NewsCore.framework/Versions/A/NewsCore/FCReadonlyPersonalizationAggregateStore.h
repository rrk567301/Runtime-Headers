@class FCOnce, NSMutableDictionary, NSDictionary, NSString;
@protocol FCPersonalizationDataGeneratorType, FCDerivedPersonalizationData;

@interface FCReadonlyPersonalizationAggregateStore : NSObject <FCReadonlyPersonalizationAggregateStore>

@property (retain, nonatomic) FCOnce *prepareOnce;
@property (retain, nonatomic) id<FCPersonalizationDataGeneratorType> generator;
@property (retain, nonatomic) id<FCDerivedPersonalizationData> derivedPersonalizationData;
@property (nonatomic) unsigned long long scoringType;
@property (nonatomic) double decayRate;
@property (retain, nonatomic) NSMutableDictionary *overrideAggregatesByFeatureKey;
@property (readonly, nonatomic) NSDictionary *allAggregates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aggregatesForFeatures:(id)a0;
- (void)enumerateAggregatesUsingBlock:(id /* block */)a0;
- (id)baselineAggregateWithConfigurableValues:(id)a0;
- (id)aggregateForFeatureKey:(id)a0;
- (id)initWithGenerator:(id)a0;
- (id)aggregatesForFeatureKeys:(id)a0;
- (void).cxx_destruct;
- (void)prepareAggregatesForUseWithCompletionHandler:(id /* block */)a0;
- (id)init;

@end
