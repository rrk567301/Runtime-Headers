@interface _NUMediaViewOverlayView : NSView

@property (getter=isUserInteractionEnabled) BOOL userInteractionEnabled;

- (BOOL)acceptsFirstResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;

@end
