@class NSArray, NSToolbarItem;

@interface NSToolbarLabelStack : NSView {
    NSToolbarItem *_item;
    NSArray *_labelViews;
    struct CGSize { double width; double height; } _intrinsicContentSize;
    BOOL _allowsMultilineWrapping;
    BOOL _inPalette;
}

@property (weak) NSToolbarItem *item;
@property (copy) NSArray *labelViews;
@property BOOL allowsMultilineWrapping;
@property BOOL inPalette;

- (struct __NSToolbarItemLayoutMetrics { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; })_metrics;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)invalidateIntrinsicContentSize;
- (void)dealloc;
- (id)initWithItem:(id)a0;
- (void)layout;
- (double)firstBaselineOffsetFromTop;
- (double)lastBaselineOffsetFromBottom;
- (void).cxx_destruct;
- (id)_centeredSingleLabelConstraints;
- (void)noteViewChanged;
- (struct CGSize { double x0; double x1; })_defaultContentCompressionResistancePriorities;
- (id)_equalWidthLabelConstraints;
- (double)_largestLabelWidth;
- (double)_standardSpacing;
- (id)_viewAlignedLabelConstraints;
- (id)declaredLayoutConstraints;
- (double)midXInSelfForItemRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
