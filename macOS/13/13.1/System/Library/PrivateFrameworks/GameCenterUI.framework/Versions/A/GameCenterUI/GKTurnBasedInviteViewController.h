@class NSMutableDictionary, GKTurnBasedMatch;
@protocol GKTurnBasedInviteViewControllerDelegate;

@interface GKTurnBasedInviteViewController : GKMultiplayerViewController

@property (retain, nonatomic) NSMutableDictionary *inviteMessageDictionary;
@property (nonatomic) long long mode;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (nonatomic) BOOL deletePreloadedMatch;
@property (readonly, nonatomic, getter=isLoadingOrRemovingPreloadedMatch) BOOL loadingOrRemovingPreloadedMatch;
@property (weak, nonatomic) id<GKTurnBasedInviteViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)cancel;
- (void)viewDidLoad;
- (void)finishWithError:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (long long)automatchParticipantStatus;
- (void)sendInvitesToContactPlayers:(id)a0 legacyPlayers:(id)a1;
- (void)setInvitesFailedWithError:(id)a0;
- (BOOL)canStartForcedAutomatch;
- (void)updateStartGameButtonTitle;
- (void)startGameButtonPressed;
- (void)inviteFriendsButtonPressed;
- (void)performActionsForButtonCancelCurrentMatching;
- (void)playNow;
- (void)invitePlayers:(id)a0;
- (void)didInviteContactPlayers;
- (void)didClickCancelForServiceUnavailableAlert;
- (void)handleNewParticipantCount:(long long)a0;
- (BOOL)isInSetupMode;
- (void)finishWithMatchID:(id)a0;
- (void)cleanupStateForCancelOrErrorWithHandler:(id /* block */)a0;
- (void)createGameWithPlayersToInvite:(id)a0 forSharing:(BOOL)a1 handler:(id /* block */)a2;
- (void)removeCurrentMatchAndSetFlagIfNotLoaded:(BOOL)a0 withHandler:(id /* block */)a1;

@end
