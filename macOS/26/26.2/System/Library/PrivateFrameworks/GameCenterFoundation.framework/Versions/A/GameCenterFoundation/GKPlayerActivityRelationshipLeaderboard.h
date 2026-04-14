@class NSArray, GKLeaderboardInternal;

@interface GKPlayerActivityRelationshipLeaderboard : GKPlayerActivityRelationshipBase

@property (retain, nonatomic) NSArray *scores;
@property (nonatomic) long long leaderboardType;
@property (retain, nonatomic) GKLeaderboardInternal *leaderboardInternal;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
