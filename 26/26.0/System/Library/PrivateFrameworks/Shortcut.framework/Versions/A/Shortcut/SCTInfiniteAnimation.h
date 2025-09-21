@class NSObject;
@protocol SCTAnimatable;

@interface SCTInfiniteAnimation : NSAnimation {
    NSObject<SCTAnimatable> *mAnimateObject;
    float mInternalProgress;
    double mAnimationStart;
    float mDelayedStartTime;
}

- (void)startAnimation;
- (id)initWithObject:(id)a0;
- (void)dealloc;
- (void)setCurrentProgress:(float)a0;

@end
