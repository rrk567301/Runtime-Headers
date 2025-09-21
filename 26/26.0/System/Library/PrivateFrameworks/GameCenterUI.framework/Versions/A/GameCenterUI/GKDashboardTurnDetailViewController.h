@class NSTextField, NSView, NSLayoutConstraint, NSButton, GKTurnBasedMatch;

@interface GKDashboardTurnDetailViewController : GKDetailViewController

@property (nonatomic) NSView *contentVerticalCenteringView;
@property (nonatomic) NSView *turnDetailContentView;
@property (nonatomic) NSTextField *playingWithLabel;
@property (nonatomic) NSTextField *createdLabel;
@property (nonatomic) NSButton *firstButton;
@property (nonatomic) NSButton *secondButton;
@property (nonatomic) NSLayoutConstraint *secondButtonCenteringConstraint;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (nonatomic) BOOL shouldShowPlay;
@property (nonatomic) BOOL shouldShowQuit;

- (void)viewDidLoad;
- (void)dealloc;
- (id)preferredFocusEnvironments;
- (void)acceptInvitation:(id)a0;
- (void).cxx_destruct;
- (void)declineInvitation:(id)a0;
- (void)disableButtons;
- (void)turnOK:(id)a0;
- (void)chooseMatch:(id)a0;
- (void)handleTurnBasedEvent:(id)a0;
- (id)initWithTurnBasedMatch:(id)a0;
- (void)quitMatch:(id)a0;
- (void)refreshPresenter;
- (void)removeMatch:(id)a0;

@end
