@class NSTextField, GKAchievementIconView, GKAchievement, NSButton;

@interface GKDashboardAchievementDetailViewController : GKDetailViewController

@property (nonatomic) GKAchievementIconView *iconView;
@property (nonatomic) NSTextField *titleLabel;
@property (nonatomic) NSTextField *descriptionLabel;
@property (nonatomic) NSTextField *progressLabel;
@property (nonatomic) NSTextField *disabledLabel;
@property (nonatomic) NSButton *firstButton;
@property (nonatomic) NSButton *secondButton;
@property (retain, nonatomic) GKAchievement *achievement;
@property (retain, nonatomic) GKAchievement *localAchievement;

- (void).cxx_destruct;
- (void)share:(id)a0;
- (void)viewDidLoad;
- (id)preferredFocusEnvironments;
- (void)challenge:(id)a0;
- (void)configureForAchievements;
- (id)initWithAchievement:(id)a0 localAchievement:(id)a1;

@end
