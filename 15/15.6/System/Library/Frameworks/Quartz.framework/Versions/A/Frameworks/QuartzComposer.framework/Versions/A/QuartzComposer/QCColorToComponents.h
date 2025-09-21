@class QCColorPort, QCNumberPort;

@interface QCColorToComponents : QCPatch {
    QCColorPort *inputColor;
    QCNumberPort *output1;
    QCNumberPort *output2;
    QCNumberPort *output3;
    QCNumberPort *outputAlpha;
    int _mode;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
