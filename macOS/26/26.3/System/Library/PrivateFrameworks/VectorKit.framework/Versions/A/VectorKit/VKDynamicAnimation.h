@interface VKDynamicAnimation : VKAnimation {
    double _lastTimestamp;
    BOOL _resuming;
}

@property (copy, nonatomic) id /* block */ dynamicStepHandler;

- (void)stopAnimation:(BOOL)a0;
- (void)pause;
- (id)init;
- (void)resume;
- (void).cxx_destruct;
- (void)setRunsForever:(BOOL)a0;
- (BOOL)runsForever;
- (void)onTimerFired:(double)a0;

@end
