@class NSArray, GKLeaderboardInternal;

@interface GKPlayerActivityRelationshipLeaderboard : GKPlayerActivityRelationshipBase

@property (retain, nonatomic) NSArray *scores;
@property (nonatomic) long long leaderboardType;
@property (retain, nonatomic) GKLeaderboardInternal *leaderboardInternal;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
