@class NSString, FCNewsTabiTagCohortMembershipConfiguration, FCNewsTabiEventAggregationOutputsConfiguration;

@interface FCNewsTabiTagCohortMembershipEndpoint : NSObject

@property (retain, nonatomic) NSString *packageAssetID;
@property (retain, nonatomic) FCNewsTabiTagCohortMembershipConfiguration *configuration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputsConfiguration *eventAggregationOutputs;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
