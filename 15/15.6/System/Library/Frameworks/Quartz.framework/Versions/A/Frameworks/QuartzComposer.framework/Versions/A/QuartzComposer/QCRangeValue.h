@class QCNumberPort;

@interface QCRangeValue : QCPatch {
    QCNumberPort *inputValue;
    QCNumberPort *inputMin;
    QCNumberPort *inputMax;
    QCNumberPort *outputClip;
    QCNumberPort *outputRoll;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
