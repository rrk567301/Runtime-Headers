@class GKResizingLabel, NSTextField, GKAchievementIconView, GKAchievement, NSView;

@interface GKDashboardAchievementCell : GKRectShadowCell

@property (retain, nonatomic) GKAchievement *achievement;
@property (retain, nonatomic) GKAchievement *localAchievement;
@property (nonatomic) GKAchievementIconView *iconView;
@property (nonatomic) GKResizingLabel *titleLabel;
@property (nonatomic) GKResizingLabel *descriptionLabel;
@property (nonatomic) NSTextField *pointsLabel;
@property (nonatomic) NSTextField *pointsTextLabel;
@property (readonly, nonatomic) NSView *popoverSourceView;

- (void).cxx_destruct;
- (void)setupForAchievement:(id)a0 localAchievement:(id)a1;

@end
