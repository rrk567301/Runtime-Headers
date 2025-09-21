@class QCNumberPort, QCIndexPort, QCColorPort;

@interface QCFog : QCPatch {
    QCIndexPort *inputType;
    QCColorPort *inputColor;
    QCNumberPort *inputDensity;
    QCNumberPort *inputStart;
    QCNumberPort *inputEnd;
    QCIndexPort *inputQuality;
    QCIndexPort *inputMode;
    char _modeSupported;
}

+ (char)isSafe;
+ (int)executionModeWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)setup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
