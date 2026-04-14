@class NSString, FCNewsTabiPersonalizedPaywallsConfiguration, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiPersonalizedPaywallsEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiPersonalizedPaywallsConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end
