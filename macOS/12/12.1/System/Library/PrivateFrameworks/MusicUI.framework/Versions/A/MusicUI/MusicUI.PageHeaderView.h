@interface MusicUI.PageHeaderView : MusicUI.FlippedView <NSCollectionViewElement> {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ notificationBadgeView;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ trailingAccessoryButton;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ clickGestureRecognizer;
    void /* unknown type, empty encoding */ showAccountButton;
    void /* unknown type, empty encoding */ userSocialProfileCoordinator;
}

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleAccountButtonClick:(id)a0;

@end
