@class NSString, GKMatchRequest;
@protocol GKTurnBasedMatchmakerViewControllerDelegate, GKRemoteViewController;

@interface GKTurnBasedMatchmakerViewController : NSViewController <GKRemoteViewControllerDelegate, GKDialogControllerSizing, GKViewController>

@property (retain, nonatomic) GKMatchRequest *matchRequest;
@property (retain, nonatomic) id<GKRemoteViewController> remoteViewController;
@property BOOL didRequestRemoteViewController;
@property (weak, nonatomic) id<GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate;
@property (nonatomic) BOOL showExistingMatches;
@property (nonatomic) long long matchmakingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)view;
- (void)cancel;
- (void)loadView;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)finishWithError:(id)a0;
- (void)requestRemoteViewController;
- (void)authenticationChanged:(id)a0;
- (void)remoteViewController:(id)a0 receivedMessageFromService:(id)a1;
- (BOOL)remoteViewControllerRequestingDismiss:(id)a0;
- (struct CGSize { double x0; double x1; })_gkSizeForDialogController;
- (BOOL)_gkMatchParentContentSize;
- (id)initWithMatchRequest:(id)a0;
- (id)_gkInGameUIUnavailableAlertWithDismissHandler:(id /* block */)a0;
- (BOOL)shouldShowPlayForTurnBasedMatch;
- (BOOL)shouldShowQuitForTurnBasedMatch;
- (void)finishWithMatch:(id)a0;
- (void)playerQuitMatch:(id)a0;

@end
