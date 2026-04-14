@class NSNumber, GKLeaderboardChallengeCompletedComparisonPageInternal, GKLeaderboardChallengeWinComparisonPageInternal;

@interface GKLeaderboardChallengeComparisonInternal : GKInternalRepresentation

@property (retain, nonatomic) NSNumber *completedChallengeCount;
@property (retain, nonatomic) NSNumber *completedChallengeGameCount;
@property (retain, nonatomic) GKLeaderboardChallengeCompletedComparisonPageInternal *completedChallenges;
@property (retain, nonatomic) GKLeaderboardChallengeWinComparisonPageInternal *wonChallenges;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithServerRepresentation:(id)a0;

@end
