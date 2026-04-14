@class GKGameRecord, NSView, UXSegmentedControl, NSTextField, NSString, NSMutableDictionary, NSMutableArray, GKDashboardCollectionViewController, NSButton, GKDashboardChallengeDataSource, GKDashboardLeaderboardScoreViewController;

@interface GKDashboardViewController : GKDashboardCollectionViewController

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) NSMutableArray *viewControllers;
@property (weak, nonatomic) GKDashboardCollectionViewController *currentViewController;
@property (weak, nonatomic) GKDashboardLeaderboardScoreViewController *leaderboardViewController;
@property (retain, nonatomic) NSMutableDictionary *viewStateIndexes;
@property (weak, nonatomic) NSView *containerView;
@property (weak, nonatomic) UXSegmentedControl *segmentedControl;
@property (weak, nonatomic) NSTextField *titleLabel;
@property (weak, nonatomic) NSButton *shareButton;
@property (retain, nonatomic) GKDashboardChallengeDataSource *challengeDataSource;
@property (nonatomic) long long viewState;
@property (nonatomic) long long leaderboardTimeScope;
@property (retain, nonatomic) NSString *leaderboardIdentifier;
@property (nonatomic) BOOL shouldShowPlayForChallenge;
@property (nonatomic) BOOL shouldShowPlayForTurnBasedMatch;
@property (nonatomic) BOOL shouldShowQuitForTurnBasedMatch;
@property (copy, nonatomic) id /* block */ onDoneButtonPressed;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)donePressed:(id)a0;
- (void)selectedSegmentChanged:(id)a0;
- (id)initWithGameRecord:(id)a0;
- (void)addCollectionViewControllerForDataSource:(id)a0 withTitle:(id)a1 forViewState:(long long)a2;
- (void)addCollectionViewController:(id)a0 withTitle:(id)a1 forViewState:(long long)a2;
- (void)showViewControllerAtIndex:(long long)a0;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)_gkRefreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)sharePressed:(id)a0;

@end
