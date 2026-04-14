@class CADisplayLink;

@interface NSMoveHelper : NSObject {
    double _startTime;
    double _totalTime;
    double _elapsedTime;
    double _remainingTime;
    BOOL _done;
    long long _animationSerial;
    CADisplayLink *_displayLink;
    unsigned long long _signpostID;
}

@property (class) BOOL inhibitWindowAnimations;

+ (void)initialize;
+ (double)_windowAnimationVelocity;
+ (BOOL)runLoopModeIsCommonMode;

- (id)screen;
- (BOOL)isAnimating;
- (id)init;
- (double)animationDuration;
- (void)_doAnimation;
- (void)_fireDisplayLink:(id)a0;
- (void)_interruptAnimation;
- (unsigned long long)_signpostID;
- (void)_stopAnimation;
- (void)animateStep:(double)a0;
- (void)cleanUpAnimation;
- (void)interruptRunningAnimationIfNeeded;
- (id)runLoopMode;
- (void)setUpAnimation;
- (BOOL)shouldSkipAnimation;

@end
