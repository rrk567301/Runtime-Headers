@protocol GKAchievementViewControllerDelegate;

@interface GKAchievementViewController : GKGameCenterViewController

@property (weak) id<GKAchievementViewControllerDelegate> achievementDelegate;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (BOOL)remoteViewControllerRequestingDismiss:(id)a0;

@end
