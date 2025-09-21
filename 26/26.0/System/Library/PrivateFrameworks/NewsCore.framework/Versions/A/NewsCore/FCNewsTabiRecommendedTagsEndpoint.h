@class NSString, FCNewsTabiEventAggregationOutputsConfiguration, FCNewsTabiRecommendedTagsConfiguration;

@interface FCNewsTabiRecommendedTagsEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiRecommendedTagsConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
