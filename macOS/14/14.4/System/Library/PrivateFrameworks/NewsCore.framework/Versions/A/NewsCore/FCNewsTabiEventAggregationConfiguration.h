@class NSDictionary, FCNewsTabiEventAggregationOutputConfiguration, FCNewsTabiEventAggregationConditions;

@interface FCNewsTabiEventAggregationConfiguration : NSObject

@property (nonatomic) long long maxTopicIds;
@property (nonatomic) long long maxSessionEvents;
@property (nonatomic) BOOL readEventsOnly;
@property (retain, nonatomic) NSDictionary *eventUtilizationProbabilities;
@property (nonatomic) long long titleEmbeddingDimension;
@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputConfiguration *nonBundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiEventAggregationConditions *eventConditions;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
