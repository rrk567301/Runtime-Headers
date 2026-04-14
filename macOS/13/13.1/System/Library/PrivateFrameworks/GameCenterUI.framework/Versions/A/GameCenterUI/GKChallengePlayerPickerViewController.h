@class NSTextField, NSView, NSArray, NSString, GKChallenge, NSLayoutConstraint, _TtC12GameCenterUI15ImageButtonView, NSButton, GKComposeController;

@interface GKChallengePlayerPickerViewController : GKDashboardCollectionViewController <GKComposeControllerDelegate>

@property (retain, nonatomic) GKChallenge *challenge;
@property (retain, nonatomic) NSArray *initiallySelectedPlayers;
@property (nonatomic) BOOL shouldIgnoreClearSelection;
@property (nonatomic) NSTextField *descriptionLabel;
@property (nonatomic) NSButton *sendButton;
@property (nonatomic) NSTextField *messageField;
@property (retain, nonatomic) _TtC12GameCenterUI15ImageButtonView *customizeMessageButton;
@property NSView *actionView;
@property NSView *titleView;
@property NSTextField *titleTextField;
@property NSButton *cancelButton;
@property (nonatomic) NSView *scrollingHeader;
@property (nonatomic) NSLayoutConstraint *scrollingHeaderTopConstraint;
@property (nonatomic) double scrollingHeaderTopConstraintConstant;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } initialInsets;
@property (nonatomic) BOOL shouldApplyInitialOffset;
@property (nonatomic) NSLayoutConstraint *customizeMessageBottomConstraint;
@property (nonatomic) double initialCustomizeMessageBottomConstraintConstant;
@property (retain, nonatomic) GKComposeController *composeController;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (void)viewDidLoad;
- (void)loadData;
- (void)send:(id)a0;
- (void)addMessage:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)setSearchText:(id)a0;
- (void)clearSelection;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)preferredFocusEnvironments;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (id)backButtonImage;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dataUpdated:(BOOL)a0 withError:(id)a1;
- (void)setupNoContentView:(id)a0 withError:(id)a1;
- (void)composeController:(id)a0 didFinishWithMessage:(id)a1;
- (void)composeControllerWasCancelled:(id)a0;
- (id)initWithChallenge:(id)a0 initiallySelectedPlayers:(id)a1;
- (void)applyInitialContentOffset;
- (void)selectPlayersAtIndexPaths:(id)a0;
- (void)doneWithComposeController;
- (void)updateButtonEnableState;

@end
