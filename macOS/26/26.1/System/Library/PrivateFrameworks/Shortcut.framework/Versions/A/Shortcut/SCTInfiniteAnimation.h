@class NSObject;
@protocol SCTAnimatable;

@interface SCTInfiniteAnimation : NSAnimation {
    NSObject<SCTAnimatable> *mAnimateObject;
    float mInternalProgress;
    double mAnimationStart;
    float mDelayedStartTime;
}

- (void)startAnimation;
- (void)setCurrentProgress:(float)a0;
- (id)initWithObject:(id)a0;
- (void)dealloc;

@end
