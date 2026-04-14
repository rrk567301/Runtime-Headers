@class _TtC12GameCenterUI16NavigationButton;

@interface GameCenterUI.NavigationButton : GameCenterUI.ButtonView {
    void /* unknown type, empty encoding */ buttonBackgroundColor;
    void /* unknown type, empty encoding */ buttonMaskColor;
    void /* unknown type, empty encoding */ buttonSize;
    void /* unknown type, empty encoding */ buttonImage;
    void /* unknown type, empty encoding */ isCircular;
    void /* unknown type, empty encoding */ inlineImageView;
}

@property (class, nonatomic, readonly) _TtC12GameCenterUI16NavigationButton *backButton;

+ (id)makeCloseButton;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityTitle;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)jet_traitCollectionDidChange:(id)a0;
- (void)didChangeState;

@end
