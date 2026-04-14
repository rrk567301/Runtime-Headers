@class FCNewsTabiTagScoringOutputConfiguration;

@interface FCNewsTabiTagScoringConfiguration : NSObject

@property (retain, nonatomic) FCNewsTabiTagScoringOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiTagScoringOutputConfiguration *nonBundleOutputConfiguration;
@property (nonatomic) double minimumChannelScoreForGrouping;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
