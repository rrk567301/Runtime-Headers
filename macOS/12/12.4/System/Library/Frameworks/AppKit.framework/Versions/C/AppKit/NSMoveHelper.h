@class NSDisplayLink1;

@interface NSMoveHelper : NSObject {
    double _startTime;
    double _totalTime;
    double _elapsedTime;
    double _remainingTime;
    BOOL _done;
    long long _animationSerial;
    NSDisplayLink1 *_displayLink;
    unsigned long long _signpostID;
}

@property (class) BOOL inhibitWindowAnimations;

+ (void)initialize;
+ (double)_windowAnimationVelocity;
+ (BOOL)runLoopModeIsCommonMode;

- (id)init;
- (id)screen;
- (BOOL)isAnimating;
- (void)_stopAnimation;
- (void)interruptRunningAnimationIfNeeded;
- (void)_doAnimation;
- (double)animationDuration;
- (void)cleanUpAnimation;
- (void)_interruptAnimation;
- (unsigned long long)_signpostID;
- (void)animateStep:(double)a0;
- (BOOL)shouldSkipAnimation;
- (void)setUpAnimation;
- (void)_fireDisplayLink:(id)a0;
- (id)runLoopMode;

@end
