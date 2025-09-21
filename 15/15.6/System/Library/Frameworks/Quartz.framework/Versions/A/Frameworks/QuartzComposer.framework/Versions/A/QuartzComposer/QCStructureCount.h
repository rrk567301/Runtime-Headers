@class QCStructurePort, QCIndexPort;

@interface QCStructureCount : QCPatch {
    QCStructurePort *inputStructure;
    QCIndexPort *outputCount;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
