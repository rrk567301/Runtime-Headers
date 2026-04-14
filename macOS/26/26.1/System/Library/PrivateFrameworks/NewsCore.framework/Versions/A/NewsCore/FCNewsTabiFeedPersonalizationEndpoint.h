@class NSString, FCNewsTabiEventAggregationOutputsConfiguration, FCNewsTabiFeedPersonalizationConfiguration;

@interface FCNewsTabiFeedPersonalizationEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiFeedPersonalizationConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
