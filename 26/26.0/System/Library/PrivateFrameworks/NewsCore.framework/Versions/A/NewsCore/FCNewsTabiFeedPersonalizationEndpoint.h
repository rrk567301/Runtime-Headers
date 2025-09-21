@class NSString, FCNewsTabiEventAggregationOutputsConfiguration, FCNewsTabiFeedPersonalizationConfiguration;

@interface FCNewsTabiFeedPersonalizationEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiFeedPersonalizationConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
