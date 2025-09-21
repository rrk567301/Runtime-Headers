@class FCNewsTabiTagScoringOutputConfiguration;

@interface FCNewsTabiTagScoringConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiTagScoringOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiTagScoringOutputConfiguration *nonBundleOutputConfiguration;
@property (nonatomic) double minimumChannelScoreForGrouping;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
