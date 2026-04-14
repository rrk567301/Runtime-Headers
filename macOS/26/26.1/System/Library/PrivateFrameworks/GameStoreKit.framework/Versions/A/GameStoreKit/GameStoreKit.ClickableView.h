@interface GameStoreKit.ClickableView : GameStoreKit.BaseView {
    void /* function */ clickHandler;
}

@property (nonatomic, weak) void /* function */ target;
@property (nonatomic) SEL action;
@property (nonatomic, copy) id /* block */ clickHandler;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isHighlighted;
@property (nonatomic) BOOL isUserInteractionEnabled;
@property (nonatomic) BOOL isTrackingMouse;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } trackingBounds;
@property (nonatomic) BOOL refusesFirstResponder;
@property (nonatomic, readonly) BOOL acceptsFirstResponder;
@property (nonatomic, readonly) BOOL needsPanelToBecomeKey;

- (void)mouseUp:(id)a0;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)mouseDragged:(id)a0;
- (void)mouseDown:(id)a0;
- (void)keyDown:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)performClick:(id)a0;
- (void)cancelEventTracking;
- (void)didChangeState;

@end
