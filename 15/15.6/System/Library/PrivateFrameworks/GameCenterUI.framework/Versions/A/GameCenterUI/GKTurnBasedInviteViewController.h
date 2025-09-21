@class NSMutableDictionary, GKTurnBasedMatch;
@protocol GKTurnBasedInviteViewControllerDelegate;

@interface GKTurnBasedInviteViewController : GKMultiplayerViewController

@property (retain, nonatomic) NSMutableDictionary *inviteMessageDictionary;
@property (nonatomic) long long mode;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (nonatomic) char deletePreloadedMatch;
@property (readonly, nonatomic, getter=isLoadingOrRemovingPreloadedMatch) char loadingOrRemovingPreloadedMatch;
@property (weak, nonatomic) id<GKTurnBasedInviteViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)cancel;
- (void)viewDidLoad;
- (void)finishWithError:(id)a0;
- (void)viewWillAppear:(char)a0;
- (void)viewDidAppear:(char)a0;
- (void)viewWillDisappear:(char)a0;
- (id)pageId;
- (void)playNow;
- (long long)automatchParticipantStatus;
- (char)canStartForcedAutomatch;
- (void)cleanupStateForCancelOrErrorWithHandler:(id /* block */)a0;
- (void)createGameWithPlayersToInvite:(id)a0 forSharing:(char)a1 handler:(id /* block */)a2;
- (void)didClickCancelForServiceUnavailableAlert;
- (void)didInviteContactPlayers;
- (void)finishWithMatchID:(id)a0;
- (void)handleNewParticipantCount:(long long)a0;
- (void)inviteFriendsButtonPressed;
- (void)invitePlayers:(id)a0;
- (char)isInSetupMode;
- (void)performActionsForButtonCancelCurrentMatching;
- (void)removeCurrentMatchAndSetFlagIfNotLoaded:(char)a0 withHandler:(id /* block */)a1;
- (void)sendInvitesToContactPlayers:(id)a0 legacyPlayers:(id)a1 source:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)setInvitesFailedWithError:(id)a0;
- (void)startGameButtonPressed;
- (void)updateStartGameButtonTitle;

@end
