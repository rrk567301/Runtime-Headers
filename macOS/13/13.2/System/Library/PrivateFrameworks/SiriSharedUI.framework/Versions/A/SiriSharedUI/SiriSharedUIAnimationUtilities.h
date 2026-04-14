@interface SiriSharedUIAnimationUtilities : NSObject

+ (double)defaultAnimationDuration;
+ (double)animationBeginTimeForStyle:(long long)a0;
+ (double)animationDurationForStyle:(long long)a0;
+ (id)animationForStyle:(long long)a0 expectedWidthForStyle:(id)a1;
+ (id)defaultTimingFunction;
+ (double)animationCoefficient;
+ (void)perfomAnimationBlockWithAnimationBlock:(id /* block */)a0 context:(id)a1 completion:(id /* block */)a2;
+ (id)_centeringAnimationForInitialScale:(double)a0 width:(double)a1;

@end
