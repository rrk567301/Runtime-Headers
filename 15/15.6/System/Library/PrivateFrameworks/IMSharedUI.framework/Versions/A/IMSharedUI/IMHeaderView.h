@interface IMHeaderView : NSView

@property char mouseDownMovesWindow;

- (char)acceptsFirstMouse:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (char)_mouseInContent:(id)a0;

@end
