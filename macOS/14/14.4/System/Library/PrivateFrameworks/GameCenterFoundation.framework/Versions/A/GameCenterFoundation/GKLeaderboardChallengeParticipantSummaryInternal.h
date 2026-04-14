@class NSNumber, NSString;

@interface GKLeaderboardChallengeParticipantSummaryInternal : GKInternalRepresentation

@property (retain, nonatomic) NSNumber *rank;
@property (retain, nonatomic) NSString *playerID;

+ (BOOL)supportsSecureCoding;
+ (id)initWithServerFragment:(id)a0;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
