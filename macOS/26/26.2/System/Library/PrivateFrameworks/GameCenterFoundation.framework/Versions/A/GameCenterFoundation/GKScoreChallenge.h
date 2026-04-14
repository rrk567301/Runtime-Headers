@class GKScore, GKLeaderboard, GKLeaderboardEntry;

@interface GKScoreChallenge : GKChallenge

@property (readonly, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) GKScore *score;
@property (readonly, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) GKScore *score;
@property (readonly, retain, nonatomic) GKLeaderboardEntry *leaderboardEntry;

+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (void)setInternal:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)titleText;
- (id)initWithInternalRepresentation:(id)a0;
- (id)detailGoalTextForPlayer:(id)a0 withLeaderboard:(id)a1;
- (BOOL)detailsLoaded;
- (void)loadDetailsWithCompletionHandler:(id /* block */)a0;

@end
