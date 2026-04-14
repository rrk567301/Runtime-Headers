@class NSString, FCNewsTabiNotificationScoringConfiguration, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiNotificationScoringEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiNotificationScoringConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
