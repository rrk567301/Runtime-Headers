@class NSObject;
@protocol SCTAnimatable;

@interface SCTInfiniteAnimation : NSAnimation {
    NSObject<SCTAnimatable> *mAnimateObject;
    float mInternalProgress;
    double mAnimationStart;
    float mDelayedStartTime;
}

- (id)initWithObject:(id)a0;
- (void)startAnimation;
- (void)setCurrentProgress:(float)a0;
- (void)dealloc;

@end
