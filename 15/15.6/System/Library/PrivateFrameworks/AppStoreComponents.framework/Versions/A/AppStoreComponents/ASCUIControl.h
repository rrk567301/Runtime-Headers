@class NSSet, NSMutableArray;

@interface ASCUIControl : ASCUIView

@property (nonatomic, getter=isTracking) char tracking;
@property (nonatomic, getter=isTouchInside) char touchInside;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } trackingBounds;
@property (readonly, nonatomic) NSMutableArray *targetActions;
@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic, getter=isSelected) char selected;
@property (nonatomic, getter=isHighlighted) char highlighted;
@property (readonly, nonatomic) NSSet *allTargets;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)acceptsFirstMouse:(id)a0;
- (char)acceptsFirstResponder;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (char)mouseDownCanMoveWindow;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (char)needsPanelToBecomeKey;
- (void)removeTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void)setUserInteractionEnabled:(char)a0;
- (id)actionsForTarget:(id)a0 forControlEvent:(unsigned long long)a1;
- (void)sendAction:(SEL)a0 to:(id)a1 forEvent:(id)a2;
- (void)sendActionsForControlEvents:(unsigned long long)a0;

@end
