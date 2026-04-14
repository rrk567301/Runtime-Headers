@interface VKDynamicAnimation : VKAnimation {
    double _lastTimestamp;
    BOOL _resuming;
}

@property (copy, nonatomic) id /* block */ dynamicStepHandler;

- (void)onTimerFired:(double)a0;
- (void)resume;
- (void)stopAnimation:(BOOL)a0;
- (BOOL)runsForever;
- (void)pause;
- (void).cxx_destruct;
- (void)setRunsForever:(BOOL)a0;
- (id)init;

@end
