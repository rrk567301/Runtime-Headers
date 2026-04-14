@class GKGame, NSString, GKTurnBasedParticipantsDataSource, NSObject, GKTurnBasedMatch;
@protocol GKTurnBasedMatchDetailViewControllerDelegate;

@interface GKTurnBasedMatchDetailViewController : GKBasicCollectionViewController <NSPopoverDelegate>

@property (retain) GKTurnBasedParticipantsDataSource *participantsDataSource;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (retain, nonatomic) GKGame *game;
@property (nonatomic) BOOL isInGame;
@property (nonatomic) BOOL shouldShowPlay;
@property (nonatomic) BOOL shouldShowQuit;
@property (weak, nonatomic) NSObject<GKTurnBasedMatchDetailViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)loadView;
- (void)configureDataSource;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)acceptInvitation:(id)a0;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)declineInvitation:(id)a0;
- (id)detailView;
- (void)doneButtonPressed:(id)a0;
- (void)buyButtonPressed:(id)a0;
- (void)chooseMatch:(id)a0;
- (void)configureHeader:(id)a0 indexPath:(id)a1;
- (void)configureViewFactories;
- (void)didEnterNoContentState;
- (void)didUpdateModel;
- (void)handleTurnBasedEvent:(id)a0;
- (void)quitMatch:(id)a0;
- (void)removeMatch:(id)a0;
- (void)setButtonsEnabled:(BOOL)a0;

@end
