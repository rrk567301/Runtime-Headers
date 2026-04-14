@class NSString, FCNewsTabiEventAggregationOutputsConfiguration, FCNewsTabiRecommendedTagsConfiguration;

@interface FCNewsTabiRecommendedTagsEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiRecommendedTagsConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
