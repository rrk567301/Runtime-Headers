@class GKScoreInternal, GKLeaderboardInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal

@property (copy, nonatomic) GKScoreInternal *score;
@property (retain, nonatomic) GKLeaderboardInternal *leaderboard;

+ (id)secureCodedPropertyKeys;
+ (id)internalRepresentation;

- (id)titleText;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)serverRepresentationForReceivingPlayer:(id)a0;

@end
