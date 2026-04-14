@interface VKDynamicAnimation : VKAnimation {
    double _lastTimestamp;
    BOOL _resuming;
}

@property (copy, nonatomic) id /* block */ dynamicStepHandler;

- (void)onTimerFired:(double)a0;
- (void)pause;
- (void)setRunsForever:(BOOL)a0;
- (void)resume;
- (void)stopAnimation:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)runsForever;
- (id)init;

@end
