@class NSArray, NSString;

@interface GKLeaderboardChallengeActivePageInternal : GKInternalRepresentation

@property (retain, nonatomic) NSArray *actives;
@property (retain, nonatomic) NSString *nextURL;

+ (id)secureCodedPropertyKeys;
+ (id)initWithServerFragment:(id)a0;

- (void).cxx_destruct;

@end
