@class NSString, NSNumber;

@interface GKLeaderboardChallengeParticipantSummaryInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSNumber *rank;

+ (id)secureCodedPropertyKeys;
+ (id)initWithServerFragment:(id)a0;

- (void).cxx_destruct;

@end
