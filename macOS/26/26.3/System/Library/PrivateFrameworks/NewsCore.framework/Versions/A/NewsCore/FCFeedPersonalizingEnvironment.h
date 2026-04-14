@class NSString;

@interface FCFeedPersonalizingEnvironment : NSObject

@property (readonly, nonatomic) unsigned long long scoringVersion;
@property (readonly, nonatomic) NSString *tabiVersion;

- (void).cxx_destruct;
- (id)initWithScoringVersion:(unsigned long long)a0 tabiVersion:(id)a1;

@end
