@class GKInvite;
@protocol GKMultiplayerP2PViewControllerDelegate;

@interface GKMultiplayerP2PViewController : GKMultiplayerViewController

@property (nonatomic) long long mode;
@property (retain, nonatomic) GKInvite *acceptedInvite;
@property (nonatomic) double inviteeConnectionTimeStamp;
@property BOOL userCancelledMatching;
@property BOOL datasourceConfigured;
@property (nonatomic, getter=isHosted) BOOL hosted;
@property (weak, nonatomic) id<GKMultiplayerP2PViewControllerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)viewDidLoad;
- (void)finishWithError:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)applicationWillEnterForeground;
- (BOOL)isCanceling;
- (void)updateMode;
- (void)configureDataSource;
- (void)setConnectingStateForPlayer:(id)a0;
- (void)setAutomatchPlayerCount:(long long)a0;
- (void)startGameButtonPressed;
- (BOOL)canStartForcedAutomatch;
- (void)updateStartGameButtonTitle;
- (void)removedPlayer:(id)a0;
- (void)willPresentPlayerPicker:(id)a0;
- (void)updateFooterButtonStates;
- (BOOL)isInSetupMode;
- (void)sendInvitesToContactPlayers:(id)a0 legacyPlayers:(id)a1;
- (void)playNow;
- (void)setShareInvitees;
- (void)loadShareURLWithCompletion:(id /* block */)a0;
- (void)performActionsForButtonCancelCurrentMatching;
- (void)didUpdateAutoMatchPlayerCount;
- (long long)automatchParticipantStatus;
- (void)setInvitesFailedWithError:(id)a0;
- (void)invitePlayers:(id)a0;
- (void)cancelAlertWithoutDelegateCallback;
- (void)showParentalControlsRestrictionAlert;
- (void)cancelPendingInvites;
- (void)updateForNewMode;
- (BOOL)havePendingPlayers;
- (void)startGame;
- (void)sendStatusUpdate;
- (void)playerConnected:(id)a0;
- (void)playerDisconnected:(id)a0;
- (void)showInviterDisconnectedAlert;
- (void)showAutomatchingErrorAlert;
- (BOOL)haveInvitedPlayers;
- (void)displayCancelConfirmationDialog;
- (void)resetInviteesStatus;
- (void)showMatchDisconnectedAlertForPlayer:(id)a0;
- (id)initWithAcceptedInvite:(id)a0;
- (void)setExistingPlayers:(id)a0;
- (void)setPlayer:(id)a0 responded:(long long)a1;
- (void)setPlayer:(id)a0 connected:(BOOL)a1;
- (void)setPlayer:(id)a0 sentData:(id)a1;
- (void)setAutomatchFailedWithError:(id)a0;
- (void)setFailedWithError:(id)a0;
- (void)inviterCancelled;
- (BOOL)shouldChangeModeFromOldMode:(long long)a0 toNewMode:(long long)a1;
- (void)incrementOneAutoMatchPlayerCountIfPossible;
- (void)processStatusUpdateMessageFromPlayer:(id)a0 bytes:(const char *)a1 withLength:(unsigned int)a2;

@end
