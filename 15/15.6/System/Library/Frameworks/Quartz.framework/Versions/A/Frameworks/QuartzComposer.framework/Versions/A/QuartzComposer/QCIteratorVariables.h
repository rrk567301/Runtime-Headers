@class QCNumberPort, QCIndexPort, QCIterator;

@interface QCIteratorVariables : QCPatch {
    QCIterator *_iterator;
    QCIndexPort *outputIndex;
    QCNumberPort *outputPosition;
    QCIndexPort *outputCount;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (char)setup:(id)a0;
- (char)_execute:(double)a0 arguments:(id)a1;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
