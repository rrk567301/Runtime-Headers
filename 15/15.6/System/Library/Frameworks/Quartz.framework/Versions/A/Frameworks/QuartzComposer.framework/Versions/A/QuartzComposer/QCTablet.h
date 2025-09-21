@class QCNumberPort, QCBooleanPort;

@interface QCTablet : QCPatch {
    QCNumberPort *outputX;
    QCNumberPort *outputY;
    QCNumberPort *outputTiltX;
    QCNumberPort *outputTiltY;
    QCNumberPort *outputPressure;
    QCBooleanPort *outputTipButton;
    QCBooleanPort *outputLowerButton;
    QCBooleanPort *outputUpperButton;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (char)setup:(id)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
