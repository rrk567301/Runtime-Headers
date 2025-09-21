@class NSString, FCNewsTabiTagScoringConfiguration, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiTagScoringEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiTagScoringConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
