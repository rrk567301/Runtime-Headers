@class QCBooleanPort;

@interface QCColorMask : QCPatch {
    QCBooleanPort *inputRed;
    QCBooleanPort *inputGreen;
    QCBooleanPort *inputBlue;
    QCBooleanPort *inputAlpha;
}

+ (char)isSafe;
+ (int)executionModeWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)setup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
