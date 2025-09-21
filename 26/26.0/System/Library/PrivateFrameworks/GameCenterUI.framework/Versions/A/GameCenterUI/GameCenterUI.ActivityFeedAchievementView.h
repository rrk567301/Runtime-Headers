@class NSImageView, NSArray, _TtC12GameCenterUI22ActivityFeedSharedView, _TtC12GameCenterUI8BaseView;

@interface GameCenterUI.ActivityFeedAchievementView : GameCenterUI.BaseView {
    void /* function */ stackAchievementCards;
    void /* unknown type, empty encoding */ didHideOutOfBoundsCard;
}

@property (nonatomic, readonly) _TtC12GameCenterUI8BaseView *contentBackgroundView;
@property (nonatomic, readonly) _TtC12GameCenterUI22ActivityFeedSharedView *sharedView;
@property (nonatomic, readonly) NSImageView *achievementCardContainer;
@property (nonatomic, readonly) NSImageView *achievementConfettiView;
@property (nonatomic, readonly) NSArray *stackAchievementCards;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
