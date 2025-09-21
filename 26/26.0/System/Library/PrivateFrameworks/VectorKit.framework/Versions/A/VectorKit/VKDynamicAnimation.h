@interface VKDynamicAnimation : VKAnimation {
    double _lastTimestamp;
    BOOL _resuming;
}

@property (copy, nonatomic) id /* block */ dynamicStepHandler;

- (void)pause;
- (void)onTimerFired:(double)a0;
- (void)stopAnimation:(BOOL)a0;
- (void)resume;
- (id)init;
- (void)setRunsForever:(BOOL)a0;
- (BOOL)runsForever;
- (void).cxx_destruct;

@end
