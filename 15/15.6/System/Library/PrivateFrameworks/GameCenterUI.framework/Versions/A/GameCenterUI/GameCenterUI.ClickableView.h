@interface GameCenterUI.ClickableView : GameCenterUI.BaseView

@property (nonatomic, weak) void /* unknown type, empty encoding */ target;
@property (nonatomic) void /* unknown type, empty encoding */ action;
@property (nonatomic) void /* unknown type, empty encoding */ isEnabled;
@property (nonatomic) void /* unknown type, empty encoding */ isHighlighted;
@property (nonatomic) void /* unknown type, empty encoding */ isUserInteractionEnabled;
@property (nonatomic) void /* unknown type, empty encoding */ isTrackingMouse;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } trackingBounds;
@property (nonatomic) void /* unknown type, empty encoding */ refusesFirstResponder;
@property (nonatomic, readonly) char acceptsFirstResponder;
@property (nonatomic, readonly) char needsPanelToBecomeKey;

- (void).cxx_destruct;
- (char)acceptsFirstMouse:(id)a0;
- (char)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)performClick:(id)a0;
- (char)resignFirstResponder;
- (void)cancelEventTracking;
- (void)didChangeState;

@end
