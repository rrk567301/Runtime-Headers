@protocol GKAchievementViewControllerDelegate;

@interface GKAchievementViewController : GKGameCenterViewController

@property (weak) id<GKAchievementViewControllerDelegate> achievementDelegate;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)remoteViewControllerRequestingDismiss:(id)a0;

@end
