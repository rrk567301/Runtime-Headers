@interface VKSpringAnimation : VKAnimation {
    double _startTimestamp;
    double _lastTimestamp;
    char _startTimestampSet;
    char _resuming;
    float _lastFraction;
    float _lastVelocity;
}

@property (readonly, nonatomic) float tension;
@property (readonly, nonatomic) float friction;
@property (copy, nonatomic) id /* block */ stepHandler;

- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)stopAnimation:(char)a0;
- (char)_calculateFractionForTimeElapsed:(double)a0 result:(float *)a1;
- (id)initWithTension:(float)a0 friction:(float)a1 name:(id)a2;
- (void)onTimerFired:(double)a0;

@end
