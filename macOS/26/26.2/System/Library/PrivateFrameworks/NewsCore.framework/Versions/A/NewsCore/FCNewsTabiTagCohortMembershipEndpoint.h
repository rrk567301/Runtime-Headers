@class NSString, FCNewsTabiTagCohortMembershipConfiguration, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiTagCohortMembershipEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiTagCohortMembershipConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end
