@class NSString, NSArray, NSDate;

@interface GKLeaderboardChallengeInviteInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *challengeID;
@property (retain, nonatomic) NSString *challengeVendorID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSString *fromPlayerID;
@property (retain, nonatomic) NSDate *invitedDate;

+ (id)secureCodedPropertyKeys;
+ (id)initWithServerFragment:(id)a0;

- (void).cxx_destruct;

@end
