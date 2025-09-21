@class CAMediaTimingFunction;

@interface BU_TMFloatParameterController : NSObject {
    double _initialValue;
    double _targetValue;
    CAMediaTimingFunction *_mediaTimingFunction;
    double _startTime;
    double _targetTime;
}

+ (id)parameterControllerWithInitialValue:(double)a0;

- (id)init;
- (double)duration;
- (double)targetValue;
- (double)initialValue;
- (void).cxx_destruct;
- (void)_setInitialValue:(double)a0;
- (double)interpolatedValueAtTime:(double)a0;
- (void)setTargetValue:(double)a0 atTime:(double)a1 withDuration:(double)a2;

@end
