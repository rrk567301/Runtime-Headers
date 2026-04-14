@class NSString, FCNewsTabiNotificationScoringConfiguration, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiNotificationScoringEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiNotificationScoringConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
