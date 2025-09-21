@class QCNumberPort;

@interface QCRoundValue : QCPatch {
    QCNumberPort *inputValue;
    QCNumberPort *outputRound;
    QCNumberPort *outputFloor;
    QCNumberPort *outputCeil;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
