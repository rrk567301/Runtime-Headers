@class NSToolbarItem;

@interface _NSToolbarItemViewerLabelView : NSControl {
    NSToolbarItem *_item;
}

@property long long state;
@property BOOL showingRollover;
@property (weak) NSToolbarItem *item;

- (void)mouseDown:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (double)firstBaselineOffsetFromTop;
- (double)lastBaselineOffsetFromBottom;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_defaultContentCompressionResistancePriorities;
- (id)_highlightColorForCell:(id)a0;
- (long long)_preferredLayerContentsRedrawPolicy;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 text:(id)a1;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;

@end
