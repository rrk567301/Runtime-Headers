@class NSMutableArray;

@interface VKCompoundAnimation : VKAnimation

@property (readonly, nonatomic) NSMutableArray *animations;
@property (copy, nonatomic) id /* block */ groupStepHandler;

- (void)stopAnimation:(BOOL)a0;
- (double)duration;
- (void)pause;
- (id)initWithAnimations:(id)a0;
- (void)resume;
- (void).cxx_destruct;
- (void)setRunsForever:(BOOL)a0;
- (void)setDuration:(double)a0;
- (BOOL)runsForever;
- (void)startWithRunner:(id)a0;
- (BOOL)timed;
- (BOOL)running;
- (void)onTimerFired:(double)a0;

@end
