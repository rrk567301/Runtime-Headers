@class QCBooleanPort, QCNumberPort, QCIndexPort;

@interface QCConditional : QCPatch {
    QCNumberPort *inputValue1;
    QCIndexPort *inputTest;
    QCNumberPort *inputValue2;
    QCNumberPort *inputTolerance;
    QCBooleanPort *outputResult;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
