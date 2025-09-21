@class QCIndexPort, QCStringPort;

@interface QCStringCase : QCPatch {
    QCStringPort *inputString;
    QCIndexPort *inputMode;
    QCStringPort *outputString;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
