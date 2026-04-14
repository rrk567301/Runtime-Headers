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
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (id)initWithState:(long long)a0;
- (void)requestRemoteViewController;
- (void)remoteViewController:(id)a0 receivedMessageFromService:(id)a1;
- (BOOL)remoteViewControllerRequestingDismiss:(id)a0;
- (struct CGSize { double x0; double x1; })_gkSizeForDialogController;
- (BOOL)_gkMatchParentContentSize;
- (id)_gkInGameUIUnavailableAlertWithDismissHandler:(id /* block */)a0;
- (BOOL)shouldShowPlayForChallenge;
- (BOOL)shouldShowPlayForTurnBasedMatch;
- (BOOL)shouldShowQuitForTurnBasedMatch;
- (id)initWithLeaderboardID:(id)a0 playerScope:(long long)a1 timeScope:(long long)a2;
- (id)initWithLeaderboard:(id)a0 playerScope:(long long)a1;
- (id)initWithAchievementID:(id)a0;
- (id)initWithPlayerID:(id)a0 withFriendsList:(BOOL)a1;
- (void)checkArcadeStateWithCompletion:(id /* block */)a0;
- (void)playPressedForChallenge:(id)a0;

@end
