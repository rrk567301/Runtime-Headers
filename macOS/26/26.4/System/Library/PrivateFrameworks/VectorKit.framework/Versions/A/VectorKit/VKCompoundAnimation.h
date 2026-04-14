@class NSMutableArray;

@interface VKCompoundAnimation : VKAnimation

@property (readonly, nonatomic) NSMutableArray *animations;
@property (copy, nonatomic) id /* block */ groupStepHandler;

- (void)onTimerFired:(double)a0;
- (void)resume;
- (void)stopAnimation:(BOOL)a0;
- (BOOL)running;
- (void)pause;
- (BOOL)runsForever;
- (void)setDuration:(double)a0;
- (BOOL)timed;
- (void)startWithRunner:(id)a0;
- (id)initWithAnimations:(id)a0;
- (double)duration;
- (void)setRunsForever:(BOOL)a0;
- (void).cxx_destruct;

@end
