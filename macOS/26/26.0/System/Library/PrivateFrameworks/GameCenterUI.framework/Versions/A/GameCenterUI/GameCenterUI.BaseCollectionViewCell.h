@class NSString, _TtC12GameCenterUI8BaseView;

@interface GameCenterUI.BaseCollectionViewCell : GameCenterUI.BaseView

@property (class, nonatomic, readonly) NSString *reuseIdentifier;
@property (class, nonatomic, readonly) BOOL wantsBackgroundViews;

@property (nonatomic, readonly) _TtC12GameCenterUI8BaseView *contentView;
@property (nonatomic, retain) _TtC12GameCenterUI8BaseView *backgroundView;
@property (nonatomic, retain) _TtC12GameCenterUI8BaseView *selectedBackgroundView;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) long long highlightState;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void).cxx_destruct;

@end
