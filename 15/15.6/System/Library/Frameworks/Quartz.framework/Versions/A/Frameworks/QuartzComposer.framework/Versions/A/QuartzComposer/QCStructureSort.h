@class NSMutableArray, QCStructurePort, QCStringPort;

@interface QCStructureSort : QCPatch {
    QCStructurePort *inputStructure;
    QCStringPort *inputSortingKey;
    QCStructurePort *outputStructure;
    NSMutableArray *_cachedSortingKey;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (void)cleanup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
