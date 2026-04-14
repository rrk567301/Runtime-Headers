@class NSString;

@interface FCNewsTabiPersonalizedPaywallsConfiguration : NSObject

@property (retain, nonatomic) NSString *contextFeatureKey;
@property (retain, nonatomic) NSString *channelIDsOutputName;
@property (nonatomic) BOOL omitHardFollows;
@property (retain, nonatomic) NSString *scoresOutputName;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)init;

@end
