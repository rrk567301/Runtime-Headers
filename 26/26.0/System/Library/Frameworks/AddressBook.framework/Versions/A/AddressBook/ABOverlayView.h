@class NSView;

@interface ABOverlayView : NSView

@property (retain) NSView *overlaidView;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)constraintsAttachingOverlayToOverlaidView;
- (id)effectiveOverlaidView;
- (BOOL)isOverlayDrawingNeeded;

@end
