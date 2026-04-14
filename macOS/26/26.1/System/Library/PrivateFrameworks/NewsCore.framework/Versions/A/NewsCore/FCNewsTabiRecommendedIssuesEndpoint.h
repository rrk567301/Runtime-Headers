@class NSString, FCNewsTabiEventAggregationOutputsConfiguration, FCNewsTabiRecommendedIssuesConfiguration;

@interface FCNewsTabiRecommendedIssuesEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiRecommendedIssuesConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
