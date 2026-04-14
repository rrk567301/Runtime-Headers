@class NSMutableDictionary, GKTurnBasedMatch;
@protocol GKTurnBasedInviteViewControllerDelegate;

@interface GKTurnBasedInviteViewController : GKMultiplayerViewController

@property (retain, nonatomic) NSMutableDictionary *inviteMessageDictionary;
@property (nonatomic) long long mode;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (nonatomic) BOOL deletePreloadedMatch;
@property (readonly, nonatomic, getter=isLoadingOrRemovingPreloadedMatch) BOOL loadingOrRemovingPreloadedMatch;
@property (weak, nonatomic) id<GKTurnBasedInviteViewControllerDelegate> delegate;

- (void)cancel;
- (void)viewWillAppear:(BOOL)a0;
- (void)finishWithError:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)pageId;
- (void)viewDidLoad;
- (void)playNow;
- (long long)automatchParticipantStatus;
- (BOOL)canStartForcedAutomatch;
- (void)cleanupStateForCancelOrErrorWithHandler:(id /* block */)a0;
- (void)createGameWithPlayersToInvite:(id)a0 forSharing:(BOOL)a1 handler:(id /* block */)a2;
- (void)didClickCancelForServiceUnavailableAlert;
- (void)didInviteContactPlayers;
- (void)finishWithMatchID:(id)a0;
- (void)handleNewParticipantCount:(long long)a0;
- (void)inviteFriendsButtonPressed;
- (void)invitePlayers:(id)a0;
- (BOOL)isInSetupMode;
- (void)performActionsForButtonCancelCurrentMatching;
- (void)removeCurrentMatchAndSetFlagIfNotLoaded:(BOOL)a0 withHandler:(id /* block */)a1;
- (void)sendInvitesToContactPlayers:(id)a0 legacyPlayers:(id)a1 source:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)setInvitesFailedWithError:(id)a0;
- (void)startGameButtonPressed;
- (void)updateStartGameButtonTitle;

@end
