@class NSString;

@interface FCNewsTabiPersonalizedPaywallsConfiguration : NSObject

@property (retain, nonatomic) NSString *contextFeatureKey;
@property (retain, nonatomic) NSString *channelIDsOutputName;
@property (nonatomic) BOOL omitHardFollows;
@property (retain, nonatomic) NSString *scoresOutputName;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
