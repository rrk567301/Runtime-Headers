@class NSImageView, _TtC12GameCenterUI20DynamicTypeTextField;

@interface GameCenterUI.ActivityFeedLeaderboardAvatarsSubview : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* function */ tapHandler;
}

@property (nonatomic, readonly) NSImageView *avatarBackgroundImage;
@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *messageLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *scoreLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *emojiLabel;
@property (nonatomic, copy) id /* block */ tapHandler;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)didTap;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measureToFit:(struct CGSize { double x0; double x1; })a0 with:(id)a1;

@end
