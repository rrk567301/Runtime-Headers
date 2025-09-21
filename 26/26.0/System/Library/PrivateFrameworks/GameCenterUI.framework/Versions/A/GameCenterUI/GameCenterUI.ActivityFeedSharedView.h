@class _TtC12GameCenterUI11ArtworkView, _TtC12GameCenterUI31DynamicTypeTextFieldLinkedLabel, _TtC12GameCenterUI17GKPlayerGroupView, NSDate;

@interface GameCenterUI.ActivityFeedSharedView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ componentData;
    void /* unknown type, empty encoding */ linkClickedTimestamp;
}

@property (nonatomic, readonly) _TtC12GameCenterUI31DynamicTypeTextFieldLinkedLabel *titleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI17GKPlayerGroupView *playerGroupView;
@property (nonatomic, readonly) _TtC12GameCenterUI11ArtworkView *playerGroupSubartworkView;
@property (nonatomic, copy) NSDate *linkClickedTimestamp;
@property (nonatomic) double linkClickInterval;

+ (id)createLaunchGameLinkWith:(id)a0 linkPosition:(long long)a1;
+ (id)createShowAchievementLinkWith:(id)a0 linkPosition:(long long)a1;
+ (id)createShowLeaderboardLinkWith:(id)a0 linkPosition:(long long)a1;
+ (id)createShowPlayerProfileLinkWith:(id)a0 linkPosition:(long long)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)clickedOnLink:(id)a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measureToFit:(struct CGSize { double x0; double x1; })a0 with:(id)a1;

@end
