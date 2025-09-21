@class QCStructurePort, QCStringPort;

@interface QCStringComponents : QCPatch {
    QCStringPort *inputString;
    QCStringPort *inputSeparator;
    QCStructurePort *outputComponents;
    char _keylessStructures;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
