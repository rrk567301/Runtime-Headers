@interface GKChallengeListViewController : GKDashboardCollectionViewController

@property (nonatomic) BOOL shouldShowPlayForChallenge;
@property (nonatomic) double startTime;

- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)donePressed:(id)a0;
- (void)setupNoContentView:(id)a0 withError:(id)a1;
- (void)removeVisualEffectInView:(id)a0;
- (id)backButtonImage;
- (id)initWithGameRecord:(id)a0;
- (void)configureCloseButton;
- (void)showNoContentPlaceholderForError:(id)a0;
- (void)configureCollectionView;

@end
