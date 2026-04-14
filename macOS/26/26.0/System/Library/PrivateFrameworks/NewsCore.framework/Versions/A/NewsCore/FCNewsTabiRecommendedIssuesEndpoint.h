@class NSString, FCNewsTabiEventAggregationOutputsConfiguration, FCNewsTabiRecommendedIssuesConfiguration;

@interface FCNewsTabiRecommendedIssuesEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
