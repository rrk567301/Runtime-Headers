@class NSMutableArray;

@interface VKCompoundAnimation : VKAnimation

@property (readonly, nonatomic) NSMutableArray *animations;
@property (copy, nonatomic) id /* block */ groupStepHandler;

- (void)pause;
- (id)initWithAnimations:(id)a0;
- (void)onTimerFired:(double)a0;
- (void)stopAnimation:(BOOL)a0;
- (void)setDuration:(double)a0;
- (BOOL)timed;
- (void)resume;
- (void)setRunsForever:(BOOL)a0;
- (BOOL)running;
- (BOOL)runsForever;
- (double)duration;
- (void).cxx_destruct;
- (void)startWithRunner:(id)a0;

@end
