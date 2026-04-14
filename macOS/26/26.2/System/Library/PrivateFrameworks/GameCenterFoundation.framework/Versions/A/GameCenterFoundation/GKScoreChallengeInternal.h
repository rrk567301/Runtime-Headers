@class GKScoreInternal, GKLeaderboardInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal

@property (copy, nonatomic) GKScoreInternal *score;
@property (retain, nonatomic) GKLeaderboardInternal *leaderboard;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)titleText;
- (id)serverRepresentationForReceivingPlayer:(id)a0;

@end
