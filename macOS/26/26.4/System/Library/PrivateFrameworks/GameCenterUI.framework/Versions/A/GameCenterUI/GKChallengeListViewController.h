@interface GKChallengeListViewController : GKDashboardCollectionViewController

@property (nonatomic) BOOL shouldShowPlayForChallenge;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL isDeeplinked;

- (void)viewDidAppear;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)donePressed:(id)a0;
- (id)backButtonImage;
- (void)configureCloseButton;
- (void)configureCollectionView;
- (id)initWithGameRecord:(id)a0;
- (void)setupNoContentView:(id)a0 withError:(id)a1;
- (void)showNoContentPlaceholderForError:(id)a0;

@end
