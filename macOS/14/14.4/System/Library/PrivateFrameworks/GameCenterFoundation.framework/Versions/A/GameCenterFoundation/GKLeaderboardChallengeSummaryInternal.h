@class NSNumber, GKLeaderboardChallengeActivePageInternal, GKLeaderboardChallengeInvitePageInternal;

@interface GKLeaderboardChallengeSummaryInternal : GKInternalRepresentation

@property (retain, nonatomic) NSNumber *completedCount;
@property (retain, nonatomic) NSNumber *winCount;
@property (retain, nonatomic) GKLeaderboardChallengeInvitePageInternal *invitedPlayers;
@property (retain, nonatomic) GKLeaderboardChallengeActivePageInternal *activeChallenges;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithServerRepresentation:(id)a0;

@end
