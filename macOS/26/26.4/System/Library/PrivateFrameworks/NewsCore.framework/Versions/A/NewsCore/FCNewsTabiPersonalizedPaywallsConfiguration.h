@class NSString;

@interface FCNewsTabiPersonalizedPaywallsConfiguration : FCNewsTabiEndpointConfiguration

@property (retain, nonatomic) NSString *contextFeatureKey;
@property (retain, nonatomic) NSString *channelIDsOutputName;
@property (nonatomic) BOOL omitHardFollows;
@property (retain, nonatomic) NSString *scoresOutputName;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
