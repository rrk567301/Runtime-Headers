@class FCNewsTabiTagScoringOutputConfiguration;

@interface FCNewsTabiTagScoringConfiguration : FCNewsTabiEndpointConfiguration

@property (retain, nonatomic) FCNewsTabiTagScoringOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiTagScoringOutputConfiguration *nonBundleOutputConfiguration;
@property (nonatomic) double minimumChannelScoreForGrouping;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
