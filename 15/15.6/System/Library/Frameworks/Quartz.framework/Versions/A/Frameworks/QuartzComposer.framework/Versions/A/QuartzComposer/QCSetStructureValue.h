@class QCStringPort, QCStructurePort, QCNumberPort;

@interface QCSetStructureValue : QCPatch {
    QCStructurePort *inputStructure;
    QCNumberPort *inputValue;
    QCStringPort *inputKeyPath;
    QCStructurePort *outputStructure;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (char)setup:(id)a0;
- (id)_setStructureValue:(id)a0 keyPath:(id)a1 value:(double)a2;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
