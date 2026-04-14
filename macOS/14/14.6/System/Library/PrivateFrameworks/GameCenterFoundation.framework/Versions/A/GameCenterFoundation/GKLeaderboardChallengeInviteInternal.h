@class NSString, NSDate;

@interface GKLeaderboardChallengeInviteInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *challengeID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *fromPlayerID;
@property (retain, nonatomic) NSDate *invitedDate;

+ (BOOL)supportsSecureCoding;
+ (id)initWithServerFragment:(id)a0;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
