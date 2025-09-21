@class QCIndexPort, QCStringPort;

@interface QCStringLength : QCPatch {
    QCStringPort *inputString;
    QCIndexPort *outputLength;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
