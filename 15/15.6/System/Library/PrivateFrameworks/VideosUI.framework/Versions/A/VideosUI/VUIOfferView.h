@class NSView, VUILabel;

@interface VUIOfferView : VUIBaseView

@property (retain, nonatomic) NSView *imageView;
@property (retain, nonatomic) NSView *logoView;
@property (retain, nonatomic) NSView *appIconView;
@property (retain, nonatomic) VUILabel *channelNameLabel;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *subtitleLabel;
@property (retain, nonatomic) VUILabel *textLabel;
@property (retain, nonatomic) NSView *versionsButton;
@property (retain, nonatomic) NSView *channelImageBackgroundView;
@property (nonatomic) char isEntitled;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double topPartAspectRatio;
@property (nonatomic) double secondLineBaselineMargin;

- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)accessibilityTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isAccessibilityElement;
- (double)_chinHeightForSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })computeSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutOfferSubviewsWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForCellReuse;
- (void)setSelected:(char)a0 animated:(char)a1 withAnimationCoordinator:(void *)a2;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(char)a1;

@end
