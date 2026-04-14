@class NSTimer;

@interface KHLongClickGestureRecognizer : NSGestureRecognizer {
    NSTimer *_clickTimer;
    struct CGPoint { double x; double y; } _initialMouseLocation;
}

@property (nonatomic) double minimumPressDuration;
@property (nonatomic) double allowableMovement;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)reset;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)_startTimer;
- (void).cxx_destruct;
- (void)_stopTimer;
- (void)_minimumDurationElapsed:(id)a0;

@end
