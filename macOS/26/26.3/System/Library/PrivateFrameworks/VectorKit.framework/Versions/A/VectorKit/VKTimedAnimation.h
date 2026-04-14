@interface VKTimedAnimation : VKAnimation {
    double _duration;
    double _startTimestamp;
    double _lastTimestamp;
    BOOL _resuming;
    BOOL _startTimestampSet;
}

@property (copy, nonatomic) id /* block */ timingFunction;
@property (copy, nonatomic) id /* block */ stepHandler;

+ (void)setDragCoefficientGetter:(id /* block */)a0;

- (void)stopAnimation:(BOOL)a0;
- (double)duration;
- (void)pause;
- (id)init;
- (id)initWithName:(id)a0;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithDuration:(double)a0;
- (void)setDuration:(double)a0;
- (BOOL)timed;
- (id)initWithDuration:(double)a0 priority:(long long)a1 name:(id)a2;
- (void)onTimerFired:(double)a0;
- (id)initWithDuration:(double)a0 name:(id)a1;

@end
