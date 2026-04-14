@class NSMutableArray;

@interface VKCompoundAnimation : VKAnimation

@property (readonly, nonatomic) NSMutableArray *animations;
@property (copy, nonatomic) id /* block */ groupStepHandler;

- (void)resume;
- (void).cxx_destruct;
- (void)pause;
- (double)duration;
- (BOOL)running;
- (void)setDuration:(double)a0;
- (void)stopAnimation:(BOOL)a0;
- (id)initWithAnimations:(id)a0;
- (void)setRunsForever:(BOOL)a0;
- (BOOL)timed;
- (void)startWithRunner:(id)a0;
- (void)onTimerFired:(double)a0;
- (BOOL)runsForever;

@end
