@class NSString, NSNumber;

@interface GKLeaderboardChallengeWinComparisonInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *playerWinCount;
@property (retain, nonatomic) NSNumber *otherPlayerWinCount;

+ (id)secureCodedPropertyKeys;
+ (id)initWithServerFragment:(id)a0;

- (void).cxx_destruct;

@end
