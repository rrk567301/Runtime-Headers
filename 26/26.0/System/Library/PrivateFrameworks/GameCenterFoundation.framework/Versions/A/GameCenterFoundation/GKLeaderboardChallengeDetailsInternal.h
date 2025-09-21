@class NSNumber, NSArray;

@interface GKLeaderboardChallengeDetailsInternal : GKBaseLeaderboardChallengeInternal

@property (retain, nonatomic) NSNumber *rank;
@property (retain, nonatomic) NSNumber *remainingAttempts;
@property (retain, nonatomic) NSArray *participants;
@property (retain, nonatomic) NSNumber *participantCount;

+ (id)secureCodedPropertyKeys;
+ (id)initWithServerFragment:(id)a0;

- (void).cxx_destruct;
- (void)updateWithServerFragment:(id)a0;

@end
