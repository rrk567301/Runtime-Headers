@class NSString, FCNewsTabiPersonalizedPaywallsConfiguration, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiPersonalizedPaywallsEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiPersonalizedPaywallsConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
