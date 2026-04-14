@class NSArray, NSString;

@interface GKLeaderboardChallengeDetailsPageInternal : GKInternalRepresentation

@property (retain, nonatomic) NSArray *details;
@property (retain, nonatomic) NSString *nextURL;

+ (id)secureCodedPropertyKeys;
+ (id)initWithServerFragment:(id)a0;

- (void).cxx_destruct;
- (id)initWithServerRepresentation:(id)a0;

@end
