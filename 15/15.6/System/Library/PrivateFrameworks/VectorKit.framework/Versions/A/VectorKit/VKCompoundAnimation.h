@class NSMutableArray;

@interface VKCompoundAnimation : VKAnimation

@property (readonly, nonatomic) NSMutableArray *animations;
@property (copy, nonatomic) id /* block */ groupStepHandler;

- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (double)duration;
- (void)setDuration:(double)a0;
- (char)running;
- (id)initWithAnimations:(id)a0;
- (void)stopAnimation:(char)a0;
- (void)setRunsForever:(char)a0;
- (void)onTimerFired:(double)a0;
- (char)runsForever;
- (void)startWithRunner:(id)a0;
- (char)timed;

@end
