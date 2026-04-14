@interface MUContentBorderView : NSView

@property (readonly) double borderWidth;

- (void)viewWillMoveToWindow:(id)a0;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;

@end
