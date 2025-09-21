@protocol CBCurveShape, CBLuxRampPolicy;

@interface CBLuxRamp : NSObject {
    int _state;
    float _targetLux;
    id<CBLuxRampPolicy> _policy;
    id<CBCurveShape> _shape;
}

@property (readonly) float duration;
@property (readonly) float targetLux;
@property (readonly) float startLux;
@property (readonly) float startTime;
@property (readonly) float targetTime;
@property (readonly) float lux;

+ (id)luxRampStateToString:(int)a0;

- (void)dealloc;
- (void)forceLux:(float)a0;
- (id)initWithPolicy:(id)a0 andLuxShape:(id)a1;
- (int)rampFromLux:(float)a0 toLux:(float)a1;
- (int)rampFromLux:(float)a0 toLux:(float)a1 forceRamp:(BOOL)a2;
- (BOOL)rampIsRunning;
- (int)rampTimedFromLux:(float)a0 toLux:(float)a1 atTime:(float)a2;
- (int)rampTimedFromLux:(float)a0 toLux:(float)a1 atTime:(float)a2 forceRamp:(BOOL)a3;
- (BOOL)shouldRampFromStartLux:(float)a0 toTargetLux:(float)a1;
- (int)updateRampWithProgress:(float)a0;
- (int)updateTimedRamp:(float)a0;

@end
