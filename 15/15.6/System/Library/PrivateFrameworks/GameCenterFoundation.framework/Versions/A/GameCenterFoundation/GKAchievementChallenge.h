@class GKAchievement;

@interface GKAchievementChallenge : GKChallenge

@property (retain, nonatomic) GKAchievement *achievement;
@property (retain, nonatomic) GKAchievement *achievement;

+ (char)instancesRespondToSelector:(SEL)a0;

- (id)description;
- (void).cxx_destruct;
- (id)titleText;
- (void)setInternal:(id)a0;
- (id)initWithInternalRepresentation:(id)a0;
- (id)detailGoalTextForPlayer:(id)a0 withAchievement:(id)a1;
- (char)detailsLoaded;
- (void)loadDetailsWithCompletionHandler:(id /* block */)a0;

@end
