@protocol GKAchievementViewControllerDelegate;

@interface GKAchievementViewController : GKGameCenterViewController

@property (weak) id<GKAchievementViewControllerDelegate> achievementDelegate;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)remoteViewControllerRequestingDismiss:(id)a0;

@end
