@class NSString;

@interface VUIActionUpdateSportsFavorite : VUIAction {
    char isFavorite;
    char confirmsRemoval;
    char firesBackgroundEvent;
}

@property (copy, nonatomic) NSString *sportsTeamID;
@property (copy, nonatomic) NSString *sportsTeamName;

+ (void)performFavoritesOperation:(char)a0 teamId:(id)a1 teamName:(id)a2 confirmRemoval:(char)a3 fireBackgroundEvent:(char)a4 requestExecutionHandler:(id /* block */)a5;
+ (void)performFavoritesOperation:(char)a0 teamId:(id)a1 teamName:(id)a2 requestExecutionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0;
- (char)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
