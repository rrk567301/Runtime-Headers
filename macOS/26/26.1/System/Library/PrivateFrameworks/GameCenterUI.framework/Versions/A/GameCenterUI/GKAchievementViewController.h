@protocol GKAchievementViewControllerDelegate;

@interface GKAchievementViewController : GKGameCenterViewController

@property (weak) id<GKAchievementViewControllerDelegate> achievementDelegate;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (BOOL)remoteViewControllerRequestingDismiss:(id)a0;

@end
