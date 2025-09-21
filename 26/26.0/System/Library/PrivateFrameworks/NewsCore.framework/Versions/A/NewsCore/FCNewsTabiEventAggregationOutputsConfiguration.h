@class FCNewsTabiEventAggregationOutputConfiguration;

@interface FCNewsTabiEventAggregationOutputsConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiEventAggregationOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputConfiguration *nonBundleOutputConfiguration;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithOutputs:(id)a0;

@end
