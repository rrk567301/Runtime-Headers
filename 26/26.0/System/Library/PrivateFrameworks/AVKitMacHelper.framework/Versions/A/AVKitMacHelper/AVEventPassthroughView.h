@class NSView;

@interface AVEventPassthroughView : NSView

@property (nonatomic) BOOL showsDimmingView;
@property (retain, nonatomic) NSView *dimmingView;

- (void)layout;
- (void)viewDidMoveToWindow;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollWheel:(id)a0;

@end
