@class NSString, FCNewsTabiPersonalizedPaywallsConfiguration, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiPersonalizedPaywallsEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiPersonalizedPaywallsConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
