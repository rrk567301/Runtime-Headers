@class NSString, FCNewsTabiEventAggregationOutputsConfiguration, FCNewsTabiFeedPersonalizationConfiguration;

@interface FCNewsTabiFeedPersonalizationEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiFeedPersonalizationConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end
