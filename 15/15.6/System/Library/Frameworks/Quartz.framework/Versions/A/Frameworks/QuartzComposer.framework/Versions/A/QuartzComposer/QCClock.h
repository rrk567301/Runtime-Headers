@class QCNumberPort, QCBooleanPort;

@interface QCClock : QCPatch {
    QCBooleanPort *inputStartSignal;
    QCBooleanPort *inputStopSignal;
    QCBooleanPort *inputResetSignal;
    QCNumberPort *outputTime;
    char _lastStartSignal;
    char _lastStopSignal;
    char _lastResetSignal;
    double _startTime;
    double _stopTime;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)setup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;

@end
