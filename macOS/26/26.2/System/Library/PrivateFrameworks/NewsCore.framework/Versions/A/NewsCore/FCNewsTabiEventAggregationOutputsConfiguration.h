@class FCNewsTabiEventAggregationOutputConfiguration;

@interface FCNewsTabiEventAggregationOutputsConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiEventAggregationOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputConfiguration *nonBundleOutputConfiguration;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)initWithOutputs:(id)a0;

@end
