@class NSString, GKLeaderboard;
@protocol GKGameCenterControllerDelegate, GKRemoteViewController;

@interface GKGameCenterViewController : NSViewController <GKRemoteViewControllerDelegate, GKDialogControllerSizing, GKViewController>

@property (retain, nonatomic) id<GKRemoteViewController> remoteViewController;
@property (retain, nonatomic) NSString *leaderboardIdentifier;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) NSString *achievementIdentifier;
@property (retain, nonatomic) NSString *playerIdentifier;
@property (retain, nonatomic) NSString *leaderboardCategory;
@property (nonatomic) long long leaderboardTimeScope;
@property (nonatomic) long long leaderboardPlayerScope;
@property (nonatomic) long long viewState;
@property BOOL didRequestRemoteViewController;
@property (copy, nonatomic) NSString *launchContext;
@property (weak) id<GKGameCenterControllerDelegate> gameCenterDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)view;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (id)initWithState:(long long)a0;
- (void)requestRemoteViewController;
- (void)checkArcadeStateWithCompletion:(id /* block */)a0;
- (BOOL)shouldShowQuitForTurnBasedMatch;
- (BOOL)shouldShowPlayForTurnBasedMatch;
- (id)_gkInGameUIUnavailableAlertWithDismissHandler:(id /* block */)a0;
- (BOOL)_gkMatchParentContentSize;
- (struct CGSize { double x0; double x1; })_gkSizeForDialogController;
- (id)initWithAchievementID:(id)a0;
- (id)initWithLeaderboard:(id)a0 playerScope:(long long)a1;
- (id)initWithLeaderboardID:(id)a0 playerScope:(long long)a1 timeScope:(long long)a2;
- (id)initWithPlayerID:(id)a0 withFriendsList:(BOOL)a1;
- (void)playPressedForChallenge:(id)a0;
- (void)remoteViewController:(id)a0 receivedMessageFromService:(id)a1;
- (BOOL)remoteViewControllerRequestingDismiss:(id)a0;
- (BOOL)shouldShowPlayForChallenge;

@end
