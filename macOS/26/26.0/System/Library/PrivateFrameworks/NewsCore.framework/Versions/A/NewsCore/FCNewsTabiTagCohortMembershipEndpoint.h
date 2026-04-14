@class NSString, FCNewsTabiTagCohortMembershipConfiguration, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiTagCohortMembershipEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiTagCohortMembershipConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
