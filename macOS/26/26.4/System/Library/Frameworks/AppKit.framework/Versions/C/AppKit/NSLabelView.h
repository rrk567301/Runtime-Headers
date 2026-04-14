@interface NSLabelView : NSControl

@property unsigned long long imagePosition;
@property BOOL allowsMultipleSelection;

+ (Class)cellClass;

- (BOOL)resignFirstResponder;
- (void)mouseUp:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)viewWillMoveToWindow:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (BOOL)allowsMultipleSelection;
- (void)mouseDown:(id)a0;
- (void)setAllowsMultipleSelection:(BOOL)a0;
- (void)updateTrackingAreas;
- (void)_setFocusedPart:(long long)a0;
- (void)_setNeedsDisplayForPart:(long long)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (unsigned long long)imagePosition;
- (void)rightMouseUp:(id)a0;
- (void)setImagePosition:(unsigned long long)a0;

@end
