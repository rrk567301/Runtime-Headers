@class NSArray;

@interface GKLeaderboardChallengeInviteStatusInternal : GKInternalRepresentation

@property (retain, nonatomic) NSArray *invitees;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithServerRepresentation:(id)a0;

@end
