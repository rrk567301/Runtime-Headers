@interface MusicUI.TabBannerView : NSControl {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ primaryButton;
    void /* unknown type, empty encoding */ bannerAction;
}

@property (nonatomic, readonly) BOOL flipped;

- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (void)applyLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (BOOL)accessibilityIsIgnored;

@end
