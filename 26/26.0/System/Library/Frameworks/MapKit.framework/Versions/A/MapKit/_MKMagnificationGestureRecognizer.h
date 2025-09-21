@interface _MKMagnificationGestureRecognizer : NSObject {
    id _target;
    SEL _action;
    struct CGPoint { double x; double y; } _location;
}

@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) double magnification;
@property (readonly, nonatomic) long long state;

- (void)_setState:(long long)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void).cxx_destruct;
- (void)magnifyWithEvent:(id)a0;

@end
