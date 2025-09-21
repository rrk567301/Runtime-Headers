@class QCIndexPort, QCStringPort;

@interface QCStringCompare : QCPatch {
    QCStringPort *inputString1;
    QCStringPort *inputString2;
    QCIndexPort *outputResult;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
