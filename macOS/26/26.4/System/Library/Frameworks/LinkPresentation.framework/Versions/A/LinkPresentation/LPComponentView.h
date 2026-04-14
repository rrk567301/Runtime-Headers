@protocol LPComponentViewHost;

@interface LPComponentView : NSView

@property (readonly, weak, nonatomic) id<LPComponentViewHost> host;

- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (id)initWithHost:(id)a0;
- (void)viewDidMoveToWindow;
- (void)componentViewDidMoveToWindow;
- (void)layoutComponentView;
- (id)layoutExclusionsForView:(id)a0;
- (BOOL)shouldAllowHighlightToRecognizeSimultaneouslyWithGesture:(id)a0;

@end
