@class GKLeaderboardSet;

@interface GKDashboardLeaderboardListViewController : GKDashboardCollectionViewController

@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)initWithGameRecord:(id)a0 leaderboardSet:(id)a1;

@end
