@class GKLeaderboardSet;

@interface GKDashboardLeaderboardListViewController : GKDashboardCollectionViewController

@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet;

- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithGameRecord:(id)a0 leaderboardSet:(id)a1;

@end
