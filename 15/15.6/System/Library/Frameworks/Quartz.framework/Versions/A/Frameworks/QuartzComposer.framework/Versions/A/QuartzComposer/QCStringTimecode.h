@class QCNumberPort, QCStringPort;

@interface QCStringTimecode : QCPatch {
    QCNumberPort *inputTime;
    QCStringPort *outputString;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
