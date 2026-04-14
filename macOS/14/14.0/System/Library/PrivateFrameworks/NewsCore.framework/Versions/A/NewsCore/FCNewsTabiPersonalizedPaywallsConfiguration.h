@class NSString, NSDictionary;

@interface FCNewsTabiPersonalizedPaywallsConfiguration : NSObject

@property (retain, nonatomic) NSString *contextFeatureKey;
@property (retain, nonatomic) NSString *channelIDsOutputName;
@property (retain, nonatomic) NSString *scoresOutputName;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithContextFeatureKey:(id)a0 channelIDsOutputName:(id)a1 scoresOutputName:(id)a2;

@end
