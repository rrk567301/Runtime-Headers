@interface _NSToolbarItemViewerLabelView : NSControl

@property long long state;
@property BOOL showingRollover;

- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;
- (id)_highlightColorForCell:(id)a0;
- (long long)_preferredLayerContentsRedrawPolicy;
- (struct CGSize { double x0; double x1; })_defaultContentCompressionResistancePriorities;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 text:(id)a1;

@end
