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
@property (nonatomic) BOOL isEntitled;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double AXBaselineMargin;
@property (nonatomic) double topPartAspectRatio;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityTitle;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (struct CGSize { double x0; double x1; })computeSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutOfferSubviews;
- (double)_chinHeightForSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(void *)a2;
- (void)prepareForCellReuse;

@end
