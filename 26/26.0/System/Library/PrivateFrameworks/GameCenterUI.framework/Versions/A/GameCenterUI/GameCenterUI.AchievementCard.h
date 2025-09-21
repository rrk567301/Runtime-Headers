@class CAGradientLayer, NSString, _TtC12GameCenterUI20DynamicTypeTextField, _TtC12GameCenterUI27OverlappingPlayersPhotoView, CALayer, _TtC12GameCenterUI8BaseView, _TtC12GameCenterUI16AchievementBadge;

@interface GameCenterUI.AchievementCard : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ theme;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ model;
    void /* function */ backgroundEffectsGroup;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* function */ tapHandler;
}

@property (class, nonatomic, readonly) NSString *titleTextStyle;
@property (class, nonatomic, readonly) NSString *subtitleTextStyle;
@property (class, nonatomic, readonly) long long maxFriendAvatars;

@property (nonatomic, readonly) _TtC12GameCenterUI8BaseView *backgroundView;
@property (nonatomic, readonly) CAGradientLayer *gradient;
@property (nonatomic, readonly) CALayer *border;
@property (nonatomic, readonly) _TtC12GameCenterUI16AchievementBadge *badge;
@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *titleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *subtitleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI27OverlappingPlayersPhotoView *friendsWhoAchievedThis;
@property (nonatomic) BOOL alwaysShowShadow;
@property (nonatomic, copy) NSString *backgroundEffectsGroup;
@property (nonatomic, retain) _TtC12GameCenterUI8BaseView *hostView;
@property (nonatomic, copy) id /* block */ tapHandler;

- (void)setContentHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)init;
- (id)menuForEvent:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)didTap;
- (void)configureFriendsWhoHaveThisView:(id)a0;

@end
