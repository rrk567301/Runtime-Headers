@interface KHPinchGestureRecognizer : NSGestureRecognizer

@property (readonly, nonatomic) double velocity;

- (struct CGPoint { double x0; double x1; })locationOfTouch:(unsigned long long)a0 inView:(id)a1;
- (unsigned long long)numberOfTouches;
- (void)rightMouseDown:(id)a0;

@end
