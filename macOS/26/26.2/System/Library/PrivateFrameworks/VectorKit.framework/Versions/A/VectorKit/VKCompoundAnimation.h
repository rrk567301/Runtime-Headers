@class NSMutableArray;

@interface VKCompoundAnimation : VKAnimation

@property (readonly, nonatomic) NSMutableArray *animations;
@property (copy, nonatomic) id /* block */ groupStepHandler;

- (void)onTimerFired:(double)a0;
- (double)duration;
- (void)pause;
- (BOOL)running;
- (void)setRunsForever:(BOOL)a0;
- (void)setDuration:(double)a0;
- (BOOL)timed;
- (void)startWithRunner:(id)a0;
- (void)resume;
- (void)stopAnimation:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)runsForever;
- (id)initWithAnimations:(id)a0;

@end
