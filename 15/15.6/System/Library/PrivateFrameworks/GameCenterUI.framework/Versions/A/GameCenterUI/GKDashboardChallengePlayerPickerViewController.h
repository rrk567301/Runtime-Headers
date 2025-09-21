@class NSTextField, NSView, NSArray, NSString, GKChallenge, GKComposeController, NSLayoutConstraint, NSButton;

@interface GKDashboardChallengePlayerPickerViewController : GKDashboardCollectionViewController <NSTextFieldDelegate, GKComposeControllerDelegate>

@property (retain, nonatomic) GKChallenge *challenge;
@property (retain, nonatomic) NSArray *initiallySelectedPlayers;
@property (nonatomic) char shouldIgnoreClearSelection;
@property (nonatomic) NSTextField *descriptionLabel;
@property (nonatomic) NSButton *sendButton;
@property (nonatomic) NSButton *customizeMessageButton;
@property (nonatomic) NSTextField *messageField;
@property (nonatomic) NSView *scrollingHeader;
@property (nonatomic) NSLayoutConstraint *scrollingHeaderTopConstraint;
@property (nonatomic) double scrollingHeaderTopConstraintConstant;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } initialInsets;
@property (nonatomic) char shouldApplyInitialOffset;
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
- (void)loadData;
- (void)viewDidLoad;
- (void)send:(id)a0;
- (void)addMessage:(id)a0;
- (void)viewWillAppear:(char)a0;
- (void)viewDidAppear:(char)a0;
- (void)setSearchText:(id)a0;
- (void)clearSelection;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (id)preferredFocusEnvironments;
- (char)textFieldShouldReturn:(id)a0;
- (void)_updateButtonEnableState;
- (void)applyInitialContentOffset;
- (void)composeController:(id)a0 didFinishWithMessage:(id)a1;
- (void)composeControllerWasCancelled:(id)a0;
- (void)dataUpdated:(char)a0 withError:(id)a1;
- (void)doneWithComposeController;
- (id)initWithChallenge:(id)a0 initiallySelectedPlayers:(id)a1;
- (void)selectPlayersAtIndexPaths:(id)a0;
- (void)setupNoContentView:(id)a0 withError:(id)a1;

@end
