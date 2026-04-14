@class FCNewsTabiEventAggregationOutputConfiguration;

@interface FCNewsTabiEventAggregationOutputsConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiEventAggregationOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputConfiguration *nonBundleOutputConfiguration;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithOutputs:(id)a0;

@end
