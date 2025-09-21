@class QCBooleanPort, QCIndexPort, QCNumberPort;

@interface QCSignal : QCPatch {
    QCIndexPort *inputMode;
    QCNumberPort *inputParam;
    QCBooleanPort *outputSignal;
    double _fireTime;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (void)enable:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
