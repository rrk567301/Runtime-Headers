@class NSDisplayLink1;

@interface NSMoveHelper : NSObject {
    double _startTime;
    double _totalTime;
    double _elapsedTime;
    double _remainingTime;
    char _done;
    long long _animationSerial;
    NSDisplayLink1 *_displayLink;
    unsigned long long _signpostID;
}

@property (class) char inhibitWindowAnimations;

+ (void)initialize;
+ (double)_windowAnimationVelocity;
+ (char)runLoopModeIsCommonMode;

- (id)init;
- (void)_doAnimation;
- (void)_fireDisplayLink:(id)a0;
- (void)_interruptAnimation;
- (unsigned long long)_signpostID;
- (void)_stopAnimation;
- (void)animateStep:(double)a0;
- (double)animationDuration;
- (void)cleanUpAnimation;
- (void)interruptRunningAnimationIfNeeded;
- (char)isAnimating;
- (id)runLoopMode;
- (id)screen;
- (void)setUpAnimation;
- (char)shouldSkipAnimation;

@end
