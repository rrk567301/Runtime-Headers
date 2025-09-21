@interface InputView : NSView

@property (nonatomic) char selected;
@property (retain) id delegate;
@property long long trackingTag;
@property unsigned long long index;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (char)acceptsFirstResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (char)mouse:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (char)needsPanelToBecomeKey;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (void)logTextField:(id)a0;

@end
