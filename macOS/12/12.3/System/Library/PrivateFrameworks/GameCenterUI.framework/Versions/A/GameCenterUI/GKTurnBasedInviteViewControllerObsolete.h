@class NSMutableDictionary, GKTurnBasedMatch;
@protocol GKTurnBasedInviteViewControllerDelegateObsolete;

@interface GKTurnBasedInviteViewControllerObsolete : GKMultiplayerViewControllerObsolete

@property (retain, nonatomic) NSMutableDictionary *inviteMessageDictionary;
@property (nonatomic) long long mode;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (nonatomic) BOOL deletePreloadedMatch;
@property (readonly, nonatomic, getter=isLoadingOrRemovingPreloadedMatch) BOOL loadingOrRemovingPreloadedMatch;
@property (weak, nonatomic) id<GKTurnBasedInviteViewControllerDelegateObsolete> delegate;

- (void).cxx_destruct;
- (void)cancel;
- (void)viewDidLoad;
- (void)finishWithError:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)startGameButtonPressed;
- (BOOL)canStartForcedAutomatch;
- (void)updateStartGameButtonTitle;
- (BOOL)isInSetupMode;
- (void)sendInvitesToContactPlayers:(id)a0 legacyPlayers:(id)a1;
- (void)playNow;
- (void)performActionsForButtonCancelCurrentMatching;
- (void)didInviteContactPlayers;
- (void)didClickCancelForServiceUnavailableAlert;
- (long long)automatchParticipantStatus;
- (void)setInvitesFailedWithError:(id)a0;
- (void)invitePlayers:(id)a0;
- (void)handleNewParticipantCount:(long long)a0;
- (void)removeCurrentMatchAndSetFlagIfNotLoaded:(BOOL)a0 withHandler:(id /* block */)a1;
- (void)cleanupStateForCancelOrErrorWithHandler:(id /* block */)a0;
- (void)finishWithMatchID:(id)a0;
- (void)createGameWithPlayersToInvite:(id)a0 forSharing:(BOOL)a1 handler:(id /* block */)a2;

@end
