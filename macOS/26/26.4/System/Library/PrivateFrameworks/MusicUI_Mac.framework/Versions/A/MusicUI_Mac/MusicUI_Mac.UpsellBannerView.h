@interface MusicUI_Mac.UpsellBannerView : NSControl <NSCollectionViewElement> {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ primaryButton;
    void /* unknown type, empty encoding */ bannerAction;
}

@property (nonatomic, readonly) BOOL flipped;

- (void)layout;
- (void)applyLayout;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityChildren;
- (BOOL)accessibilityIsIgnored;

@end
