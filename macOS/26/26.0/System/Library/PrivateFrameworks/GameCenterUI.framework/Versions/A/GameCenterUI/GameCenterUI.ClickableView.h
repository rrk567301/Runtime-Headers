@interface GameCenterUI.ClickableView : GameCenterUI.BaseView

@property (nonatomic, weak) void /* function */ target;
@property (nonatomic) SEL action;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isHighlighted;
@property (nonatomic) BOOL isUserInteractionEnabled;
@property (nonatomic) BOOL isTrackingMouse;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } trackingBounds;
@property (nonatomic) BOOL refusesFirstResponder;
@property (nonatomic, readonly) BOOL acceptsFirstResponder;
@property (nonatomic, readonly) BOOL needsPanelToBecomeKey;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)mouseDragged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)performClick:(id)a0;
- (void)cancelEventTracking;
- (void)didChangeState;

@end
