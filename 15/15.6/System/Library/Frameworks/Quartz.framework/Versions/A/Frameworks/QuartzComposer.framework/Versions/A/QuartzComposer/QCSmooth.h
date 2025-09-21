@class QCInterpolationPort, QCNumberPort, QCArray;

@interface QCSmooth : QCPatch {
    QCNumberPort *inputValue;
    QCNumberPort *inputIncreasingDuration;
    QCInterpolationPort *inputIncreasingInterpolation;
    QCNumberPort *inputDecreasingDuration;
    QCInterpolationPort *inputDecreasingInterpolation;
    QCNumberPort *outputValue;
    char _useTangent;
    char _needsRender;
    QCArray *_lastValue;
    QCArray *_tangent;
    QCArray *_startValue;
    QCArray *_startTangent;
    QCArray *_newValue;
    QCArray *_lastTime;
    QCArray *_startTime;
    QCArray *_iterationUpdate;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (id)stateArrays;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (char)setup:(id)a0;
- (void)_computeValueForTime:(double)a0 duration:(double)a1 interpolation:(id)a2 iteration:(unsigned long long)a3;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;

@end
