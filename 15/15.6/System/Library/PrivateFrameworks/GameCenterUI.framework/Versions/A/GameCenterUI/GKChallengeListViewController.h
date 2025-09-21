@interface GKChallengeListViewController : GKDashboardCollectionViewController

@property (nonatomic) char shouldShowPlayForChallenge;
@property (nonatomic) double startTime;
@property (nonatomic) char isDeeplinked;

- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillAppear:(char)a0;
- (void)viewDidAppear:(char)a0;
- (void)viewWillDisappear:(char)a0;
- (void)donePressed:(id)a0;
- (id)backButtonImage;
- (void)configureCloseButton;
- (void)configureCollectionView;
- (id)initWithGameRecord:(id)a0;
- (void)setupNoContentView:(id)a0 withError:(id)a1;
- (void)showNoContentPlaceholderForError:(id)a0;

@end
