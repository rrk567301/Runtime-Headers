@class FCNewsTabiTagScoringOutputConfiguration;

@interface FCNewsTabiTagScoringConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiTagScoringOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiTagScoringOutputConfiguration *nonBundleOutputConfiguration;
@property (nonatomic) double minimumChannelScoreForGrouping;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
