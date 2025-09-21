@interface VKDynamicAnimation : VKAnimation {
    double _lastTimestamp;
    char _resuming;
}

@property (copy, nonatomic) id /* block */ dynamicStepHandler;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)stopAnimation:(char)a0;
- (void)setRunsForever:(char)a0;
- (void)onTimerFired:(double)a0;
- (char)runsForever;

@end
