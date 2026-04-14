@protocol GKAchievementViewControllerDelegate;

@interface GKAchievementViewController : GKGameCenterViewController

@property (weak) id<GKAchievementViewControllerDelegate> achievementDelegate;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (BOOL)remoteViewControllerRequestingDismiss:(id)a0;

@end
