@interface CBStopsBasedBrightnessRamp : NSObject {
    float _start;
    float _target;
    float _current;
    float _rampSpeed;
    float _rampTime;
    float _startTime;
    float _timeOfLastUpdate;
}

- (float)target;
- (float)currentBrightness;
- (id)initWithStartingBrightness:(float)a0 targetBrightness:(float)a1 rampSpeed:(float)a2 andCurrentTime:(float)a3;
- (float)timeOfLastUpdate;
- (int)updateRampWithProgress:(float)a0;
- (int)updateRampWithTimestamp:(float)a0;

@end
