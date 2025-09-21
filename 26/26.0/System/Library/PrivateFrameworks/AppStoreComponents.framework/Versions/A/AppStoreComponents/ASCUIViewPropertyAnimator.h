@class NSUUID, NSMutableArray, ASCUICubicTimingParameters;

@interface ASCUIViewPropertyAnimator : NSObject

@property (copy, nonatomic) ASCUICubicTimingParameters *timingParameters;
@property (nonatomic) double duration;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSMutableArray *animations;
@property (readonly, nonatomic) NSMutableArray *completions;
@property (retain, nonatomic) NSUUID *animationID;

- (void)startAnimation;
- (void)stopAnimation:(BOOL)a0;
- (void)pauseAnimation;
- (void)continueAnimationWithTimingParameters:(id)a0 durationFactor:(double)a1;
- (void)addCompletion:(id /* block */)a0;
- (void)finishAnimationAtPosition:(long long)a0;
- (void)addAnimations:(id /* block */)a0;
- (id)initWithDuration:(double)a0 timingParameters:(id)a1;
- (void).cxx_destruct;
- (void)runAnimations;
- (void)runCompletionsForPosition:(long long)a0;

@end
