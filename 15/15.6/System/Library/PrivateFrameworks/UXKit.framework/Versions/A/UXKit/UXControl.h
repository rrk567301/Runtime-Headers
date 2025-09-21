@interface UXControl : UXView

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic, getter=isHighlighted) char highlighted;
@property (nonatomic, getter=isSelected) char selected;
@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic) char ignoresMultiClick;
@property (nonatomic) char sendsActionOnMouseDown;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (void)mouseDown:(id)a0;
- (char)sendAction:(SEL)a0 to:(id)a1;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (char)_locationInsideForEvent:(id)a0;

@end
