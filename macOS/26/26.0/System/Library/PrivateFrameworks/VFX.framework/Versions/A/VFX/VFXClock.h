@interface VFXClock : NSObject {
    BOOL _useFixedTimeStep;
    double _time;
    double _timeStep;
    double _lastUpdateTime;
    BOOL _wasPaused;
    struct __CFXWorld { } *_world;
}

@property (nonatomic) struct VFXClockTimeRange { double begin; double end; } replayLoopRange;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) BOOL useFixedTimeStep;
@property (nonatomic) float speed;
@property (nonatomic) double time;
@property (nonatomic) double timeStep;

- (id)_scene;
- (void)dealloc;
- (id)init;
- (void *)__CFObject;
- (void)setWorld:(struct __CFXWorld { } *)a0;
- (void)_updateVFXCoreUseFixedTimeStep:(BOOL)a0;
- (void)_updateVFXCorePause;
- (void)_updateVFXCoreSpeedFactor;
- (void)_updateVFXCoreTime:(double)a0;
- (void)_updateVFXCoreTimeStep:(double)a0;
- (void)_updateWithAbsoluteTime:(double)a0 usingLoopRange:(struct VFXClockTimeRange { double x0; double x1; })a1;
- (void)updateWithAbsoluteTime:(double)a0;

@end
