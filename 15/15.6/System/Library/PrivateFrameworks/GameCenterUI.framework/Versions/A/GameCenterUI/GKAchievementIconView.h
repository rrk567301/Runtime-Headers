@class GKAchievement;

@interface GKAchievementIconView : NSImageView

@property (retain, nonatomic) GKAchievement *achievement;
@property (retain, nonatomic) GKAchievement *localAchievement;
@property (nonatomic) char isDetail;

+ (id)progressSource;
+ (id)progressSourceDetail;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateIntrinsicContentSize;
- (void)configureImage;
- (void)loadAndProcessAchievementProgressImageForAchievement:(id)a0 withHandler:(id /* block */)a1;
- (id)processProgressImage:(id)a0 forAchievement:(id)a1;
- (double)progressForAchievement:(id)a0;
- (id)progressIdentifierForAchievement:(id)a0;
- (void)setupForAchievement:(id)a0 localAchievement:(id)a1;

@end
