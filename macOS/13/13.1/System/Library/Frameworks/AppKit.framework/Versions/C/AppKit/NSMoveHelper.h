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
- (unsigned long long)_signpostID;
- (BOOL)isAnimating;
- (void)_stopAnimation;
- (id)screen;
- (void)_doAnimation;
- (void)_fireDisplayLink:(id)a0;
- (BOOL)shouldSkipAnimation;
- (double)animationDuration;
- (id)runLoopMode;
- (void)setUpAnimation;
- (void)animateStep:(double)a0;
- (void)cleanUpAnimation;
- (void)_interruptAnimation;
- (void)interruptRunningAnimationIfNeeded;

@end
