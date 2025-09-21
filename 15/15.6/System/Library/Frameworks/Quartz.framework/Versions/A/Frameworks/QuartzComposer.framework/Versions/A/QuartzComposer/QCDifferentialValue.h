@class QCNumberPort, QCBooleanPort;

@interface QCDifferentialValue : QCPatch {
    QCNumberPort *inputValue;
    QCBooleanPort *inputResetSignal;
    QCNumberPort *outputValue;
    char _lastResetSignal;
    char _integrate;
    double _lastTime;
    double _lastValue;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)setup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
