@class CASpringAnimation, CAMediaTimingFunction;

@interface NSSpringAnimation : NSAnimation {
    CASpringAnimation *_animation;
}

@property double mass;
@property double stiffness;
@property double damping;
@property double velocity;
@property (retain) CAMediaTimingFunction *timingFunction;

- (id)initWithDuration:(double)a0;
- (float)currentValue;
- (void)dealloc;
- (double)durationForEpsilon:(double)a0;

@end
