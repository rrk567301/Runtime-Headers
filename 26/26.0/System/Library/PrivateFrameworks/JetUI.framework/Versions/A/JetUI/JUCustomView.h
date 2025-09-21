@interface JUCustomView : NSView

@property (readonly, getter=isFlipped) BOOL flipped;
@property BOOL needsLayout;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;

+ (void)initialize;

- (void)setNeedsLayout;
- (void)layoutIfNeeded;
- (void)layout;
- (struct CGSize { double x0; double x1; })fittingSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)layoutSubtreeIfNeeded;
- (void)jet_traitCollectionDidChange:(id)a0;

@end
