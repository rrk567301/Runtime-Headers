@interface QLMediaUIControl : NSView {
    id _target;
    SEL _action;
    unsigned char _enabled : 1;
    unsigned char _highlighted : 1;
    unsigned char _tracking : 1;
}

@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic, getter=isHighlighted) char highlighted;
@property (nonatomic) SEL action;
@property (weak, nonatomic) id target;
@property (nonatomic, getter=isTracking) char tracking;

+ (void)initialize;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)acceptsFirstMouse:(id)a0;
- (char)acceptsFirstResponder;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (char)accessibilityIsAttributeSettable:(id)a0;
- (char)accessibilityIsIgnored;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)sendAction:(SEL)a0 to:(id)a1;

@end
