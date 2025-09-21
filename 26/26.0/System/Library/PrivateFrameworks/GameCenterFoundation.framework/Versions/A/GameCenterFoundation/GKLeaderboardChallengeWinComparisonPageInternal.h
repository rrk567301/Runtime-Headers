@class NSArray, NSString;

@interface GKLeaderboardChallengeWinComparisonPageInternal : GKInternalRepresentation

@property (retain, nonatomic) NSArray *comparisons;
@property (retain, nonatomic) NSString *nextURL;

+ (id)secureCodedPropertyKeys;
+ (id)initWithServerFragment:(id)a0;

- (void).cxx_destruct;

@end
