@class QCIndexPort, QCNumberPort;

@interface QCLFO : QCPatch {
    QCIndexPort *inputType;
    QCNumberPort *inputPeriod;
    QCNumberPort *inputPhase;
    QCNumberPort *inputAmplitude;
    QCNumberPort *inputOffset;
    QCNumberPort *inputPWMRatio;
    QCNumberPort *outputValue;
    double _randomTime;
    double _randomValue;
    long long _seed;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (char)setup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;

@end
