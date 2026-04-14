@class NSArray, NSString;

@interface GKLeaderboardChallengeInvitePageInternal : GKInternalRepresentation

@property (retain, nonatomic) NSArray *invites;
@property (retain, nonatomic) NSString *nextURL;

+ (id)secureCodedPropertyKeys;
+ (id)initWithServerFragment:(id)a0;

- (void).cxx_destruct;

@end
