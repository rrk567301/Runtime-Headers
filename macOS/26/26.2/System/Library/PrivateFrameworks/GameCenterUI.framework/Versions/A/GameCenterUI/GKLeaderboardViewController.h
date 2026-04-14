@class NSString;
@protocol GKLeaderboardViewControllerDelegate;

@interface GKLeaderboardViewController : GKGameCenterViewController

@property long long timeScope;
@property (copy) NSString *category;
@property (weak) id<GKLeaderboardViewControllerDelegate> leaderboardDelegate;

- (void).cxx_destruct;
- (id)init;
- (BOOL)remoteViewControllerRequestingDismiss:(id)a0;

@end
