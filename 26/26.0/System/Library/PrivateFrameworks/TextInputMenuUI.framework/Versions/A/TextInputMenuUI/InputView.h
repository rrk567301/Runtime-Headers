@interface InputView : NSView

@property (nonatomic) BOOL selected;
@property (retain) id delegate;
@property long long trackingTag;
@property unsigned long long index;

- (void)mouseDown:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)mouse:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)needsPanelToBecomeKey;
- (void)logTextField:(id)a0;

@end
