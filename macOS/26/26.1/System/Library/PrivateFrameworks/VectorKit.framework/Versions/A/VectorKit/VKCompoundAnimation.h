@class NSMutableArray;

@interface VKCompoundAnimation : VKAnimation

@property (readonly, nonatomic) NSMutableArray *animations;
@property (copy, nonatomic) id /* block */ groupStepHandler;

- (void)onTimerFired:(double)a0;
- (BOOL)timed;
- (BOOL)running;
- (void)resume;
- (void)stopAnimation:(BOOL)a0;
- (BOOL)runsForever;
- (void)pause;
- (void)startWithRunner:(id)a0;
- (void).cxx_destruct;
- (double)duration;
- (void)setRunsForever:(BOOL)a0;
- (id)initWithAnimations:(id)a0;
- (void)setDuration:(double)a0;

@end
