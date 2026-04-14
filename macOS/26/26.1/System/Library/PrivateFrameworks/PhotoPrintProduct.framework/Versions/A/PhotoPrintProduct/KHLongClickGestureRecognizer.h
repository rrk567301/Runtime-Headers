@class NSTimer;

@interface KHLongClickGestureRecognizer : NSGestureRecognizer {
    NSTimer *_clickTimer;
    struct CGPoint { double x; double y; } _initialMouseLocation;
}

@property (nonatomic) double minimumPressDuration;
@property (nonatomic) double allowableMovement;

- (void)_stopTimer;
- (void)mouseUp:(id)a0;
- (void)_startTimer;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)reset;
- (void).cxx_destruct;
- (void)mouseDragged:(id)a0;
- (void)mouseDown:(id)a0;
- (void)_minimumDurationElapsed:(id)a0;

@end
