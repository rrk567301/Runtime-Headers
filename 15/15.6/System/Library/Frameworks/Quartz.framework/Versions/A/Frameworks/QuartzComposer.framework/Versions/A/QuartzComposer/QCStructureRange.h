@class QCStructurePort, QCIndexPort;

@interface QCStructureRange : QCPatch {
    QCStructurePort *inputStructure;
    QCIndexPort *inputIndex;
    QCIndexPort *inputLength;
    QCStructurePort *outputStructure;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
