@interface JUCustomView : NSView

@property (readonly, getter=isFlipped) BOOL flipped;
@property BOOL needsLayout;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;

+ (void)initialize;

- (void)layout;
- (void)layoutSubtreeIfNeeded;
- (void)layoutIfNeeded;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)jet_traitCollectionDidChange:(id)a0;

@end
