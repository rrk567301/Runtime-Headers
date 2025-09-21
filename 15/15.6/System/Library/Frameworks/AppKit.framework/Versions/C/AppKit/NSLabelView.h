@interface NSLabelView : NSControl

@property unsigned long long imagePosition;
@property char allowsMultipleSelection;

+ (Class)cellClass;

- (void)_setFocusedPart:(long long)a0;
- (void)_setNeedsDisplayForPart:(long long)a0;
- (char)acceptsFirstMouse:(id)a0;
- (char)allowsMultipleSelection;
- (char)becomeFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)imagePosition;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (char)resignFirstResponder;
- (void)rightMouseUp:(id)a0;
- (void)setAllowsMultipleSelection:(char)a0;
- (void)setImagePosition:(unsigned long long)a0;
- (void)updateTrackingAreas;
- (void)viewWillMoveToWindow:(id)a0;

@end
