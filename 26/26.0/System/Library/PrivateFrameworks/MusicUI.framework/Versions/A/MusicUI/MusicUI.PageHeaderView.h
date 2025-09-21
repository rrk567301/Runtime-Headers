@interface MusicUI.PageHeaderView : NSVisualEffectView <NSCollectionViewElement> {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ notificationBadgeView;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ trailingAccessoryButton;
    void /* unknown type, empty encoding */ headerStyle;
    void /* unknown type, empty encoding */ hasUpsellBanner;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ clickGestureRecognizer;
    void /* unknown type, empty encoding */ showAccountButton;
    void /* unknown type, empty encoding */ userSocialProfileCoordinator;
    void /* unknown type, empty encoding */ socialGraphController;
}

@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRingMaskBounds;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)drawFocusRingMask;
- (void)handleAccountButtonClick:(id)a0;

@end
