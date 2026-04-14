@interface GameCenterUI.GKAddFriendsLockupView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ textLabel;
    void /* unknown type, empty encoding */ addFriendsHandler;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ button;
@property (nonatomic, copy) id /* block */ addFriendsHandler;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 friendState:(long long)a1;
- (void)didTapButton:(id)a0;

@end
