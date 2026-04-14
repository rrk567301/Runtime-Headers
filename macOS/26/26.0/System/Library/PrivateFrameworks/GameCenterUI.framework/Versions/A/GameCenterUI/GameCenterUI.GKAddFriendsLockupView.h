@class NSString, _TtC12GameCenterUI10PillButton;

@interface GameCenterUI.GKAddFriendsLockupView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ textLabel;
    void /* unknown type, empty encoding */ metricsPageId;
    void /* unknown type, empty encoding */ metricsPageType;
    void /* function */ addFriendsHandler;
}

@property (class, nonatomic, readonly) NSString *text;
@property (class, nonatomic, readonly) NSString *lbAddFriendsText;
@property (class, nonatomic, readonly) NSString *lbAddMoreFriendsText;
@property (class, nonatomic, readonly) long long textNumberOfLines;
@property (class, nonatomic, readonly) NSString *buttonText;

@property (nonatomic, readonly) _TtC12GameCenterUI10PillButton *button;
@property (nonatomic, copy) id /* block */ addFriendsHandler;

+ (double)preferredHeightWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void).cxx_destruct;
- (void)didTapButton:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 friendState:(long long)a1 metricsPageId:(id)a2 metricsPageType:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 metricsPageId:(id)a1 metricsPageType:(id)a2;
- (id)textLabelFor:(long long)a0;

@end
